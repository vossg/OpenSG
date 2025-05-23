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
 **     class FileContextAttachment!
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




#include "OSGFileContextAttachmentBase.h"
#include "OSGFileContextAttachment.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FileContextAttachment
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     FileContextAttachmentBase::_sfResolvedName
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FileContextAttachment *, nsOSG>::_type(
    "FileContextAttachmentPtr", 
    "AttachmentPtr", 
    FileContextAttachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FileContextAttachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FileContextAttachment *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FileContextAttachment *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FileContextAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "resolvedName",
        "",
        ResolvedNameFieldId, ResolvedNameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FileContextAttachment::editHandleResolvedName),
        static_cast<FieldGetMethodSig >(&FileContextAttachment::getHandleResolvedName));

    oType.addInitialDesc(pDesc);
}


FileContextAttachmentBase::TypeObject FileContextAttachmentBase::_type(
    FileContextAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "FileContextAttachment",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FileContextAttachmentBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&FileContextAttachment::initMethod),
    reinterpret_cast<ExitContainerF>(&FileContextAttachment::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&FileContextAttachment::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"FileContextAttachment\"\n"
    "   parent=\"Attachment\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemFileIO\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"resolvedName\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FileContextAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &FileContextAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 FileContextAttachmentBase::getContainerSize(void) const
{
    return sizeof(FileContextAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFString *FileContextAttachmentBase::editSFResolvedName(void)
{
    editSField(ResolvedNameFieldMask);

    return &_sfResolvedName;
}

const SFString *FileContextAttachmentBase::getSFResolvedName(void) const
{
    return &_sfResolvedName;
}






/*------------------------------ access -----------------------------------*/

SizeT FileContextAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ResolvedNameFieldMask & whichField))
    {
        returnValue += _sfResolvedName.getBinSize();
    }

    return returnValue;
}

void FileContextAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ResolvedNameFieldMask & whichField))
    {
        _sfResolvedName.copyToBin(pMem);
    }
}

void FileContextAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ResolvedNameFieldMask & whichField))
    {
        editSField(ResolvedNameFieldMask);
        _sfResolvedName.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FileContextAttachmentTransitPtr FileContextAttachmentBase::createLocal(BitVector bFlags)
{
    FileContextAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FileContextAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FileContextAttachmentTransitPtr FileContextAttachmentBase::createDependent(BitVector bFlags)
{
    FileContextAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FileContextAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FileContextAttachmentTransitPtr FileContextAttachmentBase::create(void)
{
    FileContextAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FileContextAttachment>(tmpPtr);
    }

    return fc;
}

FileContextAttachment *FileContextAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    FileContextAttachment *returnValue;

    newPtr<FileContextAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FileContextAttachment *FileContextAttachmentBase::createEmpty(void)
{
    FileContextAttachment *returnValue;

    newPtr<FileContextAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FileContextAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FileContextAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FileContextAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FileContextAttachmentBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FileContextAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FileContextAttachment *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FileContextAttachmentBase::shallowCopy(void) const
{
    FileContextAttachment *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FileContextAttachment *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FileContextAttachmentBase::FileContextAttachmentBase(void) :
    Inherited(),
    _sfResolvedName           ()
{
}

FileContextAttachmentBase::FileContextAttachmentBase(const FileContextAttachmentBase &source) :
    Inherited(source),
    _sfResolvedName           (source._sfResolvedName           )
{
}


/*-------------------------- destructors ----------------------------------*/

FileContextAttachmentBase::~FileContextAttachmentBase(void)
{
}


GetFieldHandlePtr FileContextAttachmentBase::getHandleResolvedName    (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfResolvedName,
             this->getType().getFieldDesc(ResolvedNameFieldId),
             const_cast<FileContextAttachmentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FileContextAttachmentBase::editHandleResolvedName   (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfResolvedName,
             this->getType().getFieldDesc(ResolvedNameFieldId),
             this));


    editSField(ResolvedNameFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FileContextAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FileContextAttachment *pThis = static_cast<FileContextAttachment *>(this);

    pThis->execSync(static_cast<FileContextAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FileContextAttachmentBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FileContextAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FileContextAttachment *>(pRefAspect),
                  dynamic_cast<const FileContextAttachment *>(this));

    return returnValue;
}
#endif

void FileContextAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
