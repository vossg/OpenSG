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
 **     class ChunkBlock!
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



#include "OSGStateChunk.h"              // Chunks Class

#include "OSGChunkBlockBase.h"
#include "OSGChunkBlock.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ChunkBlock
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var StateChunk *    ChunkBlockBase::_mfChunks
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ChunkBlock *, nsOSG>::_type(
    "ChunkBlockPtr", 
    "FieldContainerPtr", 
    ChunkBlock::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ChunkBlock *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ChunkBlock *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ChunkBlock *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ChunkBlockBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FCustomAccess),
        static_cast<FieldEditMethodSig>(&ChunkBlock::editHandleChunks),
        static_cast<FieldGetMethodSig >(&ChunkBlock::getHandleChunks));

    oType.addInitialDesc(pDesc);
}


ChunkBlockBase::TypeObject ChunkBlockBase::_type(
    ChunkBlockBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ChunkBlockBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ChunkBlock::initMethod),
    reinterpret_cast<ExitContainerF>(&ChunkBlock::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&ChunkBlock::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ChunkBlock\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"System\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"chunks\"\n"
    "      type=\"StateChunkPtr\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"external\"\n"
    "      access=\"protected\"\n"
    "      ptrFieldAccess = \"custom\"\n"
    "      pushToFieldAs=\"pushToChunks\"\n"
    "      replaceInMFieldIndexAs=\"replaceChunk\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ChunkBlockBase::getType(void)
{
    return _type;
}

const FieldContainerType &ChunkBlockBase::getType(void) const
{
    return _type;
}

UInt32 ChunkBlockBase::getContainerSize(void) const
{
    return sizeof(ChunkBlock);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ChunkBlock::_mfChunks field.
const MFUnrecStateChunkPtr *ChunkBlockBase::getMFChunks(void) const
{
    return &_mfChunks;
}
StateChunk * ChunkBlockBase::getChunks(const UInt32 index) const
{
    return _mfChunks[index];
}






/*------------------------------ access -----------------------------------*/

SizeT ChunkBlockBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void ChunkBlockBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void ChunkBlockBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        editMField(ChunksFieldMask, _mfChunks);
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ChunkBlockTransitPtr ChunkBlockBase::createLocal(BitVector bFlags)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ChunkBlockTransitPtr ChunkBlockBase::createDependent(BitVector bFlags)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ChunkBlockTransitPtr ChunkBlockBase::create(void)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

ChunkBlock *ChunkBlockBase::createEmptyLocal(BitVector bFlags)
{
    ChunkBlock *returnValue;

    newPtr<ChunkBlock>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ChunkBlock *ChunkBlockBase::createEmpty(void)
{
    ChunkBlock *returnValue;

    newPtr<ChunkBlock>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ChunkBlockBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkBlock *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkBlockBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkBlock *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkBlockBase::shallowCopy(void) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ChunkBlock *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ChunkBlockBase::ChunkBlockBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

ChunkBlockBase::ChunkBlockBase(const ChunkBlockBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

ChunkBlockBase::~ChunkBlockBase(void)
{
}

void ChunkBlockBase::onCreate(const ChunkBlock *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ChunkBlock *pThis = static_cast<ChunkBlock *>(this);

        MFUnrecStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFUnrecStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            pThis->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

GetFieldHandlePtr ChunkBlockBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::GetHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             const_cast<ChunkBlockBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ChunkBlockBase::editHandleChunks         (void)
{
    MFUnrecStateChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::EditHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             this));

    using boost::placeholders::_1;
    using boost::placeholders::_2;

    returnValue->setAddMethod(
        boost::bind(&ChunkBlock::pushToChunks,
                    static_cast<ChunkBlock *>(this), _1));
    returnValue->setReplaceMethod(
        boost::bind(&ChunkBlock::replaceChunk,
                    static_cast<ChunkBlock *>(this), _1, _2));

    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ChunkBlockBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ChunkBlock *pThis = static_cast<ChunkBlock *>(this);

    pThis->execSync(static_cast<ChunkBlock *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ChunkBlockBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ChunkBlock *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ChunkBlock *>(pRefAspect),
                  dynamic_cast<const ChunkBlock *>(this));

    return returnValue;
}
#endif

void ChunkBlockBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ChunkBlock *>(this)->clearChunks();


}


OSG_END_NAMESPACE
