set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/lib/googletest/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
list(REMOVE_ITEM SOURCES "${PROJECT_SOURCE_DIR}/src/main.cpp")

# Create the executable
add_executable(testing_main testing_main.cpp ${SOURCES})

# Build googletest libraries and link to executable
find_library(GTEST
  name "gtest"
  PATHS ${PROJECT_SOURCE_DIR}/lib/googletest/build
  NO_DEFAULT_PATHS
)
target_link_libraries(testing_main ${GTEST})
