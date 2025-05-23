/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class PolygonForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &PolygonForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PolygonForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PolygonForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PolygonForeground::_sfNormalizedX field.

inline
bool &PolygonForegroundBase::editNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return _sfNormalizedX.getValue();
}

//! Get the value of the PolygonForeground::_sfNormalizedX field.
inline
      bool  PolygonForegroundBase::getNormalizedX(void) const
{
    return _sfNormalizedX.getValue();
}

//! Set the value of the PolygonForeground::_sfNormalizedX field.
inline
void PolygonForegroundBase::setNormalizedX(const bool value)
{
    editSField(NormalizedXFieldMask);

    _sfNormalizedX.setValue(value);
}
//! Get the value of the PolygonForeground::_sfNormalizedY field.

inline
bool &PolygonForegroundBase::editNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return _sfNormalizedY.getValue();
}

//! Get the value of the PolygonForeground::_sfNormalizedY field.
inline
      bool  PolygonForegroundBase::getNormalizedY(void) const
{
    return _sfNormalizedY.getValue();
}

//! Set the value of the PolygonForeground::_sfNormalizedY field.
inline
void PolygonForegroundBase::setNormalizedY(const bool value)
{
    editSField(NormalizedYFieldMask);

    _sfNormalizedY.setValue(value);
}
//! Get the value of the PolygonForeground::_sfAspectHeight field.

inline
UInt16 &PolygonForegroundBase::editAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return _sfAspectHeight.getValue();
}

//! Get the value of the PolygonForeground::_sfAspectHeight field.
inline
      UInt16  PolygonForegroundBase::getAspectHeight(void) const
{
    return _sfAspectHeight.getValue();
}

//! Set the value of the PolygonForeground::_sfAspectHeight field.
inline
void PolygonForegroundBase::setAspectHeight(const UInt16 value)
{
    editSField(AspectHeightFieldMask);

    _sfAspectHeight.setValue(value);
}
//! Get the value of the PolygonForeground::_sfAspectWidth field.

inline
UInt16 &PolygonForegroundBase::editAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return _sfAspectWidth.getValue();
}

//! Get the value of the PolygonForeground::_sfAspectWidth field.
inline
      UInt16  PolygonForegroundBase::getAspectWidth(void) const
{
    return _sfAspectWidth.getValue();
}

//! Set the value of the PolygonForeground::_sfAspectWidth field.
inline
void PolygonForegroundBase::setAspectWidth(const UInt16 value)
{
    editSField(AspectWidthFieldMask);

    _sfAspectWidth.setValue(value);
}
//! Get the value of the PolygonForeground::_sfScale field.

inline
Real32 &PolygonForegroundBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the PolygonForeground::_sfScale field.
inline
      Real32  PolygonForegroundBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the PolygonForeground::_sfScale field.
inline
void PolygonForegroundBase::setScale(const Real32 value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the PolygonForeground::_sfTile field.

inline
bool &PolygonForegroundBase::editTile(void)
{
    editSField(TileFieldMask);

    return _sfTile.getValue();
}

//! Get the value of the PolygonForeground::_sfTile field.
inline
      bool  PolygonForegroundBase::getTile(void) const
{
    return _sfTile.getValue();
}

//! Set the value of the PolygonForeground::_sfTile field.
inline
void PolygonForegroundBase::setTile(const bool value)
{
    editSField(TileFieldMask);

    _sfTile.setValue(value);
}

//! Get the value of the \a index element the PolygonForeground::_mfPositions field.
inline
const Pnt2f &PolygonForegroundBase::getPositions(const UInt32 index) const
{
    return _mfPositions[index];
}

inline
MFPnt2f            ::reference PolygonForegroundBase::editPositions(const UInt32 index)
{
    editMField(PositionsFieldMask, _mfPositions);

    return _mfPositions[index];
}

//! Get the value of the \a index element the PolygonForeground::_mfTexCoords field.
inline
const Vec3f &PolygonForegroundBase::getTexCoords(const UInt32 index) const
{
    return _mfTexCoords[index];
}

inline
MFVec3f            ::reference PolygonForegroundBase::editTexCoords(const UInt32 index)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return _mfTexCoords[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PolygonForegroundBase::execSync (      PolygonForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pFrom->_sfMaterial);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pFrom->_mfPositions,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pFrom->_mfTexCoords,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
        _sfNormalizedX.syncWith(pFrom->_sfNormalizedX);

    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
        _sfNormalizedY.syncWith(pFrom->_sfNormalizedY);

    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
        _sfAspectHeight.syncWith(pFrom->_sfAspectHeight);

    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
        _sfAspectWidth.syncWith(pFrom->_sfAspectWidth);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (TileFieldMask & whichField))
        _sfTile.syncWith(pFrom->_sfTile);
}
#endif


inline
const Char8 *PolygonForegroundBase::getClassname(void)
{
    return "PolygonForeground";
}
OSG_GEN_CONTAINERPTR(PolygonForeground);

OSG_END_NAMESPACE

