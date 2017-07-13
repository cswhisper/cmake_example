set (NAME Lib4)
set (SOURCES lib4.c)
set (DEPENDENCIES)

add_library (${NAME} STATIC ${SOURCES})
target_link_libraries (${NAME} LINK_PRIVATE ${DEPENDENCIES})
