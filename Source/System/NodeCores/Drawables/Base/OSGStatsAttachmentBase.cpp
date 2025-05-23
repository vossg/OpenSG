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
 **     class StatsAttachment!
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




#include "OSGStatsAttachmentBase.h"
#include "OSGStatsAttachment.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StatsAttachment
    The base class for statistics attachments.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<StatsAttachment *, nsOSG>::_type(
    "StatsAttachmentPtr", 
    "AttachmentPtr", 
    StatsAttachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(StatsAttachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StatsAttachment *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StatsAttachment *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StatsAttachmentBase::classDescInserter(TypeObject &oType)
{
}


StatsAttachmentBase::TypeObject StatsAttachmentBase::_type(
    StatsAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "StatsAttachment",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&StatsAttachment::initMethod),
    reinterpret_cast<ExitContainerF>(&StatsAttachment::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&StatsAttachment::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"StatsAttachment\"\n"
    "   parent=\"Attachment\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpSystemNodeCoreDrawables\"\n"
    "   >\n"
    "  The base class for statistics attachments.\n"
    "</FieldContainer>\n",
    "The base class for statistics attachments.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StatsAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &StatsAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 StatsAttachmentBase::getContainerSize(void) const
{
    return sizeof(StatsAttachment);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT StatsAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void StatsAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void StatsAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

StatsAttachmentBase::StatsAttachmentBase(void) :
    Inherited()
{
}

StatsAttachmentBase::StatsAttachmentBase(const StatsAttachmentBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

StatsAttachmentBase::~StatsAttachmentBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void StatsAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StatsAttachment *pThis = static_cast<StatsAttachment *>(this);

    pThis->execSync(static_cast<StatsAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void StatsAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
