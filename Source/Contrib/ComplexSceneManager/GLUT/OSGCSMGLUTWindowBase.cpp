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
 **     class CSMGLUTWindow!
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




#include "OSGCSMGLUTWindowBase.h"
#include "OSGCSMGLUTWindow.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMGLUTWindow
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMGLUTWindow *, nsOSG>::_type(
    "CSMGLUTWindowPtr", 
    "CSMWindowPtr", 
    CSMGLUTWindow::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMGLUTWindow *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMGLUTWindow *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMGLUTWindow *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMGLUTWindowBase::classDescInserter(TypeObject &oType)
{
}


CSMGLUTWindowBase::TypeObject CSMGLUTWindowBase::_type(
    CSMGLUTWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMGLUTWindowBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&CSMGLUTWindow::initMethod),
    reinterpret_cast<ExitContainerF>(&CSMGLUTWindow::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&CSMGLUTWindow::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMGLUTWindow\"\n"
    "    parent=\"CSMWindow\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMGLUTWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMGLUTWindowBase::getType(void) const
{
    return _type;
}

UInt32 CSMGLUTWindowBase::getContainerSize(void) const
{
    return sizeof(CSMGLUTWindow);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT CSMGLUTWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void CSMGLUTWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void CSMGLUTWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
CSMGLUTWindowTransitPtr CSMGLUTWindowBase::createLocal(BitVector bFlags)
{
    CSMGLUTWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMGLUTWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMGLUTWindowTransitPtr CSMGLUTWindowBase::createDependent(BitVector bFlags)
{
    CSMGLUTWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMGLUTWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMGLUTWindowTransitPtr CSMGLUTWindowBase::create(void)
{
    return createLocal();
}

CSMGLUTWindow *CSMGLUTWindowBase::createEmptyLocal(BitVector bFlags)
{
    CSMGLUTWindow *returnValue;

    newPtr<CSMGLUTWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMGLUTWindow *CSMGLUTWindowBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMGLUTWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMGLUTWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMGLUTWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMGLUTWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMGLUTWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMGLUTWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMGLUTWindowBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMGLUTWindowBase::CSMGLUTWindowBase(void) :
    Inherited()
{
}

CSMGLUTWindowBase::CSMGLUTWindowBase(const CSMGLUTWindowBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

CSMGLUTWindowBase::~CSMGLUTWindowBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void CSMGLUTWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMGLUTWindow *pThis = static_cast<CSMGLUTWindow *>(this);

    pThis->execSync(static_cast<CSMGLUTWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMGLUTWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMGLUTWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMGLUTWindow *>(pRefAspect),
                  dynamic_cast<const CSMGLUTWindow *>(this));

    return returnValue;
}
#endif

void CSMGLUTWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
