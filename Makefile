CXX = g++
CFLAGS = -c -std=c++11 
FLAGS =  -lgraph

OBJECTS = build/main.o

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: $(OBJECTS) 
	$(CXX) $(OBJECTS) -o bin/prog $(FLAGS) 

build/main.o: src/main.cpp src/main.h
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o 

build/menu.o: src/menu.cpp src/menu.h
	$(CXX) $(CFLAGS) src/menu.cpp -o build/menu.o

build/dvizheniya.o: src/dvizheniya.cpp src/dvizheniya.h
	$(CXX) $(CFLAGS) src/dvizheniya.cpp -o build/dvizheniya.o 

build/ricynok_polya.o: src/ricynok_polya.cpp src/ricynok_polya.h
	$(CXX) $(CFLAGS) src/ricynok_polya.cpp -o build/ricynok_polya.o

build/ricunok_x.o: src/ricunok_x.cpp src/ricunok_x.h
	$(CXX) $(CFLAGS) src/ricunok_x.cpp -o build/ricunok_x.o

build/ricunok_o.o: src/ricunok_o.cpp src/ricunok_o.h
	$(CXX) $(CFLAGS) src/ricunok_o.cpp -o build/ricunok_o.o

build/win0.o: src/win0.cpp src/win0.h
	$(CXX) $(CFLAGS) src/win0.cpp -o build/win0.o

build/winx.o: src/winx.cpp src/winx.h
	$(CXX) $(CFLAGS) src/winx.cpp -o build/winx.o

build/nichiya.o: src/nichiya.cpp src/nichiya.h
	$(CXX) $(CFLAGS) src/nichiya.cpp -o build/nichiya.o

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog 
