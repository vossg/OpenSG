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
 **     class FogStage!
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


#include "OSGGLEXT.h"                     // BufferFormat default header


#include "OSGFogStageBase.h"
#include "OSGFogStage.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FogStage
    A stage that preforms a fog effect as a post-process.  The fog is
    calculated the similarly to how OpenGL calculates fog in
    fixed-functionality mode. 
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          FogStageBase::_sfBufferFormat
    
*/

/*! \var Color4f         FogStageBase::_sfFogColor
    The color of the fog.
*/

/*! \var UInt16          FogStageBase::_sfFogMode
    The mode to use for calculating the fog.
*/

/*! \var Real32          FogStageBase::_sfFogStart
    The distance that the fog will start at when the FogMode is
    FOG_MODE_LINEAR. 
*/

/*! \var Real32          FogStageBase::_sfFogEnd
    The distance that the fog will end at when the FogMode is FOG_MODE_LINEAR.
*/

/*! \var Real32          FogStageBase::_sfFogDensity
    The of the fog when the FogMode is FOG_MODE_EXP or FOG_MODE_EXP2.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FogStage *, nsOSG>::_type(
    "FogStagePtr", 
    "StagePtr", 
    FogStage::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FogStage *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FogStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "BufferFormat",
        "",
        BufferFormatFieldId, BufferFormatFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleBufferFormat),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleBufferFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "FogColor",
        "The color of the fog.\n",
        FogColorFieldId, FogColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleFogColor),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleFogColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "FogMode",
        "The mode to use for calculating the fog.\n",
        FogModeFieldId, FogModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleFogMode),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleFogMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FogStart",
        "The distance that the fog will start at when the FogMode is\n"
        "FOG_MODE_LINEAR. \n",
        FogStartFieldId, FogStartFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleFogStart),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleFogStart));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FogEnd",
        "The distance that the fog will end at when the FogMode is FOG_MODE_LINEAR.\n",
        FogEndFieldId, FogEndFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleFogEnd),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleFogEnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "FogDensity",
        "The of the fog when the FogMode is FOG_MODE_EXP or FOG_MODE_EXP2.\n",
        FogDensityFieldId, FogDensityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FogStage::editHandleFogDensity),
        static_cast<FieldGetMethodSig >(&FogStage::getHandleFogDensity));

    oType.addInitialDesc(pDesc);
}


FogStageBase::TypeObject FogStageBase::_type(
    FogStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FogStageBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&FogStage::initMethod),
    reinterpret_cast<ExitContainerF>(&FogStage::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&FogStage::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"FogStage\"\n"
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
    "   docGroupBase=\"GrpEffectsGroupsFog\"\n"
    "   authors=\"David Kabala (djkabala@gmail.com)\"\n"
    "   >\n"
    "   A stage that preforms a fog effect as a post-process.  The fog is\n"
    "   calculated the similarly to how OpenGL calculates fog in\n"
    "   fixed-functionality mode. \n"
    "   <Field\n"
    "       name=\"BufferFormat\"\n"
    "       type=\"GLenum\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       defaultValue=\"GL_RGB\"\n"
    "       defaultHeader=\"&quot;OSGGLEXT.h&quot;\"\n"
    "       access=\"public\"\n"
    "       >\n"
    "   </Field>\n"
    "  <Field\n"
    "      name=\"FogColor\"\n"
    "      type=\"Color4f\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"0.0f,0.0f,0.0f,0.0f\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "      The color of the fog.\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"FogMode\"\n"
    "      type=\"UInt16\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"FogStage::FOG_MODE_LINEAR\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "      The mode to use for calculating the fog.\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"FogStart\"\n"
    "      type=\"Real32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"0.0f\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "      The distance that the fog will start at when the FogMode is\n"
    "      FOG_MODE_LINEAR. \n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"FogEnd\"\n"
    "      type=\"Real32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"0.0f\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "      The distance that the fog will end at when the FogMode is FOG_MODE_LINEAR.\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"FogDensity\"\n"
    "      type=\"Real32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"0.0f\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "      The of the fog when the FogMode is FOG_MODE_EXP or FOG_MODE_EXP2.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "A stage that preforms a fog effect as a post-process.  The fog is\n"
    "calculated the similarly to how OpenGL calculates fog in\n"
    "fixed-functionality mode. \n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FogStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &FogStageBase::getType(void) const
{
    return _type;
}

UInt32 FogStageBase::getContainerSize(void) const
{
    return sizeof(FogStage);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *FogStageBase::editSFBufferFormat(void)
{
    editSField(BufferFormatFieldMask);

    return &_sfBufferFormat;
}

const SFGLenum *FogStageBase::getSFBufferFormat(void) const
{
    return &_sfBufferFormat;
}


SFColor4f *FogStageBase::editSFFogColor(void)
{
    editSField(FogColorFieldMask);

    return &_sfFogColor;
}

const SFColor4f *FogStageBase::getSFFogColor(void) const
{
    return &_sfFogColor;
}


SFUInt16 *FogStageBase::editSFFogMode(void)
{
    editSField(FogModeFieldMask);

    return &_sfFogMode;
}

const SFUInt16 *FogStageBase::getSFFogMode(void) const
{
    return &_sfFogMode;
}


SFReal32 *FogStageBase::editSFFogStart(void)
{
    editSField(FogStartFieldMask);

    return &_sfFogStart;
}

const SFReal32 *FogStageBase::getSFFogStart(void) const
{
    return &_sfFogStart;
}


SFReal32 *FogStageBase::editSFFogEnd(void)
{
    editSField(FogEndFieldMask);

    return &_sfFogEnd;
}

const SFReal32 *FogStageBase::getSFFogEnd(void) const
{
    return &_sfFogEnd;
}


SFReal32 *FogStageBase::editSFFogDensity(void)
{
    editSField(FogDensityFieldMask);

    return &_sfFogDensity;
}

const SFReal32 *FogStageBase::getSFFogDensity(void) const
{
    return &_sfFogDensity;
}






/*------------------------------ access -----------------------------------*/

