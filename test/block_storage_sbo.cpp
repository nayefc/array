// Copyright (C) 2018 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#include <foonathan/array/block_storage_sbo.hpp>

#include <catch.hpp>

#include <foonathan/array/block_storage_new.hpp>
#include <foonathan/array/block_storage_heap_sbo.hpp>

#include "block_storage_algorithm.hpp"

using namespace foonathan::array;

TEST_CASE("block_storage_sbo", "[BlockStorage]")
{
    // TODO: proper test of storage itself

    test::test_block_storage_algorithm<block_storage_heap_sbo<16 * 2, new_heap, default_growth>>(
        {});
}
