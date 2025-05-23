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
 **     class LogicOpChunk!
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


#include "OSGGL.h"                        // LogicOp default header


#include "OSGLogicOpChunkBase.h"
#include "OSGLogicOpChunk.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LogicOpChunk
    The logic op chunk contains the parameters that specify the logic operation
    applied to fragments before writing them to the framebuffer. The following
    OpenGL functionality is wrapped here: 
    glLogicOp(OSG::LogicOpChunk::_sfLogicOp). 
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          LogicOpChunkBase::_sfLogicOp
    The logic operation applied to fragments.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<LogicOpChunk *, nsOSG>::_type(
    "LogicOpChunkPtr", 
    "StateChunkPtr", 
    LogicOpChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(LogicOpChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LogicOpChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           LogicOpChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LogicOpChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "LogicOp",
        "The logic operation applied to fragments.\n",
        LogicOpFieldId, LogicOpFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LogicOpChunk::editHandleLogicOp),
        static_cast<FieldGetMethodSig >(&LogicOpChunk::getHandleLogicOp));

    oType.addInitialDesc(pDesc);
}


LogicOpChunkBase::TypeObject LogicOpChunkBase::_type(
    LogicOpChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&LogicOpChunkBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&LogicOpChunk::initMethod),
    reinterpret_cast<ExitContainerF>(&LogicOpChunk::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&LogicOpChunk::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"LogicOpChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpStateOpenGL\"\n"
    "   >\n"
    "  The logic op chunk contains the parameters that specify the logic operation\n"
    "  applied to fragments before writing them to the framebuffer. The following\n"
    "  OpenGL functionality is wrapped here: \n"
    "  glLogicOp(OSG::LogicOpChunk::_sfLogicOp). \n"
    "  <Field\n"
    "     name=\"LogicOp\"\n"
    "     category=\"data\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"GL_COPY\"\n"
    "     defaultHeader=\"OSGGL.h\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The logic operation applied to fragments.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "The logic op chunk contains the parameters that specify the logic operation\n"
    "applied to fragments before writing them to the framebuffer. The following\n"
    "OpenGL functionality is wrapped here: \n"
    "glLogicOp(OSG::LogicOpChunk::_sfLogicOp). \n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LogicOpChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &LogicOpChunkBase::getType(void) const
{
    return _type;
}

UInt32 LogicOpChunkBase::getContainerSize(void) const
{
    return sizeof(LogicOpChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *LogicOpChunkBase::editSFLogicOp(void)
{
    editSField(LogicOpFieldMask);

    return &_sfLogicOp;
}

const SFGLenum *LogicOpChunkBase::getSFLogicOp(void) const
{
    return &_sfLogicOp;
}






/*------------------------------ access -----------------------------------*/

SizeT LogicOpChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LogicOpFieldMask & whichField))
    {
        returnValue += _sfLogicOp.getBinSize();
    }

    return returnValue;
}

void LogicOpChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LogicOpFieldMask & whichField))
    {
        _sfLogicOp.copyToBin(pMem);
    }
}

void LogicOpChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LogicOpFieldMask & whichField))
    {
        editSField(LogicOpFieldMask);
        _sfLogicOp.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LogicOpChunkTransitPtr LogicOpChunkBase::createLocal(BitVector bFlags)
{
    LogicOpChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LogicOpChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LogicOpChunkTransitPtr LogicOpChunkBase::createDependent(BitVector bFlags)
{
    LogicOpChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LogicOpChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LogicOpChunkTransitPtr LogicOpChunkBase::create(void)
{
    LogicOpChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LogicOpChunk>(tmpPtr);
    }

    return fc;
}

LogicOpChunk *LogicOpChunkBase::createEmptyLocal(BitVector bFlags)
{
    LogicOpChunk *returnValue;

    newPtr<LogicOpChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LogicOpChunk *LogicOpChunkBase::createEmpty(void)
{
    LogicOpChunk *returnValue;

    newPtr<LogicOpChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr LogicOpChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LogicOpChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LogicOpChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LogicOpChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LogicOpChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LogicOpChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LogicOpChunkBase::shallowCopy(void) const
{
    LogicOpChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LogicOpChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

LogicOpChunkBase::LogicOpChunkBase(void) :
    Inherited(),
    _sfLogicOp                (GLenum(GL_COPY))
{
}

LogicOpChunkBase::LogicOpChunkBase(const LogicOpChunkBase &source) :
    Inherited(source),
    _sfLogicOp                (source._sfLogicOp                )
{
}


/*-------------------------- destructors ----------------------------------*/

LogicOpChunkBase::~LogicOpChunkBase(void)
{
}


GetFieldHandlePtr LogicOpChunkBase::getHandleLogicOp         (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfLogicOp,
             this->getType().getFieldDesc(LogicOpFieldId),
             const_cast<LogicOpChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LogicOpChunkBase::editHandleLogicOp        (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfLogicOp,
             this->getType().getFieldDesc(LogicOpFieldId),
             this));


    editSField(LogicOpFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LogicOpChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LogicOpChunk *pThis = static_cast<LogicOpChunk *>(this);

    pThis->execSync(static_cast<LogicOpChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LogicOpChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LogicOpChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LogicOpChunk *>(pRefAspect),
                  dynamic_cast<const LogicOpChunk *>(this));

    return returnValue;
}
#endif

void LogicOpChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
