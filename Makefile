clean:
	rm -rf ./dist

build:
	rm -rf ./dist
	mkdir dist
	g++ -std=c++11 ./src/*.cpp -o ./dist/app

build-gcc:
	rm -rf ./dist
	mkdir dist
	gcc -std=c++11 ./src/*.cpp -o ./dist/app
