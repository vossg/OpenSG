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
 **     class GeoIntegralProperty!
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




#include "OSGGeoIntegralPropertyBase.h"
#include "OSGGeoIntegralProperty.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoIntegralProperty
    Parent class for integral (i.e. one dimensional unsigned integer typed)
    properties. 
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<GeoIntegralProperty *, nsOSG>::_type(
    "GeoIntegralPropertyPtr", 
    "GeoPropertyPtr", 
    GeoIntegralProperty::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(GeoIntegralProperty *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoIntegralProperty *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoIntegralProperty *,
                           nsOSG)

DataType &FieldTraits< GeoIntegralProperty *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<GeoIntegralProperty *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      GeoIntegralProperty *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      GeoIntegralProperty *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoIntegralPropertyBase::classDescInserter(TypeObject &oType)
{
}


GeoIntegralPropertyBase::TypeObject GeoIntegralPropertyBase::_type(
    GeoIntegralPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&GeoIntegralProperty::initMethod),
    reinterpret_cast<ExitContainerF>(&GeoIntegralProperty::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&GeoIntegralProperty::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GeoIntegralProperty\"\n"
    "   parent=\"GeoProperty\"\n"
    "   library=\"Drawable\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"both\"\n"
    "   docGroupBase=\"GrpDrawablesGeometry\"\n"
    "   >\n"
    "  Parent class for integral (i.e. one dimensional unsigned integer typed)\n"
    "  properties. \n"
    "\n"
    "  The main use for this class is as a parent class for indices, lengths and \n"
    "  types for the Geometry.\n"
    "</FieldContainer>\n",
    "Parent class for integral (i.e. one dimensional unsigned integer typed)\n"
    "properties. \n"
    "\n"
    "The main use for this class is as a parent class for indices, lengths and \n"
    "types for the Geometry.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoIntegralPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoIntegralPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoIntegralPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoIntegralProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT GeoIntegralPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoIntegralPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoIntegralPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

GeoIntegralPropertyBase::GeoIntegralPropertyBase(void) :
    Inherited()
{
}

GeoIntegralPropertyBase::GeoIntegralPropertyBase(const GeoIntegralPropertyBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoIntegralPropertyBase::~GeoIntegralPropertyBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GeoIntegralPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoIntegralProperty *pThis = static_cast<GeoIntegralProperty *>(this);

    pThis->execSync(static_cast<GeoIntegralProperty *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void GeoIntegralPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
