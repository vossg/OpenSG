#include "OSGConfig.h"

#include <iostream>

#include "OSGGLFW.h"

#include "OSGFieldContainerFactory.h"
#include "OSGVector.h"
#include "OSGQuaternion.h"
#include "OSGMatrix.h"
#include "OSGMatrixUtility.h"
#include "OSGBoxVolume.h"
#include "OSGLine.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGThread.h"
#include "OSGTransform.h"
#include "OSGAction.h"
#include "OSGRenderAction.h"
#include "OSGSimpleGeometry.h"
#include "OSGSceneFileHandler.h"
#include "OSGChunkOverrideGroup.h"
#include "OSGPolygonChunk.h"
#include "OSGDirectionalLight.h"

#include "OSGViewport.h"
#include "OSGCamera.h"
#include "OSGWindow.h"
#include "OSGGLFWWindow.h"
#include "OSGCamera.h"
#include "OSGPerspectiveCamera.h"
#include "OSGSolidBackground.h"
//#include "OSGUniformBackground.h"
#include "OSGOSGWriter.h"
#include "OSGChangeList.h"
#include "OSGIOStream.h"
#include "OSGGeoFunctions.h"
#include "OSGGraphOp.h"
#include "OSGGraphOpFactory.h"
#include "OSGMultiCore.h"
#include "OSGFrameHandler.h"

#include "OSGTrackball.h"

OSG::RenderActionRefPtr rentravact = NULL;

OSG::NodeRecPtr  root;

OSG::PerspectiveCameraRecPtr cam;
OSG::ViewportRecPtr vp;
OSG::WindowRecPtr win;

OSG::TransformRecPtr cam_trans;
OSG::TransformRecPtr scene_trans;

OSG::PolygonChunkRecPtr       pPoly;
bool                     bPolyActive = false;
OSG::ChunkOverrideGroupRecPtr pCOver;

OSG::GLFWWindowUnrecPtr gwin;

OSG::Trackball tball;

bool move_obj = false;

int mouseb = 0;
int lastx=0, lasty=0;
bool mouseMoved = false;

OSG::UInt32 winW = 512;
OSG::UInt32 winH = 512;

OSG::Quaternion oldq;
OSG::Vec3f      oldv;

void display(GLFWwindow *pWindow)
{
    OSG::Matrix m1, m2, m3;
    OSG::Quaternion q1;

    tball.getRotation().getValue(m3);

    q1.setValue(m3);

    m1.setRotate(q1);
    
//    std::cout << "TBROT" << std::endl << tball.getRotation() << endl;
//    std::cout << "M3" << std::endl << m3 << std::endl;
//    std::cout << "Q1" << std::endl << q1 << std::endl;
//    std::cout << "M1" << std::endl << m1 << std::endl;

//  m1.setRotate( tball.getRotation() );
    m2.setTranslate( tball.getPosition() );
    
//std::cout << "Pos: " << tball.getPosition() << ", Rot: " << tball.getRotation() << std::endl;

//    std::cout << tball.getRotation() << std::endl;

    m1.mult( m2 );

//    std::cerr << m1 << std::endl;
    
    m1 = tball.getFullTrackballMatrix();

    if(move_obj == true)
    {
        scene_trans->editSFMatrix()->setValue( m1 );
    }
    else
    {
        cam_trans->editSFMatrix()->setValue( m1 );
    }

    OSG::FrameHandler::the()->frame();

    OSG::commitChanges();

    win->render(rentravact);

//    win->render(renact);

//    std::cerr << "------------- AR START --------------" << std::endl;

//    Thread::getCurrentChangeList()->dump();
}

void reshape(GLFWwindow *pWindow, int w, int h)
{
    std::cerr << "Reshape: " << w << "," << h << std::endl;
    win->resize( w, h );
}


void animate(void)
{
//    glutPostRedisplay();
}

// tballall stuff

void handleLeftClick(int x, int y)
{
    fprintf(stderr, "mouse click at %d %d\n", x, y);
}

