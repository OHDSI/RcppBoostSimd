//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_DEFINITION_GOLD_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_DEFINITION_GOLD_HPP_INCLUDED

#include <boost/simd/config.hpp>
#include <boost/simd/detail/brigand.hpp>
#include <boost/simd/detail/dispatch.hpp>
#include <boost/simd/detail/constant_traits.hpp>
#include <boost/simd/detail/dispatch/function/make_callable.hpp>
#include <boost/simd/detail/dispatch/hierarchy/functions.hpp>
#include <boost/simd/detail/dispatch/as.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    struct gold_ : boost::dispatch::constant_value_<gold_>
    {
      BOOST_DISPATCH_MAKE_CALLABLE(ext,gold_,boost::dispatch::constant_value_<gold_>);
      BOOST_SIMD_REGISTER_CONSTANT(1, 0x3FCF1BBD,0x3FF9E3779B97F4A8ULL);
    };
  }

  namespace ext
  {
    BOOST_DISPATCH_FUNCTION_DECLARATION(tag,gold_);
  }

  namespace detail
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::gold_,gold);
  }

  template<typename T> BOOST_FORCEINLINE auto Gold()
  BOOST_NOEXCEPT_DECLTYPE(detail::gold( boost::dispatch::as_<T>{}))
  {
    return detail::gold( boost::dispatch::as_<T>{} );
  }
} }

#endif
