SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)
CXXFLAGS=-g -Wall -Werror -pg -std=c++11

.PHONY: clean all

all: erp

℅.o: %.cpp
	g++ $(CXXFLAGS) -c -o $<

erp: $(OBJS)
	g++ -o $@ $^

clean:
	rm -f *.o erp
