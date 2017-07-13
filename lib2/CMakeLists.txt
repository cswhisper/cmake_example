set (NAME Lib2)
set (SOURCES lib2.c)
set (DEPENDENCIES Lib4)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
