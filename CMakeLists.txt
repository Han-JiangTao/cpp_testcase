cmake_minimum_required (VERSION 2.8)
project(cpp_testcase)

set(source_files
    main.cpp
)

add_executable(cpp_testcase 
    ${source_files}
)

message("TOPDIR: ${PROJECT_SOURCE_DIR}")

# include path
include_directories (

)

# link so
target_link_libraries(cpp_testcase

)