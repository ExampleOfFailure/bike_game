cmake_minimum_required(VERSION 3.10)
project(MotorcycleGame)

# Tell CMake where to look for SFML
set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/sfml/lib/cmake/SFML")

# Find the SFML parts
find_package(SFML 3.0 COMPONENTS graphics window system REQUIRED)

# Create your game
add_executable(MotorcycleGame main.cpp)

# Link them together
target_link_libraries(MotorcycleGame sfml-graphics sfml-window sfml-system)

cmake_minimum_required(VERSION 3.10)
project(MySFMLProject)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(MyGame main.cpp)
target_link_libraries(MyGame sfml-graphics sfml-window sfml-system)