#include <iostream> 
#include "./include/memoria.h"
#include <vector>
#include <unordered_map>
#include <bitset>
#include "./include/byte.h"

using namespace std;

Memoria::Memoria(int numCapacidad){ 
	this->numCapacidad = numCapacidad;
	vector<Byte> memory(numCapacidad);
}


string Memoria::leer(int numPosicion){
	return memory[numPosicion].leer();
}

void Memoria::escribir(int numPosicion, string valor){
	memory[numPosicion].escribir(valor);

}

