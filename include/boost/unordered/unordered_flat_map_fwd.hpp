
// Copyright (C) 2022 Christian Mazakas
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNORDERED_FLAT_MAP_FWD_HPP_INCLUDED
#define BOOST_UNORDERED_FLAT_MAP_FWD_HPP_INCLUDED

#include <boost/config.hpp>
#if defined(BOOST_HAS_PRAGMA_ONCE)
#pragma once
#endif

#include <boost/functional/hash_fwd.hpp>
#include <boost/unordered/detail/fwd.hpp>
#include <functional>
#include <memory>

namespace boost {
  namespace unordered {
    template <class Key, class T, class Hash = boost::hash<Key>,
      class KeyEqual = std::equal_to<Key>,
      class Allocator = std::allocator<std::pair<const Key, T> > >
    class unordered_flat_map;
  }

  using boost::unordered::unordered_flat_map;
} // namespace boost

#endif