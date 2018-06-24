cmake_minimum_required(VERSION 3.10)
project(taskNK)

include("conanbuildinfo.cmake")

set(CMAKE_CXX_STANDARD 17)

conan_basic_setup()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize=leak -fsanitize=undefined")

add_executable(testTask src/main.cpp
        src/FirstNPrimeNumers.cpp src/FirstNPrimeNumers.h
        src/TextAndLetters.cpp src/TextAndLetters.h
        src/RemoveListElems.cpp src/RemoveListElems.h
        src/MaxAndMinNumber.cpp src/MaxAndMinNumber.h
        src/FindDepth.cpp src/FindDepth.h)

enable_testing()

add_test(testTask testTask)