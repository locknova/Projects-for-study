# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/first_lesson_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/first_lesson_autogen.dir/ParseCache.txt"
  "first_lesson_autogen"
  )
endif()