//void motion(int x, int y)
void motion(GLFWwindow *window, double dX, double dY)
{   
    OSG::Real32 w = win->getWidth(), h = win->getHeight();
    
    OSG::Int32 x = dX;
    OSG::Int32 y = dY;

    OSG::Real32  a = -2. * ( lastx / w - .5 ),
                 b = -2. * ( .5 - lasty / h ),
                 c = -2. * ( x / w - .5 ),
                 d = -2. * ( .5 - y / h );

    OSG::Int32 leftdown   = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT  );
    OSG::Int32 rightdown  = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT );
    OSG::Int32 middledown = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_MIDDLE);

    if(leftdown == GLFW_PRESS)
    {
        tball.updateRotation( a, b, c, d );     
    }
    else if(middledown == GLFW_PRESS)
    {
        tball.updatePosition( a, b, c, d );     
    }
    else if(rightdown == GLFW_PRESS)
    {
        tball.updatePositionNeg( a, b, c, d );  
    }

    if(lastx != x || lasty != y)
    {
        mouseMoved = true;
    }

    lastx = x;
    lasty = y;
}

void motionWheel(GLFWwindow *pWindow, double xoffset, double yoffset)
{
    tball.setAutoPosition(true);
                  
    OSG::Real32 a,b,c,d;

    a = 0.f;
    b = 0.f;
                            
    c = 0.f;
    d = yoffset * 0.1f;

    tball.updatePositionNeg(a, b, c, d);

//    updateModelView();

    double x;
    double y;

    glfwGetCursorPos(pWindow, &x, &y);

    lastx = x;
    lasty = y;

//    bSignalRedraw = true;
}

//void mouse(int button, int state, int x, int y)
void mouse(GLFWwindow *pWindow, int button, int action, int mods)
{
    if(action == GLFW_PRESS)
    {
        switch(button)
        {
            case GLFW_MOUSE_BUTTON_LEFT:
                mouseMoved = false;
                break;
            case GLFW_MOUSE_BUTTON_MIDDLE:
                tball.setAutoPosition(true);
                break;
            case GLFW_MOUSE_BUTTON_RIGHT:     
                tball.setAutoPositionNeg(true);
                break;
        }
    }
    else if(action == GLFW_RELEASE)
    {
        switch(button)
        {
            case GLFW_MOUSE_BUTTON_LEFT:
                if(mouseMoved == false)
                    handleLeftClick(lastx, lasty);
                break;
            case GLFW_MOUSE_BUTTON_MIDDLE:
                tball.setAutoPosition(false);
                break;
            case GLFW_MOUSE_BUTTON_RIGHT:     
                tball.setAutoPositionNeg(false);
                break;
        }       
    }


    double x;
    double y;

    glfwGetCursorPos(pWindow, &x, &y);

    lastx = x;
    lasty = y;
}

#if 0
void vis(int visible)
{
    if (visible == GLUT_VISIBLE) 
    {
        glutIdleFunc(animate);
    } 
    else 
    {
        glutIdleFunc(NULL);
    }
}
#endif

void nonCharKey(GLFWwindow *pWindow, int key, int s, int action, int mods)
{
    if(action != GLFW_PRESS) 
        return;

    switch(key)
    {
        case GLFW_KEY_ESCAPE:
        {
            glfwSetWindowShouldClose(pWindow, GLFW_TRUE);
        }
        break;

        default:
        break;
    }
}

