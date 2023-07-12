CXX = g++
CXX_FLAGS = -Wall -std=c++17

compile:
	${CXX} ${CXX_FLAGS} src/*.cpp main.cpp -o build/main

# g++ -Wall -std=c++17 src/*.cpp main.cpp -o build/main