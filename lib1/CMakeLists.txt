set (NAME Lib1)
set (SOURCES lib1.c)
set (DEPENDENCIES)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
target_include_directories (${NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
