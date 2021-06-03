# Makefile
# Include -g flag to get debugging information
# valgrind: memory check and produces a report
all: minstack myqueue

minstack: minstack.cpp
	g++ -g --std=c++11 minstack.cpp -o minstack

myqueue: myqueue.cpp
	g++ -g --std=c++11 myqueue.cpp -o myqueue

clean:
	rm minstack myqueue
