set (NAME Lib3)
set (SOURCES lib3.c)
set (DEPENDENCIES)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
