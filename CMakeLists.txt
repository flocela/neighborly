cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(HelloWorld)

file(GLOB project_SRCS src/*.cpp)
add_executable(HelloWorld ${project_SRCS})

file(GLOB test_SRCS tests/*.cpp
src/City_Grid.cpp
src/CityFactory_Grid.cpp 
src/HappinessFunc_Falling.cpp
src/HappinessFunc_Flat.cpp
src/HappinessFunc_Rising.cpp
src/HappinessFunc_StepDown.cpp
src/HappinessFunc_StepUp.cpp
src/Manager.cpp
src/Question_Int.cpp
src/Question_Double.cpp
src/Question.cpp
src/Resident_Flat.cpp
src/Resident_StepDown.cpp
src/Resident.cpp
src/UI_CMDLine.cpp 
)

add_executable(RunTests ${test_SRCS})