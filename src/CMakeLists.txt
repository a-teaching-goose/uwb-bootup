add_executable(${PROJECT_NAME} main.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

FILE(GLOB ProblemSource ACT_1_cpp_basics/*.cpp ACT_1_cpp_basics/*/*.cpp
        ACT_2_manage_memory/*/*.cpp
        ACT_3_object_oriented_programming/*/*.cpp)
add_library(bootup_functions STATIC ${ProblemSource})

target_link_libraries(${PROJECT_NAME} bootup_functions)

add_test(
        NAME
        main
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}
)