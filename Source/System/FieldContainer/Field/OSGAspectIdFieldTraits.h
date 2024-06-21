/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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

#ifndef _OSGASPECTIDFIELDTRAITS_H_
#define _OSGASPECTIDFIELDTRAITS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGSystemDef.h"
#include "OSGSysFieldTraits.h"
#include "OSGAspectPool.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpBaseFieldTraits
    \ingroup GrpLibOSGBase 
 */

template <>
struct FieldTraits<AspectId, 2> : 
    public FieldTraitsPODTemplateBase<AspectId, 2>
{
  private:

    static  DataType                  _type;

  public:

    typedef FieldTraits<AspectId, 2>   Self;

    enum : UInt32     { Convertible = (Self::ToStreamConvertible  |
                                       Self::FromStringConvertible)    };

    static OSG_SYSTEM_DLLMAPPING
                 DataType  &getType (void);

    static const Char8     *getSName(void)   { return "SFAspectId";    }

    static const Char8     *getMName(void)   { return "MFAspectId";    }

    static       BitVector  getDefault(void) { return AspectId();      }

    static void putToStream(const AspectId  &val,
                                  OutStream &str)
    {
        FieldTraits<UInt32>::putToStream(val, str);
    }

    static bool getFromCString(      AspectId  &outVal,
                               const Char8    *&inVal )
    {
        outVal = 0;

        if(inVal[0] == '\0')
            return false;
        
        if(inVal[0] >= '0' && inVal[0] <= '9')
        {
            FieldTraits<UInt32>::getFromCString(outVal, inVal);

            return true;
        }
        
        outVal = AspectPool::the()->get(inVal);

        return true;
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpBaseFieldSingle */
typedef SField<AspectId, 2>   SFAspectId;

#else

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct SFAspectId    : public SField<AspectId, 2> {};

#endif

OSG_END_NAMESPACE

#endif /* _OSGASPECTIDFIELDTRAITS_H_ */