//void key(unsigned char key, int x, int y)
void key(GLFWwindow* window, unsigned int key)
{
    switch ( key )
    {
        case 'v':
            rentravact->setVolumeDrawing(!rentravact->getVolumeDrawing());
            break;
        case 'a':   
            glDisable( GL_LIGHTING );
            std::cerr << "Lighting disabled." << std::endl;
            break;
        case 's':   
            glEnable( GL_LIGHTING );
            std::cerr << "Lighting enabled." << std::endl;
            break;
        case 'z':   
            pPoly->setFrontMode(GL_POINT);
            pPoly->setBackMode(GL_POINT);
            std::cerr << "PolygonMode: Point." << std::endl;
            break;
        case 'x':   
            pPoly->setFrontMode(GL_LINE);
            pPoly->setBackMode(GL_LINE);
            std::cerr << "PolygonMode: Line." << std::endl;
            break;
        case 'c':   
            pPoly->setFrontMode(GL_FILL);
            pPoly->setBackMode(GL_FILL);
            std::cerr << "PolygonMode: Fill." << std::endl;
            break;
        case 'p':
        {
            if(bPolyActive == true)
            {
                OSG_ASSERT(pCOver->subChunk(pPoly) == true);
                bPolyActive = false;
            }
            else
            {
                OSG_ASSERT(pCOver->addChunk(pPoly) == true);
                bPolyActive = true;
            }
            break;
        }
        case 'r':   
        {
#if 0
            std::cerr << "Sending ray through " << x << "," << y << std::endl;
            OSG::Line l;
            cam->calcViewRay( l, x, y, *vp );
            std::cerr << "From " << l.getPosition() << ", dir " 
                      << l.getDirection()
                      << std::endl;
#endif
        }
        break;

        case ' ':
        {
            OSG::Matrix     m;
            OSG::Quaternion q;
            OSG::Vec3f      v;

            q = oldq;
            v = oldv;

            oldq = tball.getRotation();
            oldv = tball.getPosition();

            move_obj = ! move_obj;
            if ( move_obj )
            {
                puts("moving object");
//                m = scene_trans->getSFMatrix()->getValue();
                tball.setMode( OSG::Trackball::OSGCamera );

            }
            else
            {
                puts("moving camera");
//                m = cam_trans->getSFMatrix()->getValue();
                tball.setMode( OSG::Trackball::OSGObject );
            }
            
//            q.setValue(m);
            tball.setStartPosition( v, true );
            tball.setStartRotation( q, true );

//            std::cout << q << std::endl;
//            std::cout << v << std::endl;

//            std::cout << " " << m[3][0] << " " << m[3][1] << " " << m[3][2] << std::endl;
            
        }
        break;
    }
}


int init(int argc, char **argv)
{
    OSG::osgInit(argc,argv);

    OSG::setVBOUsageOnPropertyProtos(true);


#if 0
    // GLUT init

    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    int winid = glutCreateWindow("OpenSG");
    glutKeyboardFunc(key);
    glutVisibilityFunc(vis);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);       
    glutMouseFunc(mouse);   
    glutMotionFunc(motion); 
    
    glutIdleFunc(display);  
