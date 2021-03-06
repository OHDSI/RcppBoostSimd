//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_GOLD_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_GOLD_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
    @ingroup group-constant

    Generate the golden ratio that is \f$\phi = \frac{1+\sqrt5}{2}\f$

    @par Semantic:

    @code
    T r = Gold<T>();
    @endcode

    is similar for floating types to:

    @code
    T r = (1+sqrt(T(5)))/2;
    @endcode

    @return The Gold constant for the proper type
  **/
  template<typename T> T Gold();

  namespace functional
  {
    /*!
      @ingroup group-callable-constant
      Generate the  constant gold.

      @return The Gold constant for the proper type
    **/
    Value Gold();
  }
} }
#endif

#include <boost/simd/constant/definition/gold.hpp>
#include <boost/simd/arch/common/scalar/constant/constant_value.hpp>
#include <boost/simd/arch/common/simd/constant/constant_value.hpp>

#endif
