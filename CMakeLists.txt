cmake_minimum_required (VERSION 2.8)
project(cpp_testcase)

set(PYTHON_INCLUDES /usr/local/python3/include/python3.7m/)
set(PYTHON_LIB /usr/local/python3/lib/libpython3.7m.a)

set(source_files
    main.cpp
    ${PROJECT_SOURCE_DIR}/common/timer.cpp
)

add_executable(cpp_testcase 
    ${source_files}
)

message("TOPDIR: ${PROJECT_SOURCE_DIR}")

# include path
include_directories (
    ${PYTHON_INCLUDES}
    ${PROJECT_SOURCE_DIR}/common
)

# link so
target_link_libraries(cpp_testcase
    ${PYTHON_LIB}
)
