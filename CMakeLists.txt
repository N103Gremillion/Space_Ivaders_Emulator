cmake_minimum_required(VERSION 3.8)

set(This Space_Invaders_Emulator)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_BUILD_TYPE Debug)

enable_testing()

find_package(SDL2_ttf REQUIRED)
find_package(SDL2 REQUIRED)

include_directories(${This} ${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})

set (Headers
  ./src/CPU/8080.hpp
  ./src/CPU/keys.hpp
  ./src/CPU/Screen.hpp
  ./src/CPU/Registers.hpp
  ./src/CPU/instruction_list.hpp
  ./src/CPU/headers.hpp
  ./src/CPU/log.hpp
)

set(Sources
  ./src/CPU/8080.cpp
  ./src/CPU/keys.cpp
  ./src/CPU/Screen.cpp
  ./src/CPU/Registers.cpp
  ./src/CPU/instruction_list.cpp
  ./src/CPU/log.cpp
  ./src/main.cpp
)

# Add an executable (main entry point)
add_executable(${This} ${Sources})

target_link_libraries(${This} ${SDL2_LIBRARIES} SDL2 SDL2_ttf)
target_link_libraries(${This} )


