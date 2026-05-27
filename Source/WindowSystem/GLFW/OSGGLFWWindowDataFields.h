/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGGLFWWINDOWDATAFIELDS_H_
#define _OSGGLFWWINDOWDATAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

typedef struct GLFWwindow GLFWwindow;

#include "OSGConfig.h"

#include "OSGWindowGLFWDef.h"

#include "OSGBaseTypes.h"
#include "OSGFieldTraits.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpWindowGLFWFieldTraits
 */

typedef ::GLFWwindow *GLFWwindowP;


/*! \ingroup GrpWindowXFieldTraits
    \ingroup GrpLibOSGWindowX
 */

template <>
struct FieldTraits<GLFWwindowP> : 
    public FieldTraitsPtrToStringTemplateBase<GLFWwindowP>
{
    static  DataType                 _type;                       
    typedef FieldTraits<GLFWwindowP>  Self;

    enum : UInt32               { Convertible = (Self::ToStringConvertible  |
                                                 Self::FromStringConvertible)};

    static       DataType &getType (void) { return _type;        }

    static const Char8    *getSName(void) { return "SFGLFWwindowP"; }
    static const Char8    *getMName(void) { return "MFGLFWwindowP"; }

    static bool      getFromCString(      GLFWwindowP     &pWindow,
                                    const Char8           *       )
    {
        pWindow = NULL;

        return true;
    }

    static void      putToString  (const      GLFWwindowP &,
                                         std::string      &outStr)
    {
        outStr.assign("GLFWwindowP");
    }
};



#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpWindowXFieldSFields */
typedef SField<GLFWwindowP> SFGLFWwindowP;

/*! \ingroup GrpWindowXFieldMFields */
typedef MField<GLFWwindowP> MFGLFWwindowP;

#else // doxygen hacks

/*! \ingroup GrpWindowXFieldSFields */
struct SFGLFWwindowP : public SField<GLFWwindowP> {};

/*! \ingroup GrpWindowXFieldMFields */
struct MFGLFWwindowP : public MField<GLFWwindowP> {};

#endif

OSG_END_NAMESPACE

#endif /* _OSGGLFWWINDOWDATAFIELDS_H_ */

