cmake_minimum_required(VERSION 3.15)
project(sys CXX)



add_executable(sys src/sys.cpp src/main.cpp)



install(TARGETS sys DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
