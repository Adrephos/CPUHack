#include <iostream> 
#include "./include/Memoria.h"
#include <vector>
#include <unordered_map>
#include <bitset>
#include "./include/Byte.h"

using namespace std;

Memoria::Memoria(int numCapacidad){ 
	this->numCapacidad = numCapacidad;
	vector<Byte> memory(numCapacidad);
}

void Memoria::escribir(int numPosicion, string valor){
	Byte *byte = new Byte()
	memory.insert(valor, numPosicion);

}

