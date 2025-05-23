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
 **     class SimpleShadowMapEngine!
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




#include "OSGSimpleShadowMapEngineBase.h"
#include "OSGSimpleShadowMapEngine.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleShadowMapEngine
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color4f         SimpleShadowMapEngineBase::_sfShadowColor
    
*/

/*! \var Int32           SimpleShadowMapEngineBase::_sfForceTextureUnit
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SimpleShadowMapEngine *, nsOSG>::_type(
    "SimpleShadowMapEnginePtr", 
    "ShadowMapEnginePtr", 
    SimpleShadowMapEngine::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SimpleShadowMapEngine *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SimpleShadowMapEngine *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SimpleShadowMapEngine *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SimpleShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "shadowColor",
        "",
        ShadowColorFieldId, ShadowColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngine::editHandleShadowColor),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngine::getHandleShadowColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "forceTextureUnit",
        "",
        ForceTextureUnitFieldId, ForceTextureUnitFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngine::editHandleForceTextureUnit),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngine::getHandleForceTextureUnit));

    oType.addInitialDesc(pDesc);
}


SimpleShadowMapEngineBase::TypeObject SimpleShadowMapEngineBase::_type(
    SimpleShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SimpleShadowMapEngineBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&SimpleShadowMapEngine::initMethod),
    reinterpret_cast<ExitContainerF>(&SimpleShadowMapEngine::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&SimpleShadowMapEngine::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SimpleShadowMapEngine\"\n"
    "   parent=\"ShadowMapEngine\"\n"
    "   library=\"Group\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"false\"\n"
    "   docGroupBase=\"GrpGroupLightShadowEngines\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"shadowColor\"\n"
    "     category=\"data\"\n"
    "     type=\"Color4f\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"0.f, 0.f, 0.f, 1.f\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"forceTextureUnit\"\n"
    "     type=\"Int32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"-1\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleShadowMapEngineBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleShadowMapEngineBase::getType(void) const
{
    return _type;
}

UInt32 SimpleShadowMapEngineBase::getContainerSize(void) const
{
    return sizeof(SimpleShadowMapEngine);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *SimpleShadowMapEngineBase::editSFShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return &_sfShadowColor;
}

const SFColor4f *SimpleShadowMapEngineBase::getSFShadowColor(void) const
{
    return &_sfShadowColor;
}


SFInt32 *SimpleShadowMapEngineBase::editSFForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return &_sfForceTextureUnit;
}

const SFInt32 *SimpleShadowMapEngineBase::getSFForceTextureUnit(void) const
{
    return &_sfForceTextureUnit;
}






/*------------------------------ access -----------------------------------*/

SizeT SimpleShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        returnValue += _sfShadowColor.getBinSize();
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        returnValue += _sfForceTextureUnit.getBinSize();
    }

    return returnValue;
}

void SimpleShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        _sfForceTextureUnit.copyToBin(pMem);
    }
}

void SimpleShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        editSField(ShadowColorFieldMask);
        _sfShadowColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        editSField(ForceTextureUnitFieldMask);
        _sfForceTextureUnit.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleShadowMapEngineTransitPtr SimpleShadowMapEngineBase::createLocal(BitVector bFlags)
{
    SimpleShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SimpleShadowMapEngineTransitPtr SimpleShadowMapEngineBase::createDependent(BitVector bFlags)
{
    SimpleShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SimpleShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleShadowMapEngineTransitPtr SimpleShadowMapEngineBase::create(void)
{
    SimpleShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleShadowMapEngine>(tmpPtr);
    }

    return fc;
}

SimpleShadowMapEngine *SimpleShadowMapEngineBase::createEmptyLocal(BitVector bFlags)
{
    SimpleShadowMapEngine *returnValue;

    newPtr<SimpleShadowMapEngine>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleShadowMapEngine *SimpleShadowMapEngineBase::createEmpty(void)
{
    SimpleShadowMapEngine *returnValue;

    newPtr<SimpleShadowMapEngine>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleShadowMapEngineBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleShadowMapEngine *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleShadowMapEngineBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SimpleShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleShadowMapEngine *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleShadowMapEngineBase::shallowCopy(void) const
{
    SimpleShadowMapEngine *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleShadowMapEngine *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleShadowMapEngineBase::SimpleShadowMapEngineBase(void) :
    Inherited(),
    _sfShadowColor            (Color4f(0.f, 0.f, 0.f, 1.f)),
    _sfForceTextureUnit       (Int32(-1))
{
}

SimpleShadowMapEngineBase::SimpleShadowMapEngineBase(const SimpleShadowMapEngineBase &source) :
    Inherited(source),
    _sfShadowColor            (source._sfShadowColor            ),
    _sfForceTextureUnit       (source._sfForceTextureUnit       )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleShadowMapEngineBase::~SimpleShadowMapEngineBase(void)
{
}


GetFieldHandlePtr SimpleShadowMapEngineBase::getHandleShadowColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfShadowColor,
             this->getType().getFieldDesc(ShadowColorFieldId),
             const_cast<SimpleShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineBase::editHandleShadowColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfShadowColor,
             this->getType().getFieldDesc(ShadowColorFieldId),
             this));


    editSField(ShadowColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineBase::getHandleForceTextureUnit (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfForceTextureUnit,
             this->getType().getFieldDesc(ForceTextureUnitFieldId),
             const_cast<SimpleShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineBase::editHandleForceTextureUnit(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfForceTextureUnit,
             this->getType().getFieldDesc(ForceTextureUnitFieldId),
             this));


    editSField(ForceTextureUnitFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SimpleShadowMapEngine *pThis = static_cast<SimpleShadowMapEngine *>(this);

    pThis->execSync(static_cast<SimpleShadowMapEngine *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleShadowMapEngineBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SimpleShadowMapEngine *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleShadowMapEngine *>(pRefAspect),
                  dynamic_cast<const SimpleShadowMapEngine *>(this));

    return returnValue;
}
#endif

void SimpleShadowMapEngineBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
