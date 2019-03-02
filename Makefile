clean:
	rm -rf ./dist

build:
	mkdir dist
	g++ -std=c++11 ./src/*.cpp -o ./dist/app
