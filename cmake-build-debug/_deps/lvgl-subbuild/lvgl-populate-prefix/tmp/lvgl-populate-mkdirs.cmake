# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-src"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-build"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix/tmp"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix/src/lvgl-populate-stamp"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix/src"
  "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix/src/lvgl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/hermione/CLionProjects/EFIFrontend/cmake-build-debug/_deps/lvgl-subbuild/lvgl-populate-prefix/src/lvgl-populate-stamp/${subDir}")
endforeach()
