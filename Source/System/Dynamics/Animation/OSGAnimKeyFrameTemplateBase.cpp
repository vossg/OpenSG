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
 **     class AnimKeyFrameTemplate!
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




#include "OSGAnimKeyFrameTemplateBase.h"
#include "OSGAnimKeyFrameTemplate.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimKeyFrameTemplate
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<AnimKeyFrameTemplate *, nsOSG>::_type(
    "AnimKeyFrameTemplatePtr", 
    "AnimTemplatePtr", 
    AnimKeyFrameTemplate::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(AnimKeyFrameTemplate *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimKeyFrameTemplate *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimKeyFrameTemplate *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimKeyFrameTemplateBase::classDescInserter(TypeObject &oType)
{
}


AnimKeyFrameTemplateBase::TypeObject AnimKeyFrameTemplateBase::_type(
    AnimKeyFrameTemplateBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&AnimKeyFrameTemplateBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&AnimKeyFrameTemplate::initMethod),
    reinterpret_cast<ExitContainerF>(&AnimKeyFrameTemplate::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&AnimKeyFrameTemplate::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"AnimKeyFrameTemplate\"\n"
    "   parent=\"AnimTemplate\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   isBundle=\"false\"\n"
    "   parentFields=\"none\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimKeyFrameTemplateBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimKeyFrameTemplateBase::getType(void) const
{
    return _type;
}

UInt32 AnimKeyFrameTemplateBase::getContainerSize(void) const
{
    return sizeof(AnimKeyFrameTemplate);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT AnimKeyFrameTemplateBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void AnimKeyFrameTemplateBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void AnimKeyFrameTemplateBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
AnimKeyFrameTemplateTransitPtr AnimKeyFrameTemplateBase::createLocal(BitVector bFlags)
{
    AnimKeyFrameTemplateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimKeyFrameTemplate>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimKeyFrameTemplateTransitPtr AnimKeyFrameTemplateBase::createDependent(BitVector bFlags)
{
    AnimKeyFrameTemplateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimKeyFrameTemplate>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimKeyFrameTemplateTransitPtr AnimKeyFrameTemplateBase::create(void)
{
    AnimKeyFrameTemplateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimKeyFrameTemplate>(tmpPtr);
    }

    return fc;
}

AnimKeyFrameTemplate *AnimKeyFrameTemplateBase::createEmptyLocal(BitVector bFlags)
{
    AnimKeyFrameTemplate *returnValue;

    newPtr<AnimKeyFrameTemplate>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimKeyFrameTemplate *AnimKeyFrameTemplateBase::createEmpty(void)
{
    AnimKeyFrameTemplate *returnValue;

    newPtr<AnimKeyFrameTemplate>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimKeyFrameTemplateBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimKeyFrameTemplate *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimKeyFrameTemplate *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimKeyFrameTemplateBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimKeyFrameTemplate *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimKeyFrameTemplate *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimKeyFrameTemplateBase::shallowCopy(void) const
{
    AnimKeyFrameTemplate *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimKeyFrameTemplate *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimKeyFrameTemplateBase::AnimKeyFrameTemplateBase(void) :
    Inherited()
{
}

AnimKeyFrameTemplateBase::AnimKeyFrameTemplateBase(const AnimKeyFrameTemplateBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

AnimKeyFrameTemplateBase::~AnimKeyFrameTemplateBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void AnimKeyFrameTemplateBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimKeyFrameTemplate *pThis = static_cast<AnimKeyFrameTemplate *>(this);

    pThis->execSync(static_cast<AnimKeyFrameTemplate *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimKeyFrameTemplateBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimKeyFrameTemplate *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimKeyFrameTemplate *>(pRefAspect),
                  dynamic_cast<const AnimKeyFrameTemplate *>(this));

    return returnValue;
}
#endif

void AnimKeyFrameTemplateBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
