/*
 * ----------------------------------
 * Copyright (c) 2021 Prashant K. Jha
 * ----------------------------------
 *
 * Distributed under the Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#include "testParticleLib.h"
#include <hpx/hpx_main.hpp>

int main() {

  //
  // test transformation
  //
  test::testTransform();

  return EXIT_SUCCESS;
}
