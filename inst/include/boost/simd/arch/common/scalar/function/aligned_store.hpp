//==================================================================================================
/*!
  @file


  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_ALIGNED_STORE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_ALIGNED_STORE_HPP_INCLUDED

#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/detail/dispatch/adapted/common/pointer.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;
  /// INTERNAL ONLY - Scalar aligned_store and aligned_store are equivalent
  BOOST_DISPATCH_OVERLOAD ( aligned_store_
                          , (typename A0, typename A1, typename A2)
                          , bd::cpu_
                          , bd::scalar_< bd::unspecified_<A0> >
                          , bd::pointer_<bd::scalar_<bd::unspecified_<A1>>,1u>
                          , bd::scalar_<bd::integer_<A2>>
                          )
  {
    BOOST_FORCEINLINE void operator() ( A0 a0, A1 a1,  A2 a2) const BOOST_NOEXCEPT
    {
      *(a1+a2) = a0;
    }
  };

  /// INTERNAL ONLY - Scalar aligned_store and aligned_store are equivalent
  BOOST_DISPATCH_OVERLOAD ( aligned_store_
                          , (typename A0, typename A1)
                          , bd::cpu_
                          , bd::scalar_< bd::unspecified_<A0> >
                          , bd::pointer_<bd::scalar_<bd::unspecified_<A1>>,1u>
                          )
  {
    BOOST_FORCEINLINE void operator() ( A0 a0, A1 a1) const BOOST_NOEXCEPT
    {
      *a1 = a0;
    }
  };
} } }


#endif
