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
 **     class ShearedStereoCameraDecorator!
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




#include "OSGShearedStereoCameraDecoratorBase.h"
#include "OSGShearedStereoCameraDecorator.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShearedStereoCameraDecorator
    The OSG::CameraDecorator for standard sheared stereo projections, see \ref
    PageSystemWindowCameraDecoratorsStereoSheared for a description.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          ShearedStereoCameraDecoratorBase::_sfZeroParallaxDistance
    The distance to the zero parallax plane.
*/

/*! \var Real32          ShearedStereoCameraDecoratorBase::_sfOverlap
    The overlap between left and right eye.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShearedStereoCameraDecorator *, nsOSG>::_type(
    "ShearedStereoCameraDecoratorPtr", 
    "StereoCameraDecoratorPtr", 
    ShearedStereoCameraDecorator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShearedStereoCameraDecorator *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShearedStereoCameraDecorator *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShearedStereoCameraDecorator *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShearedStereoCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "zeroParallaxDistance",
        "The distance to the zero parallax plane.\n",
        ZeroParallaxDistanceFieldId, ZeroParallaxDistanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShearedStereoCameraDecorator::editHandleZeroParallaxDistance),
        static_cast<FieldGetMethodSig >(&ShearedStereoCameraDecorator::getHandleZeroParallaxDistance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "overlap",
        "The overlap between left and right eye.\n",
        OverlapFieldId, OverlapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShearedStereoCameraDecorator::editHandleOverlap),
        static_cast<FieldGetMethodSig >(&ShearedStereoCameraDecorator::getHandleOverlap));

    oType.addInitialDesc(pDesc);
}


ShearedStereoCameraDecoratorBase::TypeObject ShearedStereoCameraDecoratorBase::_type(
    ShearedStereoCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShearedStereoCameraDecoratorBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ShearedStereoCameraDecorator::initMethod),
    reinterpret_cast<ExitContainerF>(&ShearedStereoCameraDecorator::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&ShearedStereoCameraDecorator::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShearedStereoCameraDecorator\"\n"
    "   parent=\"StereoCameraDecorator\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpWindowCamera\"\n"
    "   >\n"
    "  The OSG::CameraDecorator for standard sheared stereo projections, see \\ref\n"
    "  PageSystemWindowCameraDecoratorsStereoSheared for a description.\n"
    "  <Field\n"
    "\t name=\"zeroParallaxDistance\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe distance to the zero parallax plane.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"overlap\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe overlap between left and right eye.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "The OSG::CameraDecorator for standard sheared stereo projections, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereoSheared for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShearedStereoCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShearedStereoCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 ShearedStereoCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(ShearedStereoCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ShearedStereoCameraDecoratorBase::editSFZeroParallaxDistance(void)
{
    editSField(ZeroParallaxDistanceFieldMask);

    return &_sfZeroParallaxDistance;
}

const SFReal32 *ShearedStereoCameraDecoratorBase::getSFZeroParallaxDistance(void) const
{
    return &_sfZeroParallaxDistance;
}


SFReal32 *ShearedStereoCameraDecoratorBase::editSFOverlap(void)
{
    editSField(OverlapFieldMask);

    return &_sfOverlap;
}

const SFReal32 *ShearedStereoCameraDecoratorBase::getSFOverlap(void) const
{
    return &_sfOverlap;
}






/*------------------------------ access -----------------------------------*/

SizeT ShearedStereoCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        returnValue += _sfZeroParallaxDistance.getBinSize();
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        returnValue += _sfOverlap.getBinSize();
    }

    return returnValue;
}

void ShearedStereoCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        _sfZeroParallaxDistance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        _sfOverlap.copyToBin(pMem);
    }
}

void ShearedStereoCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        editSField(ZeroParallaxDistanceFieldMask);
        _sfZeroParallaxDistance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        editSField(OverlapFieldMask);
        _sfOverlap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShearedStereoCameraDecoratorTransitPtr ShearedStereoCameraDecoratorBase::createLocal(BitVector bFlags)
{
    ShearedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShearedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShearedStereoCameraDecoratorTransitPtr ShearedStereoCameraDecoratorBase::createDependent(BitVector bFlags)
{
    ShearedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShearedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShearedStereoCameraDecoratorTransitPtr ShearedStereoCameraDecoratorBase::create(void)
{
    ShearedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShearedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

ShearedStereoCameraDecorator *ShearedStereoCameraDecoratorBase::createEmptyLocal(BitVector bFlags)
{
    ShearedStereoCameraDecorator *returnValue;

    newPtr<ShearedStereoCameraDecorator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShearedStereoCameraDecorator *ShearedStereoCameraDecoratorBase::createEmpty(void)
{
    ShearedStereoCameraDecorator *returnValue;

    newPtr<ShearedStereoCameraDecorator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShearedStereoCameraDecoratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShearedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShearedStereoCameraDecorator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShearedStereoCameraDecoratorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShearedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShearedStereoCameraDecorator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShearedStereoCameraDecoratorBase::shallowCopy(void) const
{
    ShearedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShearedStereoCameraDecorator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShearedStereoCameraDecoratorBase::ShearedStereoCameraDecoratorBase(void) :
    Inherited(),
    _sfZeroParallaxDistance   (Real32(1)),
    _sfOverlap                (Real32(1))
{
}

ShearedStereoCameraDecoratorBase::ShearedStereoCameraDecoratorBase(const ShearedStereoCameraDecoratorBase &source) :
    Inherited(source),
    _sfZeroParallaxDistance   (source._sfZeroParallaxDistance   ),
    _sfOverlap                (source._sfOverlap                )
{
}


/*-------------------------- destructors ----------------------------------*/

ShearedStereoCameraDecoratorBase::~ShearedStereoCameraDecoratorBase(void)
{
}


GetFieldHandlePtr ShearedStereoCameraDecoratorBase::getHandleZeroParallaxDistance (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfZeroParallaxDistance,
             this->getType().getFieldDesc(ZeroParallaxDistanceFieldId),
             const_cast<ShearedStereoCameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShearedStereoCameraDecoratorBase::editHandleZeroParallaxDistance(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfZeroParallaxDistance,
             this->getType().getFieldDesc(ZeroParallaxDistanceFieldId),
             this));


    editSField(ZeroParallaxDistanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShearedStereoCameraDecoratorBase::getHandleOverlap         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOverlap,
             this->getType().getFieldDesc(OverlapFieldId),
             const_cast<ShearedStereoCameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShearedStereoCameraDecoratorBase::editHandleOverlap        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOverlap,
             this->getType().getFieldDesc(OverlapFieldId),
             this));


    editSField(OverlapFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShearedStereoCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShearedStereoCameraDecorator *pThis = static_cast<ShearedStereoCameraDecorator *>(this);

    pThis->execSync(static_cast<ShearedStereoCameraDecorator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShearedStereoCameraDecoratorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShearedStereoCameraDecorator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShearedStereoCameraDecorator *>(pRefAspect),
                  dynamic_cast<const ShearedStereoCameraDecorator *>(this));

    return returnValue;
}
#endif

void ShearedStereoCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
