/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#if defined(OSG_WITH_GLFW) || defined(OSG_DO_DOC)

#define OSG_COMPILEWINDOWGLFWINST

#include "OSGGLFWWindow.h"

#include "OSGGLFW.h"

#include "OSGViewport.h"
#include "OSGCamera.h"
#include "OSGBackground.h"
#include "OSGGLFWWindow.h"
#include "OSGRenderActionBase.h"
#include "OSGRenderActionTask.h"

#ifdef OSG_USE_GLX
#include <GL/glx.h>
#endif
#ifdef __APPLE__
#include "OSGCocoaWindowWrapper.h"
#endif

OSG_BEGIN_NAMESPACE

// Documentation for this class is emited in the
// OSGGLFWWindowBase.cpp file.
// To modify it, please change the .fcd file (OSGGLFWWindow.fcd) and
// regenerate the base file.

/*----------------------- constructors & destructors ----------------------*/

//! Constructor
GLFWWindow::GLFWWindow(void) :
    Inherited()
{
    _sfDrawMode.setValue(
        (_sfDrawMode.getValue()  & ~Window::ContextMask) | 
        (Window::ExternalContext &  Window::ContextMask) );
}

//! Copy Constructor
GLFWWindow::GLFWWindow(const GLFWWindow &source) :
    Inherited(source)
{
    _sfDrawMode.setValue(
        (_sfDrawMode.getValue()  & ~Window::ContextMask) | 
        (Window::ExternalContext &  Window::ContextMask) );
}

//! Destructor
GLFWWindow::~GLFWWindow(void)
{
}

/*----------------------------- class specific ----------------------------*/

//! initialize the static features of the class, e.g. action callbacks

void GLFWWindow::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

//! react to field changes
void GLFWWindow::changed(ConstFieldMaskArg whichField, 
                         UInt32            origin,
                         BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

//! output the instance for debug purposes

void GLFWWindow::dump(      UInt32    , 
                      const BitVector ) const
{
    SLOG << "Dump GLFWWindow NI" << std::endl;
}
    
/* ------------- Window functions -----------------------*/    
    
// init the window: create the context  
void GLFWWindow::init(GLInitFunctor oFunc)
{
#if defined(WIN32)
    Inherited::setHdc  (wglGetCurrentDC     ());
    Inherited::setHglrc(wglGetCurrentContext());
    Inherited::setHwnd (WindowFromDC(Inherited::getHdc()));
#elif defined(__APPLE__)
    Inherited::setContext(cocoaWrapperCurrentContext());
#else
    glfwMakeContextCurrent(this->getGlfwWindow());

    Inherited::setDisplay(glXGetCurrentDisplay ());
    Inherited::setContext(glXGetCurrentContext ());
    Inherited::setWindow (glXGetCurrentDrawable());
#endif
    this->doDeactivate();

    Window::init(oFunc);
}
    
void GLFWWindow::activate(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        if(glfwGetCurrentContext() != this->getGlfwWindow())
            glfwMakeContextCurrent(this->getGlfwWindow());

        Inherited::doActivate();
    }
}

void GLFWWindow::terminate(void)
{
    Window::doTerminate();

    Inherited::setContext(NULL);
}

OSG_END_NAMESPACE

#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

DataType FieldTraits<GLFWwindowP>::_type("GLFWwindowP", NULL);

OSG_FIELD_DLLEXPORT_DEF2(SField, GLFWwindowP, 0)
OSG_FIELD_DLLEXPORT_DEF2(MField, GLFWwindowP, 0)

OSG_END_NAMESPACE

#endif // OSG_WITH_GLFW

