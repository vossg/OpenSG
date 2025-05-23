/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PostShaderStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#ifdef WIN32 
#pragma warning(disable: 4355) // turn off 'this' : used in base member initializer list warning
#pragma warning(disable: 4290) // disable exception specification warning
#endif

#include "OSGConfig.h"


#include "OSGGLEXT.h"                     // ColorBufferFormat default header


#include "OSGPostShaderStageBase.h"
#include "OSGPostShaderStage.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PostShaderStage
    A stage that uses a shader in a post-process.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          PostShaderStageBase::_sfColorBufferFormat
    
*/

/*! \var bool            PostShaderStageBase::_sfUseColorTextureBuffer
    Use a texture buffer with the frame buffer object so that the 
    color buffer is available as a texture in the shader.
*/

/*! \var bool            PostShaderStageBase::_sfUseDepthTextureBuffer
    Use a texture buffer with the frame buffer object so that the 
    depth buffer is available as a texture in the shader.
*/

/*! \var std::string     PostShaderStageBase::_mfVertexShaders
    The shader code to use for the vertex program of the post-processess.
*/

/*! \var std::string     PostShaderStageBase::_mfFragmentShaders
    The shader code to use for the post-processess.
*/

/*! \var Vec2f           PostShaderStageBase::_mfPassSizes
    The size of the texture buffers used for the post-processess.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PostShaderStage *, nsOSG>::_type(
    "PostShaderStagePtr", 
    "StagePtr", 
    PostShaderStage::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PostShaderStage *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PostShaderStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "ColorBufferFormat",
        "",
        ColorBufferFormatFieldId, ColorBufferFormatFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandleColorBufferFormat),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandleColorBufferFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "UseColorTextureBuffer",
        "Use a texture buffer with the frame buffer object so that the \n"
        "color buffer is available as a texture in the shader.\n",
        UseColorTextureBufferFieldId, UseColorTextureBufferFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandleUseColorTextureBuffer),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandleUseColorTextureBuffer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "UseDepthTextureBuffer",
        "Use a texture buffer with the frame buffer object so that the \n"
        "depth buffer is available as a texture in the shader.\n",
        UseDepthTextureBufferFieldId, UseDepthTextureBufferFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandleUseDepthTextureBuffer),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandleUseDepthTextureBuffer));

    oType.addInitialDesc(pDesc);

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "VertexShaders",
        "The shader code to use for the vertex program of the post-processess.\n",
        VertexShadersFieldId, VertexShadersFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandleVertexShaders),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandleVertexShaders));

    oType.addInitialDesc(pDesc);

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "FragmentShaders",
        "The shader code to use for the post-processess.\n",
        FragmentShadersFieldId, FragmentShadersFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandleFragmentShaders),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandleFragmentShaders));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec2f::Description(
        MFVec2f::getClassType(),
        "PassSizes",
        "The size of the texture buffers used for the post-processess.\n",
        PassSizesFieldId, PassSizesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStage::editHandlePassSizes),
        static_cast<FieldGetMethodSig >(&PostShaderStage::getHandlePassSizes));

    oType.addInitialDesc(pDesc);
}


PostShaderStageBase::TypeObject PostShaderStageBase::_type(
    PostShaderStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PostShaderStageBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&PostShaderStage::initMethod),
    reinterpret_cast<ExitContainerF>(&PostShaderStage::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&PostShaderStage::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"PostShaderStage\"\n"
    "   parent=\"Stage\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   isBundle=\"false\"\n"
    "   docGroupBase=\"GrpEffectsGroupsMisc\"\n"
    "   authors=\"David Kabala (djkabala@gmail.com)\"\n"
    "   >\n"
    "   A stage that uses a shader in a post-process.\n"
    "   <Field\n"
    "       name=\"ColorBufferFormat\"\n"
    "       type=\"GLenum\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       defaultValue=\"GL_RGB\"\n"
    "       defaultHeader=\"&quot;OSGGLEXT.h&quot;\"\n"
    "       access=\"public\"\n"
    "       >\n"
    "   </Field>\n"
    "   <Field\n"
    "       name=\"UseColorTextureBuffer\"\n"
    "       type=\"bool\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       defaultValue=\"true\"\n"
    "       access=\"public\"\n"
    "       >\n"
    "       Use a texture buffer with the frame buffer object so that the \n"
    "       color buffer is available as a texture in the shader.\n"
    "   </Field>\n"
    "   <Field\n"
    "       name=\"UseDepthTextureBuffer\"\n"
    "       type=\"bool\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       defaultValue=\"false\"\n"
    "       access=\"public\"\n"
    "       >\n"
    "       Use a texture buffer with the frame buffer object so that the \n"
    "       depth buffer is available as a texture in the shader.\n"
    "   </Field>\n"
    "   <Field\n"
    "       name=\"VertexShaders\"\n"
    "       type=\"std::string\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"multi\"\n"
    "       visibility=\"external\"\n"
    "       access=\"protected\"\n"
    "       >\n"
    "       The shader code to use for the vertex program of the post-processess.\n"
    "   </Field>\n"
    "   <Field\n"
    "       name=\"FragmentShaders\"\n"
    "       type=\"std::string\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"multi\"\n"
    "       visibility=\"external\"\n"
    "       access=\"protected\"\n"
    "       >\n"
    "       The shader code to use for the post-processess.\n"
    "   </Field>\n"
    "   <Field\n"
    "       name=\"PassSizes\"\n"
    "       type=\"Vec2f\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"multi\"\n"
    "       visibility=\"external\"\n"
    "       access=\"protected\"\n"
    "       >\n"
    "       The size of the texture buffers used for the post-processess.\n"
    "   </Field>\n"
    "</FieldContainer>\n",
    "A stage that uses a shader in a post-process.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PostShaderStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &PostShaderStageBase::getType(void) const
{
    return _type;
}

UInt32 PostShaderStageBase::getContainerSize(void) const
{
    return sizeof(PostShaderStage);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *PostShaderStageBase::editSFColorBufferFormat(void)
{
    editSField(ColorBufferFormatFieldMask);

    return &_sfColorBufferFormat;
}

const SFGLenum *PostShaderStageBase::getSFColorBufferFormat(void) const
{
    return &_sfColorBufferFormat;
}


SFBool *PostShaderStageBase::editSFUseColorTextureBuffer(void)
{
    editSField(UseColorTextureBufferFieldMask);

    return &_sfUseColorTextureBuffer;
}

const SFBool *PostShaderStageBase::getSFUseColorTextureBuffer(void) const
{
    return &_sfUseColorTextureBuffer;
}


SFBool *PostShaderStageBase::editSFUseDepthTextureBuffer(void)
{
    editSField(UseDepthTextureBufferFieldMask);

    return &_sfUseDepthTextureBuffer;
}

const SFBool *PostShaderStageBase::getSFUseDepthTextureBuffer(void) const
{
    return &_sfUseDepthTextureBuffer;
}


MFString *PostShaderStageBase::editMFVertexShaders(void)
{
    editMField(VertexShadersFieldMask, _mfVertexShaders);

    return &_mfVertexShaders;
}

const MFString *PostShaderStageBase::getMFVertexShaders(void) const
{
    return &_mfVertexShaders;
}


MFString *PostShaderStageBase::editMFFragmentShaders(void)
{
    editMField(FragmentShadersFieldMask, _mfFragmentShaders);

    return &_mfFragmentShaders;
}

const MFString *PostShaderStageBase::getMFFragmentShaders(void) const
{
    return &_mfFragmentShaders;
}


MFVec2f *PostShaderStageBase::editMFPassSizes(void)
{
    editMField(PassSizesFieldMask, _mfPassSizes);

    return &_mfPassSizes;
}

const MFVec2f *PostShaderStageBase::getMFPassSizes(void) const
{
    return &_mfPassSizes;
}






/*------------------------------ access -----------------------------------*/

