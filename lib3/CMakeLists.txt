set (NAME Lib3)
set (SOURCES lib3.c)
set (DEPENDENCIES)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
target_include_directories (${NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
