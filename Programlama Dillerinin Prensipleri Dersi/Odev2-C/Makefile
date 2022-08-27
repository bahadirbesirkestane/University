all:derle baslat

derle:kisi.o sinif.o Oyun.o Test.o 
	gcc ./lib/Test.o ./lib/Dosya.o ./lib/Kisi.o ./lib/Oyun.o -o ./bin/program
sinif.o:
	gcc -I "./include" -c ./src/Dosya.c -o ./lib/Dosya.o
kisi.o:
	gcc -I "./include" -c ./src/Kisi.c -o ./lib/Kisi.o
Oyun.o:
	gcc -I "./include" -c ./src/Oyun.c -o ./lib/Oyun.o
Test.o:
	gcc -I "./include" -c ./src/Test.c -o ./lib/Test.o
baslat:
	./bin/program
	