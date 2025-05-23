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
 **     class MoveManipulator!
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




#include "OSGMoveManipulatorBase.h"
#include "OSGMoveManipulator.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MoveManipulator
    The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           MoveManipulatorBase::_sfAxisBase
    Axis being manipulated on, in world space.
*/

/*! \var Vec3f           MoveManipulatorBase::_sfAxisDirection
    Axis being manipulated on, in world space.
*/

/*! \var Vec3f           MoveManipulatorBase::_sfBaseTranslation
    Translation value at the beginning of manipulation.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MoveManipulator *, nsOSG>::_type(
    "MoveManipulatorPtr", 
    "ManipulatorPtr", 
    MoveManipulator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MoveManipulator *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MoveManipulatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "axisBase",
        "Axis being manipulated on, in world space.\n",
        AxisBaseFieldId, AxisBaseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MoveManipulator::editHandleAxisBase),
        static_cast<FieldGetMethodSig >(&MoveManipulator::getHandleAxisBase));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "axisDirection",
        "Axis being manipulated on, in world space.\n",
        AxisDirectionFieldId, AxisDirectionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MoveManipulator::editHandleAxisDirection),
        static_cast<FieldGetMethodSig >(&MoveManipulator::getHandleAxisDirection));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "baseTranslation",
        "Translation value at the beginning of manipulation.\n",
        BaseTranslationFieldId, BaseTranslationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MoveManipulator::editHandleBaseTranslation),
        static_cast<FieldGetMethodSig >(&MoveManipulator::getHandleBaseTranslation));

    oType.addInitialDesc(pDesc);
}


MoveManipulatorBase::TypeObject MoveManipulatorBase::_type(
    MoveManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MoveManipulatorBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&MoveManipulator::initMethod),
    reinterpret_cast<ExitContainerF>(&MoveManipulator::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&MoveManipulator::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MoveManipulator\"\n"
    "\tparent=\"Manipulator\"\n"
    "\tlibrary=\"ContribGUI\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"axisBase\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tAxis being manipulated on, in world space.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"axisDirection\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tAxis being manipulated on, in world space.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"baseTranslation\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tTranslation value at the beginning of manipulation.\n"
    "\t</Field>\n"
    "The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.\n"
    "</FieldContainer>\n",
    "The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MoveManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MoveManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 MoveManipulatorBase::getContainerSize(void) const
{
    return sizeof(MoveManipulator);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *MoveManipulatorBase::editSFAxisBase(void)
{
    editSField(AxisBaseFieldMask);

    return &_sfAxisBase;
}

const SFPnt3f *MoveManipulatorBase::getSFAxisBase(void) const
{
    return &_sfAxisBase;
}


SFVec3f *MoveManipulatorBase::editSFAxisDirection(void)
{
    editSField(AxisDirectionFieldMask);

    return &_sfAxisDirection;
}

const SFVec3f *MoveManipulatorBase::getSFAxisDirection(void) const
{
    return &_sfAxisDirection;
}


SFVec3f *MoveManipulatorBase::editSFBaseTranslation(void)
{
    editSField(BaseTranslationFieldMask);

    return &_sfBaseTranslation;
}

const SFVec3f *MoveManipulatorBase::getSFBaseTranslation(void) const
{
    return &_sfBaseTranslation;
}






/*------------------------------ access -----------------------------------*/

SizeT MoveManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisBaseFieldMask & whichField))
    {
        returnValue += _sfAxisBase.getBinSize();
    }
    if(FieldBits::NoField != (AxisDirectionFieldMask & whichField))
    {
        returnValue += _sfAxisDirection.getBinSize();
    }
    if(FieldBits::NoField != (BaseTranslationFieldMask & whichField))
    {
        returnValue += _sfBaseTranslation.getBinSize();
    }

    return returnValue;
}

void MoveManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisBaseFieldMask & whichField))
    {
        _sfAxisBase.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AxisDirectionFieldMask & whichField))
    {
        _sfAxisDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BaseTranslationFieldMask & whichField))
    {
        _sfBaseTranslation.copyToBin(pMem);
    }
}

void MoveManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisBaseFieldMask & whichField))
    {
        editSField(AxisBaseFieldMask);
        _sfAxisBase.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AxisDirectionFieldMask & whichField))
    {
        editSField(AxisDirectionFieldMask);
        _sfAxisDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BaseTranslationFieldMask & whichField))
    {
        editSField(BaseTranslationFieldMask);
        _sfBaseTranslation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MoveManipulatorTransitPtr MoveManipulatorBase::createLocal(BitVector bFlags)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MoveManipulatorTransitPtr MoveManipulatorBase::createDependent(BitVector bFlags)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MoveManipulatorTransitPtr MoveManipulatorBase::create(void)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

MoveManipulator *MoveManipulatorBase::createEmptyLocal(BitVector bFlags)
{
    MoveManipulator *returnValue;

    newPtr<MoveManipulator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MoveManipulator *MoveManipulatorBase::createEmpty(void)
{
    MoveManipulator *returnValue;

    newPtr<MoveManipulator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MoveManipulatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MoveManipulator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MoveManipulatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MoveManipulator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MoveManipulatorBase::shallowCopy(void) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MoveManipulator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MoveManipulatorBase::MoveManipulatorBase(void) :
    Inherited(),
    _sfAxisBase               (),
    _sfAxisDirection          (),
    _sfBaseTranslation        ()
{
}

MoveManipulatorBase::MoveManipulatorBase(const MoveManipulatorBase &source) :
    Inherited(source),
    _sfAxisBase               (source._sfAxisBase               ),
    _sfAxisDirection          (source._sfAxisDirection          ),
    _sfBaseTranslation        (source._sfBaseTranslation        )
{
}


/*-------------------------- destructors ----------------------------------*/

MoveManipulatorBase::~MoveManipulatorBase(void)
{
}


GetFieldHandlePtr MoveManipulatorBase::getHandleAxisBase        (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfAxisBase,
             this->getType().getFieldDesc(AxisBaseFieldId),
             const_cast<MoveManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MoveManipulatorBase::editHandleAxisBase       (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfAxisBase,
             this->getType().getFieldDesc(AxisBaseFieldId),
             this));


    editSField(AxisBaseFieldMask);

    return returnValue;
}

GetFieldHandlePtr MoveManipulatorBase::getHandleAxisDirection   (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfAxisDirection,
             this->getType().getFieldDesc(AxisDirectionFieldId),
             const_cast<MoveManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MoveManipulatorBase::editHandleAxisDirection  (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfAxisDirection,
             this->getType().getFieldDesc(AxisDirectionFieldId),
             this));


    editSField(AxisDirectionFieldMask);

    return returnValue;
}

GetFieldHandlePtr MoveManipulatorBase::getHandleBaseTranslation (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfBaseTranslation,
             this->getType().getFieldDesc(BaseTranslationFieldId),
             const_cast<MoveManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MoveManipulatorBase::editHandleBaseTranslation(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfBaseTranslation,
             this->getType().getFieldDesc(BaseTranslationFieldId),
             this));


    editSField(BaseTranslationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MoveManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MoveManipulator *pThis = static_cast<MoveManipulator *>(this);

    pThis->execSync(static_cast<MoveManipulator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MoveManipulatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MoveManipulator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MoveManipulator *>(pRefAspect),
                  dynamic_cast<const MoveManipulator *>(this));

    return returnValue;
}
#endif

void MoveManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
