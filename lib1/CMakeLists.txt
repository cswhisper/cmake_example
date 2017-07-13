set (NAME Lib1)
set (SOURCES lib1.c)
set (DEPENDENCIES)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
