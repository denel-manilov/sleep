all: clean build

clean:
	rm -rf build
build:
	mkdir build
	gcc src/sleep.cpp -o build/sleep