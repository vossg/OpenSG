/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class Billboard!
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




#include "OSGBillboardBase.h"
#include "OSGBillboard.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Billboard
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           BillboardBase::_sfAxisOfRotation
    
*/

/*! \var bool            BillboardBase::_sfFocusOnCamera
    
*/

/*! \var bool            BillboardBase::_sfAlignToScreen
    
*/

/*! \var Real32          BillboardBase::_sfMinAngle
    
*/

/*! \var Real32          BillboardBase::_sfMaxAngle
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<Billboard *, nsOSG>::_type(
    "BillboardPtr", 
    "GroupPtr", 
    Billboard::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Billboard *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Billboard *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Billboard *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BillboardBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "axisOfRotation",
        "",
        AxisOfRotationFieldId, AxisOfRotationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Billboard::editHandleAxisOfRotation),
        static_cast<FieldGetMethodSig >(&Billboard::getHandleAxisOfRotation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "focusOnCamera",
        "",
        FocusOnCameraFieldId, FocusOnCameraFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Billboard::editHandleFocusOnCamera),
        static_cast<FieldGetMethodSig >(&Billboard::getHandleFocusOnCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alignToScreen",
        "",
        AlignToScreenFieldId, AlignToScreenFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Billboard::editHandleAlignToScreen),
        static_cast<FieldGetMethodSig >(&Billboard::getHandleAlignToScreen));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "minAngle",
        "",
        MinAngleFieldId, MinAngleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Billboard::editHandleMinAngle),
        static_cast<FieldGetMethodSig >(&Billboard::getHandleMinAngle));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "maxAngle",
        "",
        MaxAngleFieldId, MaxAngleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Billboard::editHandleMaxAngle),
        static_cast<FieldGetMethodSig >(&Billboard::getHandleMaxAngle));

    oType.addInitialDesc(pDesc);
}


BillboardBase::TypeObject BillboardBase::_type(
    BillboardBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&BillboardBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&Billboard::initMethod),
    reinterpret_cast<ExitContainerF>(&Billboard::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&Billboard::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Billboard\"\n"
    "   parent=\"Group\"\n"
    "   library=\"Group\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpGroupMisc\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"axisOfRotation\"\n"
    "\t type=\"Vec3f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f, 1.f, 0.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"focusOnCamera\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"alignToScreen\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"minAngle\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.0f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"maxAngle\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"-1.0f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BillboardBase::getType(void)
{
    return _type;
}

const FieldContainerType &BillboardBase::getType(void) const
{
    return _type;
}

UInt32 BillboardBase::getContainerSize(void) const
{
    return sizeof(Billboard);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *BillboardBase::editSFAxisOfRotation(void)
{
    editSField(AxisOfRotationFieldMask);

    return &_sfAxisOfRotation;
}

const SFVec3f *BillboardBase::getSFAxisOfRotation(void) const
{
    return &_sfAxisOfRotation;
}


SFBool *BillboardBase::editSFFocusOnCamera(void)
{
    editSField(FocusOnCameraFieldMask);

    return &_sfFocusOnCamera;
}

const SFBool *BillboardBase::getSFFocusOnCamera(void) const
{
    return &_sfFocusOnCamera;
}


SFBool *BillboardBase::editSFAlignToScreen(void)
{
    editSField(AlignToScreenFieldMask);

    return &_sfAlignToScreen;
}

const SFBool *BillboardBase::getSFAlignToScreen(void) const
{
    return &_sfAlignToScreen;
}


SFReal32 *BillboardBase::editSFMinAngle(void)
{
    editSField(MinAngleFieldMask);

    return &_sfMinAngle;
}

const SFReal32 *BillboardBase::getSFMinAngle(void) const
{
    return &_sfMinAngle;
}


SFReal32 *BillboardBase::editSFMaxAngle(void)
{
    editSField(MaxAngleFieldMask);

    return &_sfMaxAngle;
}

const SFReal32 *BillboardBase::getSFMaxAngle(void) const
{
    return &_sfMaxAngle;
}






/*------------------------------ access -----------------------------------*/

SizeT BillboardBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        returnValue += _sfAxisOfRotation.getBinSize();
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        returnValue += _sfFocusOnCamera.getBinSize();
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        returnValue += _sfAlignToScreen.getBinSize();
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        returnValue += _sfMinAngle.getBinSize();
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        returnValue += _sfMaxAngle.getBinSize();
    }

    return returnValue;
}

void BillboardBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        _sfAxisOfRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        _sfFocusOnCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        _sfAlignToScreen.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        _sfMinAngle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        _sfMaxAngle.copyToBin(pMem);
    }
}

void BillboardBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisOfRotationFieldMask & whichField))
    {
        editSField(AxisOfRotationFieldMask);
        _sfAxisOfRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FocusOnCameraFieldMask & whichField))
    {
        editSField(FocusOnCameraFieldMask);
        _sfFocusOnCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlignToScreenFieldMask & whichField))
    {
        editSField(AlignToScreenFieldMask);
        _sfAlignToScreen.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinAngleFieldMask & whichField))
    {
        editSField(MinAngleFieldMask);
        _sfMinAngle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxAngleFieldMask & whichField))
    {
        editSField(MaxAngleFieldMask);
        _sfMaxAngle.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BillboardTransitPtr BillboardBase::createLocal(BitVector bFlags)
{
    BillboardTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Billboard>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BillboardTransitPtr BillboardBase::createDependent(BitVector bFlags)
{
    BillboardTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Billboard>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BillboardTransitPtr BillboardBase::create(void)
{
    BillboardTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Billboard>(tmpPtr);
    }

    return fc;
}

Billboard *BillboardBase::createEmptyLocal(BitVector bFlags)
{
    Billboard *returnValue;

    newPtr<Billboard>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Billboard *BillboardBase::createEmpty(void)
{
    Billboard *returnValue;

    newPtr<Billboard>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr BillboardBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Billboard *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Billboard *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BillboardBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Billboard *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Billboard *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BillboardBase::shallowCopy(void) const
{
    Billboard *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Billboard *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

BillboardBase::BillboardBase(void) :
    Inherited(),
    _sfAxisOfRotation         (Vec3f(0.f, 1.f, 0.f)),
    _sfFocusOnCamera          (bool(true)),
    _sfAlignToScreen          (bool(false)),
    _sfMinAngle               (Real32(0.0f)),
    _sfMaxAngle               (Real32(-1.0f))
{
}

BillboardBase::BillboardBase(const BillboardBase &source) :
    Inherited(source),
    _sfAxisOfRotation         (source._sfAxisOfRotation         ),
    _sfFocusOnCamera          (source._sfFocusOnCamera          ),
    _sfAlignToScreen          (source._sfAlignToScreen          ),
    _sfMinAngle               (source._sfMinAngle               ),
    _sfMaxAngle               (source._sfMaxAngle               )
{
}


/*-------------------------- destructors ----------------------------------*/

BillboardBase::~BillboardBase(void)
{
}


GetFieldHandlePtr BillboardBase::getHandleAxisOfRotation  (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfAxisOfRotation,
             this->getType().getFieldDesc(AxisOfRotationFieldId),
             const_cast<BillboardBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleAxisOfRotation (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfAxisOfRotation,
             this->getType().getFieldDesc(AxisOfRotationFieldId),
             this));


    editSField(AxisOfRotationFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleFocusOnCamera   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfFocusOnCamera,
             this->getType().getFieldDesc(FocusOnCameraFieldId),
             const_cast<BillboardBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleFocusOnCamera  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfFocusOnCamera,
             this->getType().getFieldDesc(FocusOnCameraFieldId),
             this));


    editSField(FocusOnCameraFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleAlignToScreen   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlignToScreen,
             this->getType().getFieldDesc(AlignToScreenFieldId),
             const_cast<BillboardBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleAlignToScreen  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlignToScreen,
             this->getType().getFieldDesc(AlignToScreenFieldId),
             this));


    editSField(AlignToScreenFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleMinAngle        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinAngle,
             this->getType().getFieldDesc(MinAngleFieldId),
             const_cast<BillboardBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleMinAngle       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinAngle,
             this->getType().getFieldDesc(MinAngleFieldId),
             this));


    editSField(MinAngleFieldMask);

    return returnValue;
}

GetFieldHandlePtr BillboardBase::getHandleMaxAngle        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxAngle,
             this->getType().getFieldDesc(MaxAngleFieldId),
             const_cast<BillboardBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BillboardBase::editHandleMaxAngle       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxAngle,
             this->getType().getFieldDesc(MaxAngleFieldId),
             this));


    editSField(MaxAngleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BillboardBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Billboard *pThis = static_cast<Billboard *>(this);

    pThis->execSync(static_cast<Billboard *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BillboardBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Billboard *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Billboard *>(pRefAspect),
                  dynamic_cast<const Billboard *>(this));

    return returnValue;
}
#endif

void BillboardBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
