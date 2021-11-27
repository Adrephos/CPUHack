#ifndef Memoria_h
#define Memoria_h
#include <iostream>
#include "byte.h"
#include <vector>
#include <bitset>

using namespace std;

class Memoria {
	public:
		Memoria(int numCapacidad);
		~Memoria();
		string leer(int numPosicion);
		void escribir(int numPosicion, string valor);
    
	private:
		int numCapacidad;
		vector<Byte> memory;
};

#endif
