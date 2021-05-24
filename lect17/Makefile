# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
all: cmpclass sortforest

cmpclass: cmpclass.cpp
	g++ -g --std=c++11 cmpclass.cpp -o cmpclass

sortforest: sortforest.cpp
	g++ -g --std=c++11 sortforest.cpp -o sortforest

clean:
	rm cmpclass sortforest
