main : testPoint.o point.o
	g++ -o point testPoint.o point.o
testPoint.o : testPoint.cpp point.o
	g++ -Wall -c testPoint.cpp
point.o : point.cpp point.hpp
	g++ -Wall -c point.cpp
