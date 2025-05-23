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
 **     class FragmentProgramChunk!
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




#include "OSGFragmentProgramChunkBase.h"
#include "OSGFragmentProgramChunk.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FragmentProgramChunk
    See \ref PageSystemFragmentProgramChunk for a description.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FragmentProgramChunk *, nsOSG>::_type(
    "FragmentProgramChunkPtr", 
    "ProgramChunkPtr", 
    FragmentProgramChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FragmentProgramChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FragmentProgramChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FragmentProgramChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FragmentProgramChunkBase::classDescInserter(TypeObject &oType)
{
}


FragmentProgramChunkBase::TypeObject FragmentProgramChunkBase::_type(
    FragmentProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FragmentProgramChunkBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&FragmentProgramChunk::initMethod),
    reinterpret_cast<ExitContainerF>(&FragmentProgramChunk::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&FragmentProgramChunk::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"FragmentProgramChunk\"\n"
    "   parent=\"ProgramChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpStateARBProgram\"\n"
    "   >\n"
    "  See \\ref PageSystemFragmentProgramChunk for a description.\n"
    "\n"
    "  The FragmentProgramChunk implements Fragment Programs as specified in the\n"
    "  GL_ARB_fragment_program extension. It is just a special version of the\n"
    "  OSG::ProgramChunk, which contains the whole public interface.\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemFragmentProgramChunk for a description.\n"
    "\n"
    "The FragmentProgramChunk implements Fragment Programs as specified in the\n"
    "GL_ARB_fragment_program extension. It is just a special version of the\n"
    "OSG::ProgramChunk, which contains the whole public interface.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FragmentProgramChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &FragmentProgramChunkBase::getType(void) const
{
    return _type;
}

UInt32 FragmentProgramChunkBase::getContainerSize(void) const
{
    return sizeof(FragmentProgramChunk);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT FragmentProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FragmentProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void FragmentProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
FragmentProgramChunkTransitPtr FragmentProgramChunkBase::createLocal(BitVector bFlags)
{
    FragmentProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FragmentProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FragmentProgramChunkTransitPtr FragmentProgramChunkBase::createDependent(BitVector bFlags)
{
    FragmentProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FragmentProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FragmentProgramChunkTransitPtr FragmentProgramChunkBase::create(void)
{
    FragmentProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FragmentProgramChunk>(tmpPtr);
    }

    return fc;
}

FragmentProgramChunk *FragmentProgramChunkBase::createEmptyLocal(BitVector bFlags)
{
    FragmentProgramChunk *returnValue;

    newPtr<FragmentProgramChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FragmentProgramChunk *FragmentProgramChunkBase::createEmpty(void)
{
    FragmentProgramChunk *returnValue;

    newPtr<FragmentProgramChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FragmentProgramChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FragmentProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FragmentProgramChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FragmentProgramChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FragmentProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FragmentProgramChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FragmentProgramChunkBase::shallowCopy(void) const
{
    FragmentProgramChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FragmentProgramChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FragmentProgramChunkBase::FragmentProgramChunkBase(void) :
    Inherited()
{
}

FragmentProgramChunkBase::FragmentProgramChunkBase(const FragmentProgramChunkBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

FragmentProgramChunkBase::~FragmentProgramChunkBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void FragmentProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FragmentProgramChunk *pThis = static_cast<FragmentProgramChunk *>(this);

    pThis->execSync(static_cast<FragmentProgramChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FragmentProgramChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FragmentProgramChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FragmentProgramChunk *>(pRefAspect),
                  dynamic_cast<const FragmentProgramChunk *>(this));

    return returnValue;
}
#endif

void FragmentProgramChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
