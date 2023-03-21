FILE(GLOB ProblemSource cpp_basics/unit_test_*.cpp
        manage_memory/unit_test_*.cpp
        object_oriented_programming/unit_test_*.cpp
        object_oriented_programming/playground_*.cpp
        util.cpp)
add_executable(${PROJECT_NAME}_unit_test main.cpp ${ProblemSource})

include_directories(${CMAKE_LIBRARY_PATH})

# gtest path for link (like -D)
link_directories(${LIBRARY_OUTPUT_PATH})

target_link_libraries(${PROJECT_NAME}_unit_test gtest bootup_functions)
add_test(
        NAME
        unit_test
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}_unit_test
)