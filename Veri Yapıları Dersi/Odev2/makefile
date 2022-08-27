all: derle calistir

derle:
	g++ -I ./include -o ./lib/AVL.o -c ./src/AVL.cpp
	g++ -I ./include -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include -o ./lib/ArrayList.o -c ./src/ArrayList.cpp
	g++ -I ./include -o ./bin/Test ./lib/AVL.o ./lib/Queue.o ./lib/Radix.o ./lib/ArrayList.o ./src/Test.cpp 
	
calistir:
	./bin/Test