# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\shop_manager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\shop_manager_autogen.dir\\ParseCache.txt"
  "shop_manager_autogen"
  )
endif()
