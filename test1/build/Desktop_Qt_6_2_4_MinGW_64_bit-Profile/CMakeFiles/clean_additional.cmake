# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\test1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\test1_autogen.dir\\ParseCache.txt"
  "test1_autogen"
  )
endif()
