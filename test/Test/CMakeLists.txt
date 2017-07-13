set (NAME Test)
set (SOURCES ../test.c)
set (DEPENDENCIES Lib1 Lib2)

add_executable (${NAME} ${SOURCES})

target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})

if (NOT CMAKE_BUILD_TYPE MATCHES Debug)
    add_custom_command (TARGET ${NAME} POST_BUILD COMMAND strip -R .note.ABI-tag -R .gnu.hash -R .comment -R .gnu.version ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${NAME})
endif (NOT CMAKE_BUILD_TYPE MATCHES Debug)
