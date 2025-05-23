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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOREFERENCEATTACHMENTFIELDS_H_
#define _OSGGEOREFERENCEATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GeoReferenceAttachment;

OSG_GEN_CONTAINERPTR(GeoReferenceAttachment);
/*! \ingroup GrpSystemImageFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<GeoReferenceAttachment *, nsOSG> :
    public FieldTraitsFCPtrBase<GeoReferenceAttachment *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GeoReferenceAttachment *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoReferenceAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoReferenceAttachment *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoReferenceAttachmentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemImageFieldSFields */
typedef PointerSField<GeoReferenceAttachment *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldSFields */
typedef PointerSField<GeoReferenceAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldSFields */
typedef PointerSField<GeoReferenceAttachment *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldSFields */
typedef PointerSField<GeoReferenceAttachment *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGeoReferenceAttachmentPtr;


/*! \ingroup GrpSystemImageFieldMFields */
typedef PointerMField<GeoReferenceAttachment *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldMFields */
typedef PointerMField<GeoReferenceAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldMFields */
typedef PointerMField<GeoReferenceAttachment *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGeoReferenceAttachmentPtr;
/*! \ingroup GrpSystemImageFieldMFields */
typedef PointerMField<GeoReferenceAttachment *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGeoReferenceAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemImageFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecGeoReferenceAttachmentPtr : 
    public PointerSField<GeoReferenceAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemImageFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecGeoReferenceAttachmentPtr : 
    public PointerSField<GeoReferenceAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemImageFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakGeoReferenceAttachmentPtr :
    public PointerSField<GeoReferenceAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemImageFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedGeoReferenceAttachmentPtr :
    public PointerSField<GeoReferenceAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemImageFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecGeoReferenceAttachmentPtr :
    public PointerMField<GeoReferenceAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemImageFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecGeoReferenceAttachmentPtr :
    public PointerMField<GeoReferenceAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemImageFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakGeoReferenceAttachmentPtr :
    public PointerMField<GeoReferenceAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemImageFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedGeoReferenceAttachmentPtr :
    public PointerMField<GeoReferenceAttachment *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOREFERENCEATTACHMENTFIELDS_H_ */