SizeT FogStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        returnValue += _sfBufferFormat.getBinSize();
    }
    if(FieldBits::NoField != (FogColorFieldMask & whichField))
    {
        returnValue += _sfFogColor.getBinSize();
    }
    if(FieldBits::NoField != (FogModeFieldMask & whichField))
    {
        returnValue += _sfFogMode.getBinSize();
    }
    if(FieldBits::NoField != (FogStartFieldMask & whichField))
    {
        returnValue += _sfFogStart.getBinSize();
    }
    if(FieldBits::NoField != (FogEndFieldMask & whichField))
    {
        returnValue += _sfFogEnd.getBinSize();
    }
    if(FieldBits::NoField != (FogDensityFieldMask & whichField))
    {
        returnValue += _sfFogDensity.getBinSize();
    }

    return returnValue;
}

void FogStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        _sfBufferFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FogColorFieldMask & whichField))
    {
        _sfFogColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FogModeFieldMask & whichField))
    {
        _sfFogMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FogStartFieldMask & whichField))
    {
        _sfFogStart.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FogEndFieldMask & whichField))
    {
        _sfFogEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FogDensityFieldMask & whichField))
    {
        _sfFogDensity.copyToBin(pMem);
    }
}

void FogStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        editSField(BufferFormatFieldMask);
        _sfBufferFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FogColorFieldMask & whichField))
    {
        editSField(FogColorFieldMask);
        _sfFogColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FogModeFieldMask & whichField))
    {
        editSField(FogModeFieldMask);
        _sfFogMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FogStartFieldMask & whichField))
    {
        editSField(FogStartFieldMask);
        _sfFogStart.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FogEndFieldMask & whichField))
    {
        editSField(FogEndFieldMask);
        _sfFogEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FogDensityFieldMask & whichField))
    {
        editSField(FogDensityFieldMask);
        _sfFogDensity.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FogStageTransitPtr FogStageBase::createLocal(BitVector bFlags)
{
    FogStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FogStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FogStageTransitPtr FogStageBase::createDependent(BitVector bFlags)
{
    FogStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FogStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FogStageTransitPtr FogStageBase::create(void)
{
    FogStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FogStage>(tmpPtr);
    }

    return fc;
}

FogStage *FogStageBase::createEmptyLocal(BitVector bFlags)
{
    FogStage *returnValue;

    newPtr<FogStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FogStage *FogStageBase::createEmpty(void)
{
    FogStage *returnValue;

    newPtr<FogStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FogStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FogStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FogStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FogStageBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FogStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FogStage *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FogStageBase::shallowCopy(void) const
{
    FogStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FogStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FogStageBase::FogStageBase(void) :
    Inherited(),
    _sfBufferFormat           (GLenum(GL_RGB)),
    _sfFogColor               (Color4f(0.0f,0.0f,0.0f,0.0f)),
    _sfFogMode                (UInt16(FogStage::FOG_MODE_LINEAR)),
    _sfFogStart               (Real32(0.0f)),
    _sfFogEnd                 (Real32(0.0f)),
    _sfFogDensity             (Real32(0.0f))
{
}

FogStageBase::FogStageBase(const FogStageBase &source) :
    Inherited(source),
    _sfBufferFormat           (source._sfBufferFormat           ),
    _sfFogColor               (source._sfFogColor               ),
    _sfFogMode                (source._sfFogMode                ),
    _sfFogStart               (source._sfFogStart               ),
    _sfFogEnd                 (source._sfFogEnd                 ),
    _sfFogDensity             (source._sfFogDensity             )
{
}


/*-------------------------- destructors ----------------------------------*/

FogStageBase::~FogStageBase(void)
{
}


GetFieldHandlePtr FogStageBase::getHandleBufferFormat    (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfBufferFormat,
             this->getType().getFieldDesc(BufferFormatFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleBufferFormat   (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfBufferFormat,
             this->getType().getFieldDesc(BufferFormatFieldId),
             this));


    editSField(BufferFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogStageBase::getHandleFogColor        (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfFogColor,
             this->getType().getFieldDesc(FogColorFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleFogColor       (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfFogColor,
             this->getType().getFieldDesc(FogColorFieldId),
             this));


    editSField(FogColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogStageBase::getHandleFogMode         (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfFogMode,
             this->getType().getFieldDesc(FogModeFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleFogMode        (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfFogMode,
             this->getType().getFieldDesc(FogModeFieldId),
             this));


    editSField(FogModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogStageBase::getHandleFogStart        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFogStart,
             this->getType().getFieldDesc(FogStartFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleFogStart       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFogStart,
             this->getType().getFieldDesc(FogStartFieldId),
             this));


    editSField(FogStartFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogStageBase::getHandleFogEnd          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFogEnd,
             this->getType().getFieldDesc(FogEndFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleFogEnd         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFogEnd,
             this->getType().getFieldDesc(FogEndFieldId),
             this));


    editSField(FogEndFieldMask);

    return returnValue;
}

GetFieldHandlePtr FogStageBase::getHandleFogDensity      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFogDensity,
             this->getType().getFieldDesc(FogDensityFieldId),
             const_cast<FogStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FogStageBase::editHandleFogDensity     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFogDensity,
             this->getType().getFieldDesc(FogDensityFieldId),
             this));


    editSField(FogDensityFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FogStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FogStage *pThis = static_cast<FogStage *>(this);

    pThis->execSync(static_cast<FogStage *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FogStageBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FogStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FogStage *>(pRefAspect),
                  dynamic_cast<const FogStage *>(this));

    return returnValue;
}
#endif

void FogStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