SizeT PostShaderStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorBufferFormatFieldMask & whichField))
    {
        returnValue += _sfColorBufferFormat.getBinSize();
    }
    if(FieldBits::NoField != (UseColorTextureBufferFieldMask & whichField))
    {
        returnValue += _sfUseColorTextureBuffer.getBinSize();
    }
    if(FieldBits::NoField != (UseDepthTextureBufferFieldMask & whichField))
    {
        returnValue += _sfUseDepthTextureBuffer.getBinSize();
    }
    if(FieldBits::NoField != (VertexShadersFieldMask & whichField))
    {
        returnValue += _mfVertexShaders.getBinSize();
    }
    if(FieldBits::NoField != (FragmentShadersFieldMask & whichField))
    {
        returnValue += _mfFragmentShaders.getBinSize();
    }
    if(FieldBits::NoField != (PassSizesFieldMask & whichField))
    {
        returnValue += _mfPassSizes.getBinSize();
    }

    return returnValue;
}

void PostShaderStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorBufferFormatFieldMask & whichField))
    {
        _sfColorBufferFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseColorTextureBufferFieldMask & whichField))
    {
        _sfUseColorTextureBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseDepthTextureBufferFieldMask & whichField))
    {
        _sfUseDepthTextureBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VertexShadersFieldMask & whichField))
    {
        _mfVertexShaders.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShadersFieldMask & whichField))
    {
        _mfFragmentShaders.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PassSizesFieldMask & whichField))
    {
        _mfPassSizes.copyToBin(pMem);
    }
}

void PostShaderStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorBufferFormatFieldMask & whichField))
    {
        editSField(ColorBufferFormatFieldMask);
        _sfColorBufferFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseColorTextureBufferFieldMask & whichField))
    {
        editSField(UseColorTextureBufferFieldMask);
        _sfUseColorTextureBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseDepthTextureBufferFieldMask & whichField))
    {
        editSField(UseDepthTextureBufferFieldMask);
        _sfUseDepthTextureBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VertexShadersFieldMask & whichField))
    {
        editMField(VertexShadersFieldMask, _mfVertexShaders);
        _mfVertexShaders.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShadersFieldMask & whichField))
    {
        editMField(FragmentShadersFieldMask, _mfFragmentShaders);
        _mfFragmentShaders.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PassSizesFieldMask & whichField))
    {
        editMField(PassSizesFieldMask, _mfPassSizes);
        _mfPassSizes.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PostShaderStageTransitPtr PostShaderStageBase::createLocal(BitVector bFlags)
{
    PostShaderStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PostShaderStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PostShaderStageTransitPtr PostShaderStageBase::createDependent(BitVector bFlags)
{
    PostShaderStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PostShaderStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PostShaderStageTransitPtr PostShaderStageBase::create(void)
{
    PostShaderStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PostShaderStage>(tmpPtr);
    }

    return fc;
}

PostShaderStage *PostShaderStageBase::createEmptyLocal(BitVector bFlags)
{
    PostShaderStage *returnValue;

    newPtr<PostShaderStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PostShaderStage *PostShaderStageBase::createEmpty(void)
{
    PostShaderStage *returnValue;

    newPtr<PostShaderStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PostShaderStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PostShaderStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PostShaderStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PostShaderStageBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PostShaderStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PostShaderStage *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PostShaderStageBase::shallowCopy(void) const
{
    PostShaderStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PostShaderStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PostShaderStageBase::PostShaderStageBase(void) :
    Inherited(),
    _sfColorBufferFormat      (GLenum(GL_RGB)),
    _sfUseColorTextureBuffer  (bool(true)),
    _sfUseDepthTextureBuffer  (bool(false)),
    _mfVertexShaders          (),
    _mfFragmentShaders        (),
    _mfPassSizes              ()
{
}

PostShaderStageBase::PostShaderStageBase(const PostShaderStageBase &source) :
    Inherited(source),
    _sfColorBufferFormat      (source._sfColorBufferFormat      ),
    _sfUseColorTextureBuffer  (source._sfUseColorTextureBuffer  ),
    _sfUseDepthTextureBuffer  (source._sfUseDepthTextureBuffer  ),
    _mfVertexShaders          (source._mfVertexShaders          ),
    _mfFragmentShaders        (source._mfFragmentShaders        ),
    _mfPassSizes              (source._mfPassSizes              )
{
}


/*-------------------------- destructors ----------------------------------*/

PostShaderStageBase::~PostShaderStageBase(void)
{
}


GetFieldHandlePtr PostShaderStageBase::getHandleColorBufferFormat (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfColorBufferFormat,
             this->getType().getFieldDesc(ColorBufferFormatFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandleColorBufferFormat(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfColorBufferFormat,
             this->getType().getFieldDesc(ColorBufferFormatFieldId),
             this));


    editSField(ColorBufferFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageBase::getHandleUseColorTextureBuffer (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseColorTextureBuffer,
             this->getType().getFieldDesc(UseColorTextureBufferFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandleUseColorTextureBuffer(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseColorTextureBuffer,
             this->getType().getFieldDesc(UseColorTextureBufferFieldId),
             this));


    editSField(UseColorTextureBufferFieldMask);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageBase::getHandleUseDepthTextureBuffer (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseDepthTextureBuffer,
             this->getType().getFieldDesc(UseDepthTextureBufferFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandleUseDepthTextureBuffer(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseDepthTextureBuffer,
             this->getType().getFieldDesc(UseDepthTextureBufferFieldId),
             this));


    editSField(UseDepthTextureBufferFieldMask);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageBase::getHandleVertexShaders   (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfVertexShaders,
             this->getType().getFieldDesc(VertexShadersFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandleVertexShaders  (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfVertexShaders,
             this->getType().getFieldDesc(VertexShadersFieldId),
             this));


    editMField(VertexShadersFieldMask, _mfVertexShaders);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageBase::getHandleFragmentShaders (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfFragmentShaders,
             this->getType().getFieldDesc(FragmentShadersFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandleFragmentShaders(void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfFragmentShaders,
             this->getType().getFieldDesc(FragmentShadersFieldId),
             this));


    editMField(FragmentShadersFieldMask, _mfFragmentShaders);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageBase::getHandlePassSizes       (void) const
{
    MFVec2f::GetHandlePtr returnValue(
        new  MFVec2f::GetHandle(
             &_mfPassSizes,
             this->getType().getFieldDesc(PassSizesFieldId),
             const_cast<PostShaderStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageBase::editHandlePassSizes      (void)
{
    MFVec2f::EditHandlePtr returnValue(
        new  MFVec2f::EditHandle(
             &_mfPassSizes,
             this->getType().getFieldDesc(PassSizesFieldId),
             this));


    editMField(PassSizesFieldMask, _mfPassSizes);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PostShaderStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PostShaderStage *pThis = static_cast<PostShaderStage *>(this);

    pThis->execSync(static_cast<PostShaderStage *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PostShaderStageBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PostShaderStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PostShaderStage *>(pRefAspect),
                  dynamic_cast<const PostShaderStage *>(this));

    return returnValue;
}
#endif

void PostShaderStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVertexShaders.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfFragmentShaders.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPassSizes.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
