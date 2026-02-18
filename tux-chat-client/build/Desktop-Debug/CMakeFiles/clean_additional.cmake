# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/tux-chat-client_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/tux-chat-client_autogen.dir/ParseCache.txt"
  "tux-chat-client_autogen"
  )
endif()
