cmake_minimum_required(VERSION 3.14)
project(nmp)

enable_testing()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -lpthread)
endif()

foreach(IDX RANGE 1 3 1)
	add_executable(Question-${IDX}-out Question-${IDX}/Question-${IDX}.cc)
	target_link_libraries(Question-${IDX}-out gtest_main gmock pthread) 
	add_test(question-${IDX} Question-${IDX}-out)
endforeach()


# Question 3: Extension Task. You need to integrate Google Tests here
# include(FetchContent)
# FetchContent_Declare(
# 	googletest
# 	URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
# )

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# add_executable(example example.cpp)
# target_link_libraries(example gtest_main)
# add_test(NAME example_test COMMAND example)

# enable_testing()
# add_subdirectory(lib/googletest)

# target_link_libraries(
#   GTest::gtest_main
#   Question3/Question3.cc
# )

# include(GoogleTest)
# gtest_discover_tests(Question3/Question3.cc)