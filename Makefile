.PHONY: all configure build exercises exercise-5 exercise-6 exercise-7

all: exercises

configure:
	cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug

build: configure
	cmake --build build --target all --parallel=$(shell nproc)

exercise-5: build
	@echo "---------- EXERCISE 5 ----------"
	@./build/exercise-5

exercise-6: build
	@echo "---------- EXERCISE 6 ----------"
	@./build/exercise-6

exercise-7: build
	@echo "---------- EXERCISE 7 ----------"
	@./build/exercise-7

exercises: exercise-5 exercise-6 exercise-7
