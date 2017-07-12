set (NAME Lib2)
set (SOURCES lib2.c)
set (DEPENDENCIES Lib4)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
target_include_directories (${NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
