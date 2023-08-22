.PHONY: all configure build test test-add test-max test-max-sum

all: build

configure:
	cmake -S . -B build

build: configure
	cmake --build build --target all --parallel=$(shell nproc)
    
test-add: build
	./build/test_add
	
test-max: build
	./build/test_max

test-max-sum: build
	./build/test_max_sum

test: test-add test-max test-max-sum
	# ctest --test-dir build --output-on-failure
