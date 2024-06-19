/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2000,2001,2002 by the OpenSG Forum                *
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

#ifndef _OSGSIMPLEREUSEPOOL_H_
#define _OSGSIMPLEREUSEPOOL_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBaseTypes.h"

#include <vector>
#include <deque>

OSG_BEGIN_NAMESPACE

class PoolDefaultTag;

/*! \ingroup GrpBaseBasePools
    \ingroup GrpBaseBase
    \ingroup GrpLibOSGBase
    \nohierarchy
*/

template <class ValueT, 
          class PoolTag    = PoolDefaultTag,
          class LockPolicy = NoLockPolicy>
class SimpleReusePool 
{
    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleReusePool(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    virtual ~SimpleReusePool(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      create                                  */
    /*! \{                                                                 */

    ValueT *create(void);

    template<class ParameterT>
    ValueT *create(ParameterT oParam);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       free                                   */
    /*! \{                                                                 */
    
    void freeAll(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       stat                                   */
    /*! \{                                                                 */
    
    void printStat(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef          std::vector<ValueT *>           ValueStore;

    typedef typename std::vector<ValueT *>::iterator ValueStoreIt;

    
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    ValueStore   _elementStore;
    ValueStoreIt _currentFreeElement;

    UInt32       _uiAllocated;
    UInt32       _uiReused;

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    /*!\brief prohibit default function (move to 'public' if needed) */
    SimpleReusePool(const SimpleReusePool &source);
    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const SimpleReusePool &source);
};

/*! \ingroup GrpBaseBasePools
    \ingroup GrpBaseBase
    \ingroup GrpLibOSGBase
    \nohierarchy
*/

template<class PoolTag, class LockPolicy>
class SimpleReusePool<Int32, PoolTag, LockPolicy>
{
    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleReusePool(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    virtual ~SimpleReusePool(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      create                                  */
    /*! \{                                                                 */

    Int32 create (void       );
    void  release(Int32 uiVal);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       free                                   */
    /*! \{                                                                 */
    
//    void freeAll(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       stat                                   */
    /*! \{                                                                 */
    
    void dumpState(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:


    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    void initializeValue(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    std::atomic<Int32> _currentValue;
         LockPolicy    _oLockPolicy;
    std::deque<Int32>  _vFreeValueStore;

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    /*!\brief prohibit default function (move to 'public' if needed) */
    SimpleReusePool(const SimpleReusePool &source);
    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const SimpleReusePool &source);
};

OSG_END_NAMESPACE

#include "OSGSimpleReusePool.inl"

#endif /* _OSGSIMPLEREUSEPOOL_H_ */
