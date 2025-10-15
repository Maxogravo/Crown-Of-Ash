main: main.cpp
	g++ main.cpp -o main -std=c++17 -I/usr/local/include -L/usr/local/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo


