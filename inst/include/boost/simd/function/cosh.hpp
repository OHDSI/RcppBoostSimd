//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_COSH_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_COSH_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-hyperbolic
    Function object implementing cosh capabilities

    Returns the hyperbolic cosine: \f$(e^{x}+e^{-x})/2\f$.

    @par Semantic:

    For every parameter of floating type @c T

    @code
    T r = cosh(x);
    @endcode

    @see exp, sinh, Half

  **/
  Value cosh(Value const & v0);
} }
#endif

#include <boost/simd/function/scalar/cosh.hpp>
#include <boost/simd/function/simd/cosh.hpp>

#endif
