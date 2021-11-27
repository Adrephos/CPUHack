HackRT: cpuhack.o pantalla.o registro.o memoria.o byte.o
	g++ -g -o HackRT cpuhack.o byte.o registro.o memoria.o pantalla.o

cpuhack.o: ./include/cpuhack.h cpuhack.cpp registro.o byte.o memoria.o
	g++ -g -c cpuhack.cpp

pantalla.o: ./include/pantalla.h pantalla.cpp
	g++ -g -c pantalla.cpp

registro.o: ./include/registro.h registro.cpp byte.o
	g++ -g -c registro.cpp

memoria.o: memoria.cpp ./include/memoria.h
	g++ -g -c memoria.cpp

byte.o: ./include/byte.h byte.cpp
	g++ -g -c byte.cpp

clear:
	rm -f *.o *.exe
