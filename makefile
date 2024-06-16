CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17 -g -O0

TARGETS = $(patsubst %.cpp, bin/%, $(wildcard *.cpp))

all: $(TARGETS)

bin/%: %.cpp bin
	$(CXX) $(CXXFLAGS) $< -o $@

bin:
	mkdir -p bin

clean:
	rm -rf bin

echo:
	@echo $(TARGETS)

.PHONY: all clean echo
