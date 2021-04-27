cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(HelloWorld)

file(GLOB project_SRCS src/*.cpp src/simulator/*.cpp)
add_executable(HelloWorld ${project_SRCS})

file(GLOB test_SRCS tests/*.cpp tests/catchutils/*.cpp src/simulator/*.cpp)
#src/City_Grid.cpp
#src/CityFactory_Grid.cpp
#src/CityMaker.cpp
#HappinessFunc_Falling.cpp
#HappinessFunc_Flat.cpp
#HappinessFunc_Rising.cpp
#HappinessFunc_StepDown.cpp
#HappinessFunc_StepUp.cpp
#Log.cpp
#Manager.cpp
#Question_Int.cpp
#Question.cpp
#Resident_Flat.cpp
#Resident_StepDown.cpp
#Resident.cpp
#StartInfoMaker.cpp
#UI_CMDLine.cpp)

add_executable(RunTests ${test_SRCS})