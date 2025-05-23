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
 **     class DisplayFilterStageData!
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



#include "OSGFrameBufferObject.h"       // Target Class
#include "OSGChunkMaterial.h"           // BaseMaterial Class
#include "OSGSimpleSHLChunk.h"          // ColorFilterShader Class
#include "OSGTextureObjChunk.h"         // ColorFilterTexture Class

#include "OSGDisplayFilterStageDataBase.h"
#include "OSGDisplayFilterStageData.h"

#include <boost/bind/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DisplayFilterStageData
    Data use for rendering by the DisplayFilter stage
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          DisplayFilterStageDataBase::_sfWidth
    
*/

/*! \var UInt32          DisplayFilterStageDataBase::_sfHeight
    
*/

/*! \var FrameBufferObject * DisplayFilterStageDataBase::_sfTarget
    
*/

/*! \var ChunkMaterial * DisplayFilterStageDataBase::_sfBaseMaterial
    
*/

/*! \var SimpleSHLChunk * DisplayFilterStageDataBase::_sfColorFilterShader
    
*/

/*! \var TextureObjChunk * DisplayFilterStageDataBase::_sfColorFilterTexture
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<DisplayFilterStageData *, nsOSG>::_type(
    "DisplayFilterStageDataPtr", 
    "StageDataPtr", 
    DisplayFilterStageData::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(DisplayFilterStageData *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DisplayFilterStageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleWidth),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleHeight),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "target",
        "",
        TargetFieldId, TargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleTarget),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChunkMaterialPtr::Description(
        SFUnrecChunkMaterialPtr::getClassType(),
        "baseMaterial",
        "",
        BaseMaterialFieldId, BaseMaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleBaseMaterial),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleBaseMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSimpleSHLChunkPtr::Description(
        SFUnrecSimpleSHLChunkPtr::getClassType(),
        "colorFilterShader",
        "",
        ColorFilterShaderFieldId, ColorFilterShaderFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleColorFilterShader),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleColorFilterShader));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "colorFilterTexture",
        "",
        ColorFilterTextureFieldId, ColorFilterTextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStageData::editHandleColorFilterTexture),
        static_cast<FieldGetMethodSig >(&DisplayFilterStageData::getHandleColorFilterTexture));

    oType.addInitialDesc(pDesc);
}


DisplayFilterStageDataBase::TypeObject DisplayFilterStageDataBase::_type(
    DisplayFilterStageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&DisplayFilterStageDataBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&DisplayFilterStageData::initMethod),
    reinterpret_cast<ExitContainerF>(&DisplayFilterStageData::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&DisplayFilterStageData::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DisplayFilterStageData\"\n"
    "   parent=\"StageData\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   docGroupBase=\"GrpEffectsGroupsDisplayFilter\"\n"
    "   >\n"
    "  Data use for rendering by the DisplayFilter stage\n"
    "  <Field\n"
    "\t name=\"width\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"height\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"target\"\n"
    "\t type=\"FrameBufferObjectPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"baseMaterial\"\n"
    "\t type=\"ChunkMaterialPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorFilterShader\"\n"
    "\t type=\"SimpleSHLChunk\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorFilterTexture\"\n"
    "\t type=\"TextureObjChunk\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the DisplayFilter stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DisplayFilterStageDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &DisplayFilterStageDataBase::getType(void) const
{
    return _type;
}

UInt32 DisplayFilterStageDataBase::getContainerSize(void) const
{
    return sizeof(DisplayFilterStageData);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *DisplayFilterStageDataBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt32 *DisplayFilterStageDataBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFUInt32 *DisplayFilterStageDataBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt32 *DisplayFilterStageDataBase::getSFHeight(void) const
{
    return &_sfHeight;
}


//! Get the DisplayFilterStageData::_sfTarget field.
const SFUnrecFrameBufferObjectPtr *DisplayFilterStageDataBase::getSFTarget(void) const
{
    return &_sfTarget;
}

SFUnrecFrameBufferObjectPtr *DisplayFilterStageDataBase::editSFTarget         (void)
{
    editSField(TargetFieldMask);

    return &_sfTarget;
}

//! Get the value of the DisplayFilterStageData::_sfTarget field.
FrameBufferObject * DisplayFilterStageDataBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

//! Set the value of the DisplayFilterStageData::_sfTarget field.
void DisplayFilterStageDataBase::setTarget(FrameBufferObject * const value)
{
    editSField(TargetFieldMask);

    _sfTarget.setValue(value);
}


//! Get the DisplayFilterStageData::_sfBaseMaterial field.
const SFUnrecChunkMaterialPtr *DisplayFilterStageDataBase::getSFBaseMaterial(void) const
{
    return &_sfBaseMaterial;
}

SFUnrecChunkMaterialPtr *DisplayFilterStageDataBase::editSFBaseMaterial   (void)
{
    editSField(BaseMaterialFieldMask);

    return &_sfBaseMaterial;
}

//! Get the value of the DisplayFilterStageData::_sfBaseMaterial field.
ChunkMaterial * DisplayFilterStageDataBase::getBaseMaterial(void) const
{
    return _sfBaseMaterial.getValue();
}

//! Set the value of the DisplayFilterStageData::_sfBaseMaterial field.
void DisplayFilterStageDataBase::setBaseMaterial(ChunkMaterial * const value)
{
    editSField(BaseMaterialFieldMask);

    _sfBaseMaterial.setValue(value);
}


//! Get the DisplayFilterStageData::_sfColorFilterShader field.
const SFUnrecSimpleSHLChunkPtr *DisplayFilterStageDataBase::getSFColorFilterShader(void) const
{
    return &_sfColorFilterShader;
}

SFUnrecSimpleSHLChunkPtr *DisplayFilterStageDataBase::editSFColorFilterShader(void)
{
    editSField(ColorFilterShaderFieldMask);

    return &_sfColorFilterShader;
}

//! Get the value of the DisplayFilterStageData::_sfColorFilterShader field.
SimpleSHLChunk * DisplayFilterStageDataBase::getColorFilterShader(void) const
{
    return _sfColorFilterShader.getValue();
}

//! Set the value of the DisplayFilterStageData::_sfColorFilterShader field.
void DisplayFilterStageDataBase::setColorFilterShader(SimpleSHLChunk * const value)
{
    editSField(ColorFilterShaderFieldMask);

    _sfColorFilterShader.setValue(value);
}


//! Get the DisplayFilterStageData::_sfColorFilterTexture field.
const SFUnrecTextureObjChunkPtr *DisplayFilterStageDataBase::getSFColorFilterTexture(void) const
{
    return &_sfColorFilterTexture;
}

SFUnrecTextureObjChunkPtr *DisplayFilterStageDataBase::editSFColorFilterTexture(void)
{
    editSField(ColorFilterTextureFieldMask);

    return &_sfColorFilterTexture;
}

//! Get the value of the DisplayFilterStageData::_sfColorFilterTexture field.
TextureObjChunk * DisplayFilterStageDataBase::getColorFilterTexture(void) const
{
    return _sfColorFilterTexture.getValue();
}

//! Set the value of the DisplayFilterStageData::_sfColorFilterTexture field.
void DisplayFilterStageDataBase::setColorFilterTexture(TextureObjChunk * const value)
{
    editSField(ColorFilterTextureFieldMask);

    _sfColorFilterTexture.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT DisplayFilterStageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }
    if(FieldBits::NoField != (BaseMaterialFieldMask & whichField))
    {
        returnValue += _sfBaseMaterial.getBinSize();
    }
    if(FieldBits::NoField != (ColorFilterShaderFieldMask & whichField))
    {
        returnValue += _sfColorFilterShader.getBinSize();
    }
    if(FieldBits::NoField != (ColorFilterTextureFieldMask & whichField))
    {
        returnValue += _sfColorFilterTexture.getBinSize();
    }

    return returnValue;
}

void DisplayFilterStageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BaseMaterialFieldMask & whichField))
    {
        _sfBaseMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterShaderFieldMask & whichField))
    {
        _sfColorFilterShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterTextureFieldMask & whichField))
    {
        _sfColorFilterTexture.copyToBin(pMem);
    }
}

void DisplayFilterStageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        editSField(WidthFieldMask);
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        editSField(HeightFieldMask);
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        editSField(TargetFieldMask);
        _sfTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BaseMaterialFieldMask & whichField))
    {
        editSField(BaseMaterialFieldMask);
        _sfBaseMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterShaderFieldMask & whichField))
    {
        editSField(ColorFilterShaderFieldMask);
        _sfColorFilterShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterTextureFieldMask & whichField))
    {
        editSField(ColorFilterTextureFieldMask);
        _sfColorFilterTexture.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DisplayFilterStageDataTransitPtr DisplayFilterStageDataBase::createLocal(BitVector bFlags)
{
    DisplayFilterStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DisplayFilterStageDataTransitPtr DisplayFilterStageDataBase::createDependent(BitVector bFlags)
{
    DisplayFilterStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DisplayFilterStageDataTransitPtr DisplayFilterStageDataBase::create(void)
{
    DisplayFilterStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DisplayFilterStageData>(tmpPtr);
    }

    return fc;
}

DisplayFilterStageData *DisplayFilterStageDataBase::createEmptyLocal(BitVector bFlags)
{
    DisplayFilterStageData *returnValue;

    newPtr<DisplayFilterStageData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DisplayFilterStageData *DisplayFilterStageDataBase::createEmpty(void)
{
    DisplayFilterStageData *returnValue;

    newPtr<DisplayFilterStageData>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DisplayFilterStageDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DisplayFilterStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterStageData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterStageDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DisplayFilterStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterStageData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterStageDataBase::shallowCopy(void) const
{
    DisplayFilterStageData *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DisplayFilterStageData *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DisplayFilterStageDataBase::DisplayFilterStageDataBase(void) :
    Inherited(),
    _sfWidth                  (UInt32(0)),
    _sfHeight                 (UInt32(0)),
    _sfTarget                 (NULL),
    _sfBaseMaterial           (NULL),
    _sfColorFilterShader      (NULL),
    _sfColorFilterTexture     (NULL)
{
}

DisplayFilterStageDataBase::DisplayFilterStageDataBase(const DisplayFilterStageDataBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfTarget                 (NULL),
    _sfBaseMaterial           (NULL),
    _sfColorFilterShader      (NULL),
    _sfColorFilterTexture     (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

DisplayFilterStageDataBase::~DisplayFilterStageDataBase(void)
{
}

void DisplayFilterStageDataBase::onCreate(const DisplayFilterStageData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DisplayFilterStageData *pThis = static_cast<DisplayFilterStageData *>(this);

        pThis->setTarget(source->getTarget());

        pThis->setBaseMaterial(source->getBaseMaterial());

        pThis->setColorFilterShader(source->getColorFilterShader());

        pThis->setColorFilterTexture(source->getColorFilterTexture());
    }
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleWidth           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleWidth          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleHeight          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleHeight         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleTarget          (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleTarget         (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             this));

    using boost::placeholders::_1;

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStageData::setTarget,
                    static_cast<DisplayFilterStageData *>(this), _1));

    editSField(TargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleBaseMaterial    (void) const
{
    SFUnrecChunkMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecChunkMaterialPtr::GetHandle(
             &_sfBaseMaterial,
             this->getType().getFieldDesc(BaseMaterialFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleBaseMaterial   (void)
{
    SFUnrecChunkMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecChunkMaterialPtr::EditHandle(
             &_sfBaseMaterial,
             this->getType().getFieldDesc(BaseMaterialFieldId),
             this));

    using boost::placeholders::_1;

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStageData::setBaseMaterial,
                    static_cast<DisplayFilterStageData *>(this), _1));

    editSField(BaseMaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleColorFilterShader (void) const
{
    SFUnrecSimpleSHLChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecSimpleSHLChunkPtr::GetHandle(
             &_sfColorFilterShader,
             this->getType().getFieldDesc(ColorFilterShaderFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleColorFilterShader(void)
{
    SFUnrecSimpleSHLChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecSimpleSHLChunkPtr::EditHandle(
             &_sfColorFilterShader,
             this->getType().getFieldDesc(ColorFilterShaderFieldId),
             this));

    using boost::placeholders::_1;

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStageData::setColorFilterShader,
                    static_cast<DisplayFilterStageData *>(this), _1));

    editSField(ColorFilterShaderFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageDataBase::getHandleColorFilterTexture (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfColorFilterTexture,
             this->getType().getFieldDesc(ColorFilterTextureFieldId),
             const_cast<DisplayFilterStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageDataBase::editHandleColorFilterTexture(void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfColorFilterTexture,
             this->getType().getFieldDesc(ColorFilterTextureFieldId),
             this));

    using boost::placeholders::_1;

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStageData::setColorFilterTexture,
                    static_cast<DisplayFilterStageData *>(this), _1));

    editSField(ColorFilterTextureFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DisplayFilterStageDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DisplayFilterStageData *pThis = static_cast<DisplayFilterStageData *>(this);

    pThis->execSync(static_cast<DisplayFilterStageData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DisplayFilterStageDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DisplayFilterStageData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DisplayFilterStageData *>(pRefAspect),
                  dynamic_cast<const DisplayFilterStageData *>(this));

    return returnValue;
}
#endif

void DisplayFilterStageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DisplayFilterStageData *>(this)->setTarget(NULL);

    static_cast<DisplayFilterStageData *>(this)->setBaseMaterial(NULL);

    static_cast<DisplayFilterStageData *>(this)->setColorFilterShader(NULL);

    static_cast<DisplayFilterStageData *>(this)->setColorFilterTexture(NULL);


}


OSG_END_NAMESPACE
