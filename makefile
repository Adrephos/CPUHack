HackRT: cpuhack.o pantalla.o registro.o memoria.o byte.o
	g++ -g -o HackRT cpuhack.o byte.o registro.o memoria.o pantalla.o

cpuhack.o: ./include/CPUhack.h CPUhack.cpp registro.o byte.o memoria.o
	g++ -g -c CPUhack.cpp

pantalla.o: ./include/Pantalla.h Pantalla.cpp
	g++ -g -c Pantalla.cpp

registro.o: ./include/Registro.h Registro.cpp byte.o
	g++ -g -c Registro.cpp

memoria.o: Memoria.cpp ./include/Memoria.h
	g++ -g -c Memoria.cpp

byte.o: ./include/Byte.h Byte.cpp
	g++ -g -c Byte.cpp

clear:
	rm -f *.o *.exe