#endif

    if(glfwInit() == false)
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    glfwDefaultWindowHints();

    glfwWindowHint(GLFW_CONTEXT_CREATION_API, GLFW_NATIVE_CONTEXT_API);
    //glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT,  GLFW_TRUE               );

    //glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3                       );
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2                       );

    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE               );
    //glfwWindowHint(GLFW_OPENGL_PROFILE,        GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_PROFILE,        
    //               GLFW_OPENGL_COMPAT_PROFILE);

    GLFWwindow *pWindow = glfwCreateWindow(winW, winH, 
                                           "OpenSG", 
                                           NULL, NULL);

    if(pWindow == nullptr)
    {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    int32_t iX;
    int32_t iY;

    glfwGetFramebufferSize(pWindow, &iX, &iY);

    assert(uint32_t(iX) == winW);
    assert(uint32_t(iY) == winH);

    glfwSetFramebufferSizeCallback(pWindow, &reshape    );
    glfwSetMouseButtonCallback    (pWindow, &mouse      );
    glfwSetCursorPosCallback      (pWindow, &motion     );
    glfwSetScrollCallback         (pWindow, &motionWheel);
    glfwSetKeyCallback            (pWindow, &nonCharKey );
    glfwSetCharCallback           (pWindow, &key        );

    glfwMakeContextCurrent(pWindow);
    glfwSwapInterval(1);


    // glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
    
//    glEnable( GL_DEPTH_TEST );
//    glEnable( GL_LIGHTING );
//    glEnable( GL_LIGHT0 );
//    glFrontFace(GL_CW);
//    glEnable(GL_CULL_FACE);

    // OSG

    OSG::SceneFileHandler::the()->print();

    // create the graph

    // beacon for camera and light  
    OSG::NodeUnrecPtr b1n = OSG::Node::create();
    OSG::GroupUnrecPtr b1 = OSG::Group::create();

    b1n->setCore( b1 );

    // transformation
    OSG::NodeUnrecPtr t1n = OSG::Node::create();
    OSG::TransformUnrecPtr t1 = OSG::Transform::create();

    t1n->setCore( t1 );
    t1n->addChild( b1n );

    cam_trans = t1;

    // light
    
    OSG::NodeUnrecPtr dlight = OSG::Node::create();
    OSG::DirectionalLightUnrecPtr dl = OSG::DirectionalLight::create();

    dlight->setCore( dl );
//    dlight->setCore( Group::create() );
    
    dl->setAmbient( .0, .0, .0, 1 );
    dl->setDiffuse( .8f, .8f, .8f, 1.f );
    dl->setDirection(0,0,1);
    dl->setBeacon( b1n);

    // root
    root = OSG::Node::create();
    OSG::GroupUnrecPtr gr1 = OSG::Group::create();

    root->setCore( gr1 );
    root->addChild( t1n );
    root->addChild( dlight );

    // Load the file

    OSG::NodeUnrecPtr file = NULL;
    
    if(argc > 1)
        file = OSG::SceneFileHandler::the()->read(argv[1], NULL, NULL);
    
    if ( file == NULL )
    {
        std::cerr << "Couldn't load file, ignoring" << std::endl;

        file = OSG::makeSphere(4, 2.0);

    }

    OSG::Thread::getCurrentChangeList()->commitChanges();

#if 0
    OSG::GeometryPtr pGeo = cast_dynamic<OSG::GeometryPtr>(file->getCore());
    
    if(pGeo == NULL && file->getNChildren() != 0)
    {
        pGeo = cast_dynamic<OSG::GeometryPtr>(file->getChild(0)->getCore());
    }

    if(pGeo == NULL)
    {
        fprintf(stderr, "no geo\n");
    }
#endif

    OSG::GraphOpRefPtr op = OSG::GraphOpFactory::the()->create("Stripe");

//    op->traverse(file);
//   createOptimizedPrimitives(pGeo);
//    createSharedIndex(pGeo);
    

//    file->dump();
    file->updateVolume();

#if 0
    const char *outFileName = "/tmp/foo1.osg";

    OSG::IndentFileOutStream outFileStream(outFileName);

    if( !outFileStream )
    {
        std::cerr << "Can not open output stream to file: "
                  << outFileName << std::endl;
        return -1;
    }

    std::cerr << "STARTING PRINTOUT:" << std::endl;
    OSG::OSGWriter writer( outFileStream, 4 );

    writer.write( file );

    outFileStream.close();

    OSG::SceneFileHandler::the()->write(file, "/tmp/foo.osb");
#endif    


//    return 0;


    OSG::Vec3f min,max;
    file->getVolume().getBounds( min, max );
    

    std::cout << "Volume: from " << min << " to " << max << std::endl;


//    NodePtr pChunkOverNode = Node::create();
  

//    pChunkOverNode->setCore(pCOver);
//    pChunkOverNode->addChild(file);

    OSG::MultiCoreUnrecPtr pMCore = OSG::MultiCore::create();

    pCOver      = OSG::ChunkOverrideGroup::create();
    scene_trans = OSG::Transform::create();

    pMCore->addCore(scene_trans);
    pMCore->addCore(pCOver     );

    OSG::NodeUnrecPtr sceneTrN = OSG::Node::create();

    sceneTrN->setCore(pMCore);
    sceneTrN->addChild(file);


    dlight->addChild(sceneTrN);

    std::cerr << "Tree: " << std::endl;
//  root->dump();

    // Camera
    
    cam = OSG::PerspectiveCamera::create();

    cam->setBeacon( b1n );
    cam->setFov( OSG::osgDegree2Rad( 90 ) );
    cam->setNear( 0.1f );
    cam->setFar( 10000 );

    // Background
    OSG::SolidBackgroundUnrecPtr bkgnd = OSG::SolidBackground::create();

    bkgnd->setColor(OSG::Color3f(0.7,0.7,0.7));
    
    // Viewport

    vp = OSG::Viewport::create();

    vp->setCamera( cam );
    vp->setBackground( bkgnd );
    vp->setRoot( root );
    vp->setSize( 0,0, 1,1 );

//    vp->dump();

    // Window
//    std::cout << "GLUT winid: " << winid << std::endl;


    GLint glvp[4];

    glGetIntegerv( GL_VIEWPORT, glvp );

    gwin = OSG::GLFWWindow::create();
    gwin->setGlfwWindow(pWindow);
    gwin->setSize( glvp[2], glvp[3] );

    win = gwin;

    win->addPort( vp );

    win->init();

    reshape(pWindow, winW, winH);

    // Action
    
    rentravact = OSG::RenderAction::create();
//    renact->setFrustumCulling(false);

    rentravact->setCorrectTwoSidedLighting(true);

    // tball

    OSG::Vec3f pos;
    pos.setValues(min[0] + ((max[0] - min[0]) * 0.5), 
                  min[1] + ((max[1] - min[1]) * 0.5), 
                  max[2] + ( max[2] - min[2] ) * 1.5 );
    
    float scale = (max[2] - min[2] + max[1] - min[1] + max[0] - min[0]) / 6;

    OSG::Pnt3f tCenter(min[0] + (max[0] - min[0]) / 2,
                       min[1] + (max[1] - min[1]) / 2,
                       min[2] + (max[2] - min[2]) / 2);

    fprintf(stderr, "Startpos : %f %f %f\n", pos[0], pos[1], pos[2]);

    tball.setMode( OSG::Trackball::OSGObject );
    tball.setStartPosition( pos, true );
    tball.setSum( true );
    tball.setTranslationMode( OSG::Trackball::OSGFree );
    tball.setTranslationScale(scale);
    tball.setRotationCenter(tCenter);

    fprintf(stderr, "%d\n", 
            OSG::MFUnrecNodePtr          ::getClassType().getId());
    fprintf(stderr, "%d\n", 
            OSG::MFUnrecFieldContainerPtr::getClassType().getId());

//    MFNodePtr          ::getClassType().dump();
//    MFFieldContainerPtr::getClassType().dump();

    // run...
    
    pPoly = OSG::PolygonChunk::create();

    pCOver->subChunk(pPoly);

#if 0
    GroupNodePtr pGr = GroupNodePtr::create();

    NodePtr  pN;
    GroupPtr pG;

    fprintf(stderr, "A\n");

    if(pGr == NULL)
    {
    }

    fprintf(stderr, "B\n");

    if(pGr == pN)
    {
    }

    fprintf(stderr, "C\n");

    if(pGr == pG)
    {
    }

    pGr = NULL;
#endif

    OSG::FrameHandler::the()->init();

    while(glfwWindowShouldClose(pWindow) == false)
    {
//        if(bSignalRedraw == true)
        {
            display(pWindow);                
        }

        glfwPollEvents();
    }

    OSG::FrameHandler::the()->shutdown();

    return 0;
}

int main (int argc, char **argv)
{
    init(argc, argv);

    // relase globals
    root        = NULL;
    cam         = NULL;
    vp          = NULL;
    win         = NULL;
    cam_trans   = NULL;
    scene_trans = NULL;
    pPoly       = NULL;
    pCOver      = NULL;
    gwin        = NULL;

    rentravact  = NULL;


    OSG::osgExit(); 

    return 0;
}

