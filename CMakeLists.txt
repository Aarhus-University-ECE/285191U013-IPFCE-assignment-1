cmake_minimum_required(VERSION 3.16)
project(assignment-1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
# create compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# install compile_commands.json to .vscode/c_cpp_properties.json
# check if folder exists
if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/.vscode)
	file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/.vscode)
endif()

install(FILES ${CMAKE_BINARY_DIR}/compile_commands.json DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/.vscode)

# create symbolic link to compile_commands.json in build directory
# so that it can be used by clangd
file(CREATE_LINK ${CMAKE_BINARY_DIR}/compile_commands.json ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json SYMBOLIC)

Include(FetchContent)

FetchContent_Declare(
		Catch2
		GIT_REPOSITORY https://github.com/catchorg/Catch2.git
		GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

include_directories(include)

add_library(max src/max.c)
add_library(add src/add.c)
add_library(max_sum src/max_sum.c)

add_executable(test_max tests/max.cpp)
target_link_libraries(test_max max Catch2::Catch2WithMain)
add_executable(test_add tests/add.cpp)
target_link_libraries(test_add add Catch2::Catch2WithMain)
add_executable(test_max_sum tests/max_sum.cpp)
target_link_libraries(test_max_sum max_sum Catch2::Catch2WithMain)


list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras) # Needed when installing Catch2 with FetchContent
include(CTest)
include(Catch)
catch_discover_tests(test_max)
catch_discover_tests(test_add)
catch_discover_tests(test_max_sum)
