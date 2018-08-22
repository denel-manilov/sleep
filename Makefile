all: clean test build

clean:
	rm -rf build
build:
	mkdir build
	gcc src/sleep.cpp -o build/sleep -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic
test:
	cpplint src/sleep.cpp
