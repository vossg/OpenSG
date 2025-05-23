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
 **     class MultiSwitch!
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




#include "OSGMultiSwitchBase.h"
#include "OSGMultiSwitch.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiSwitch
    MultiSwitch allows the selective inclusion of zero or more of its children
    from traversal. It supports three different modes (selected by
    _sfSwitchMode), to include either ALL, NONE or CHOICES of its children.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          MultiSwitchBase::_mfChoices
    Indices of children to be included in CHOICES mode. The indices are kept
    sorted and any duplicates are removed.
*/

/*! \var Int32           MultiSwitchBase::_sfSwitchMode
    Mode of operation.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MultiSwitch *, nsOSG>::_type(
    "MultiSwitchPtr", 
    "GroupPtr", 
    MultiSwitch::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MultiSwitch *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MultiSwitch *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MultiSwitch *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MultiSwitchBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "choices",
        "Indices of children to be included in CHOICES mode. The indices are kept\n"
        "sorted and any duplicates are removed.\n",
        ChoicesFieldId, ChoicesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiSwitch::editHandleChoices),
        static_cast<FieldGetMethodSig >(&MultiSwitch::getHandleChoices));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "switchMode",
        "Mode of operation.\n",
        SwitchModeFieldId, SwitchModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiSwitch::editHandleSwitchMode),
        static_cast<FieldGetMethodSig >(&MultiSwitch::getHandleSwitchMode));

    oType.addInitialDesc(pDesc);
}


MultiSwitchBase::TypeObject MultiSwitchBase::_type(
    MultiSwitchBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MultiSwitchBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&MultiSwitch::initMethod),
    reinterpret_cast<ExitContainerF>(&MultiSwitch::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&MultiSwitch::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"MultiSwitch\"\n"
    "   parent=\"Group\"\n"
    "   library=\"Group\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpGroupMisc\"\n"
    "   >\n"
    "  MultiSwitch allows the selective inclusion of zero or more of its children\n"
    "  from traversal. It supports three different modes (selected by\n"
    "  _sfSwitchMode), to include either ALL, NONE or CHOICES of its children.\n"
    "  <Field\n"
    "\t name=\"choices\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Indices of children to be included in CHOICES mode. The indices are kept\n"
    "    sorted and any duplicates are removed.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"switchMode\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"-1\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Mode of operation.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "MultiSwitch allows the selective inclusion of zero or more of its children\n"
    "from traversal. It supports three different modes (selected by\n"
    "_sfSwitchMode), to include either ALL, NONE or CHOICES of its children.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiSwitchBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiSwitchBase::getType(void) const
{
    return _type;
}

UInt32 MultiSwitchBase::getContainerSize(void) const
{
    return sizeof(MultiSwitch);
}

/*------------------------- decorator get ------------------------------*/


MFUInt32 *MultiSwitchBase::editMFChoices(void)
{
    editMField(ChoicesFieldMask, _mfChoices);

    return &_mfChoices;
}

const MFUInt32 *MultiSwitchBase::getMFChoices(void) const
{
    return &_mfChoices;
}


SFInt32 *MultiSwitchBase::editSFSwitchMode(void)
{
    editSField(SwitchModeFieldMask);

    return &_sfSwitchMode;
}

const SFInt32 *MultiSwitchBase::getSFSwitchMode(void) const
{
    return &_sfSwitchMode;
}






/*------------------------------ access -----------------------------------*/

SizeT MultiSwitchBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        returnValue += _mfChoices.getBinSize();
    }
    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        returnValue += _sfSwitchMode.getBinSize();
    }

    return returnValue;
}

void MultiSwitchBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        _mfChoices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        _sfSwitchMode.copyToBin(pMem);
    }
}

void MultiSwitchBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        editMField(ChoicesFieldMask, _mfChoices);
        _mfChoices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        editSField(SwitchModeFieldMask);
        _sfSwitchMode.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiSwitchTransitPtr MultiSwitchBase::createLocal(BitVector bFlags)
{
    MultiSwitchTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MultiSwitch>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MultiSwitchTransitPtr MultiSwitchBase::createDependent(BitVector bFlags)
{
    MultiSwitchTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MultiSwitch>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MultiSwitchTransitPtr MultiSwitchBase::create(void)
{
    MultiSwitchTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MultiSwitch>(tmpPtr);
    }

    return fc;
}

MultiSwitch *MultiSwitchBase::createEmptyLocal(BitVector bFlags)
{
    MultiSwitch *returnValue;

    newPtr<MultiSwitch>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MultiSwitch *MultiSwitchBase::createEmpty(void)
{
    MultiSwitch *returnValue;

    newPtr<MultiSwitch>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MultiSwitchBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MultiSwitch *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiSwitch *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiSwitchBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MultiSwitch *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiSwitch *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiSwitchBase::shallowCopy(void) const
{
    MultiSwitch *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MultiSwitch *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MultiSwitchBase::MultiSwitchBase(void) :
    Inherited(),
    _mfChoices                (),
    _sfSwitchMode             (Int32(-1))
{
}

MultiSwitchBase::MultiSwitchBase(const MultiSwitchBase &source) :
    Inherited(source),
    _mfChoices                (source._mfChoices                ),
    _sfSwitchMode             (source._sfSwitchMode             )
{
}


/*-------------------------- destructors ----------------------------------*/

MultiSwitchBase::~MultiSwitchBase(void)
{
}


GetFieldHandlePtr MultiSwitchBase::getHandleChoices         (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfChoices,
             this->getType().getFieldDesc(ChoicesFieldId),
             const_cast<MultiSwitchBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiSwitchBase::editHandleChoices        (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfChoices,
             this->getType().getFieldDesc(ChoicesFieldId),
             this));


    editMField(ChoicesFieldMask, _mfChoices);

    return returnValue;
}

GetFieldHandlePtr MultiSwitchBase::getHandleSwitchMode      (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfSwitchMode,
             this->getType().getFieldDesc(SwitchModeFieldId),
             const_cast<MultiSwitchBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiSwitchBase::editHandleSwitchMode     (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfSwitchMode,
             this->getType().getFieldDesc(SwitchModeFieldId),
             this));


    editSField(SwitchModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiSwitchBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MultiSwitch *pThis = static_cast<MultiSwitch *>(this);

    pThis->execSync(static_cast<MultiSwitch *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MultiSwitchBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MultiSwitch *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiSwitch *>(pRefAspect),
                  dynamic_cast<const MultiSwitch *>(this));

    return returnValue;
}
#endif

void MultiSwitchBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfChoices.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
