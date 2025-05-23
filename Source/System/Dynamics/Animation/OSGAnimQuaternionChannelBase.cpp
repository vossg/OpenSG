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
 **     class AnimQuaternionChannel!
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



#include "OSGAnimQuaternionDataSource.h" // Data Class

#include "OSGAnimQuaternionChannelBase.h"
#include "OSGAnimQuaternionChannel.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimQuaternionChannel
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var AnimQuaternionDataSource * AnimQuaternionChannelBase::_sfData
    
*/

/*! \var Quaternion      AnimQuaternionChannelBase::_sfOutValue
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<AnimQuaternionChannel *, nsOSG>::_type(
    "AnimQuaternionChannelPtr", 
    "AnimChannelPtr", 
    AnimQuaternionChannel::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(AnimQuaternionChannel *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimQuaternionChannel *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimQuaternionChannel *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimQuaternionChannelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecAnimQuaternionDataSourcePtr::Description(
        SFUnrecAnimQuaternionDataSourcePtr::getClassType(),
        "data",
        "",
        DataFieldId, DataFieldMask,
        true,
        (Field::FStdAccess | Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimQuaternionChannel::editHandleData),
        static_cast<FieldGetMethodSig >(&AnimQuaternionChannel::getHandleData));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "outValue",
        "",
        OutValueFieldId, OutValueFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimQuaternionChannel::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&AnimQuaternionChannel::getHandleOutValue));

    oType.addInitialDesc(pDesc);
}


AnimQuaternionChannelBase::TypeObject AnimQuaternionChannelBase::_type(
    AnimQuaternionChannelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&AnimQuaternionChannelBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&AnimQuaternionChannel::initMethod),
    reinterpret_cast<ExitContainerF>(&AnimQuaternionChannel::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&AnimQuaternionChannel::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimQuaternionChannel\"\n"
    "    parent=\"AnimChannel\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"data\"\n"
    "     category=\"pointer\"\n"
    "     type=\"AnimQuaternionDataSource\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"NULL\"\n"
    "     fieldFlags=\"FStdAccess, FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"outValue\"\n"
    "     category=\"data\"\n"
    "     type=\"Quaternion\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimQuaternionChannelBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimQuaternionChannelBase::getType(void) const
{
    return _type;
}

UInt32 AnimQuaternionChannelBase::getContainerSize(void) const
{
    return sizeof(AnimQuaternionChannel);
}

/*------------------------- decorator get ------------------------------*/


//! Get the AnimQuaternionChannel::_sfData field.
const SFUnrecAnimQuaternionDataSourcePtr *AnimQuaternionChannelBase::getSFData(void) const
{
    return &_sfData;
}

SFUnrecAnimQuaternionDataSourcePtr *AnimQuaternionChannelBase::editSFData           (void)
{
    editSField(DataFieldMask);

    return &_sfData;
}

//! Get the value of the AnimQuaternionChannel::_sfData field.
AnimQuaternionDataSource * AnimQuaternionChannelBase::getData(void) const
{
    return _sfData.getValue();
}

//! Set the value of the AnimQuaternionChannel::_sfData field.
void AnimQuaternionChannelBase::setData(AnimQuaternionDataSource * const value)
{
    editSField(DataFieldMask);

    _sfData.setValue(value);
}


SFQuaternion *AnimQuaternionChannelBase::editSFOutValue(void)
{
    editSField(OutValueFieldMask);

    return &_sfOutValue;
}

const SFQuaternion *AnimQuaternionChannelBase::getSFOutValue(void) const
{
    return &_sfOutValue;
}






/*------------------------------ access -----------------------------------*/

SizeT AnimQuaternionChannelBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DataFieldMask & whichField))
    {
        returnValue += _sfData.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _sfOutValue.getBinSize();
    }

    return returnValue;
}

void AnimQuaternionChannelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DataFieldMask & whichField))
    {
        _sfData.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _sfOutValue.copyToBin(pMem);
    }
}

void AnimQuaternionChannelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DataFieldMask & whichField))
    {
        editSField(DataFieldMask);
        _sfData.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        editSField(OutValueFieldMask);
        _sfOutValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimQuaternionChannelTransitPtr AnimQuaternionChannelBase::createLocal(BitVector bFlags)
{
    AnimQuaternionChannelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimQuaternionChannel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimQuaternionChannelTransitPtr AnimQuaternionChannelBase::createDependent(BitVector bFlags)
{
    AnimQuaternionChannelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimQuaternionChannel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimQuaternionChannelTransitPtr AnimQuaternionChannelBase::create(void)
{
    AnimQuaternionChannelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimQuaternionChannel>(tmpPtr);
    }

    return fc;
}

AnimQuaternionChannel *AnimQuaternionChannelBase::createEmptyLocal(BitVector bFlags)
{
    AnimQuaternionChannel *returnValue;

    newPtr<AnimQuaternionChannel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimQuaternionChannel *AnimQuaternionChannelBase::createEmpty(void)
{
    AnimQuaternionChannel *returnValue;

    newPtr<AnimQuaternionChannel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimQuaternionChannelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimQuaternionChannel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimQuaternionChannel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimQuaternionChannelBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimQuaternionChannel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimQuaternionChannel *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimQuaternionChannelBase::shallowCopy(void) const
{
    AnimQuaternionChannel *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimQuaternionChannel *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimQuaternionChannelBase::AnimQuaternionChannelBase(void) :
    Inherited(),
    _sfData                   (NULL),
    _sfOutValue               ()
{
}

AnimQuaternionChannelBase::AnimQuaternionChannelBase(const AnimQuaternionChannelBase &source) :
    Inherited(source),
    _sfData                   (NULL),
    _sfOutValue               (source._sfOutValue               )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimQuaternionChannelBase::~AnimQuaternionChannelBase(void)
{
}

void AnimQuaternionChannelBase::onCreate(const AnimQuaternionChannel *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        AnimQuaternionChannel *pThis = static_cast<AnimQuaternionChannel *>(this);

        pThis->setData(source->getData());
    }
}

GetFieldHandlePtr AnimQuaternionChannelBase::getHandleData            (void) const
{
    SFUnrecAnimQuaternionDataSourcePtr::GetHandlePtr returnValue(
        new  SFUnrecAnimQuaternionDataSourcePtr::GetHandle(
             &_sfData,
             this->getType().getFieldDesc(DataFieldId),
             const_cast<AnimQuaternionChannelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimQuaternionChannelBase::editHandleData           (void)
{
    SFUnrecAnimQuaternionDataSourcePtr::EditHandlePtr returnValue(
        new  SFUnrecAnimQuaternionDataSourcePtr::EditHandle(
             &_sfData,
             this->getType().getFieldDesc(DataFieldId),
             this));

    using boost::placeholders::_1;

    returnValue->setSetMethod(
        boost::bind(&AnimQuaternionChannel::setData,
                    static_cast<AnimQuaternionChannel *>(this), _1));

    editSField(DataFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimQuaternionChannelBase::getHandleOutValue        (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<AnimQuaternionChannelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimQuaternionChannelBase::editHandleOutValue       (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             this));


    editSField(OutValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimQuaternionChannelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimQuaternionChannel *pThis = static_cast<AnimQuaternionChannel *>(this);

    pThis->execSync(static_cast<AnimQuaternionChannel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimQuaternionChannelBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimQuaternionChannel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimQuaternionChannel *>(pRefAspect),
                  dynamic_cast<const AnimQuaternionChannel *>(this));

    return returnValue;
}
#endif

void AnimQuaternionChannelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<AnimQuaternionChannel *>(this)->setData(NULL);


}


OSG_END_NAMESPACE
