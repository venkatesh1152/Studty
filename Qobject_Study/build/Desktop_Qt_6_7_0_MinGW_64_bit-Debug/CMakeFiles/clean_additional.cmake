# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qobject_Study_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qobject_Study_autogen.dir\\ParseCache.txt"
  "Qobject_Study_autogen"
  )
endif()
