add_executable(${PROJECT_NAME} main.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

FILE(GLOB ProblemSource cpp_basics/*.cpp manage_your_own_memory/*.cpp object_oriented_programming/*.cpp)
add_library(homework_functions STATIC ${ProblemSource})

target_link_libraries(${PROJECT_NAME} homework_functions)

add_test(
        NAME
        main
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}
)