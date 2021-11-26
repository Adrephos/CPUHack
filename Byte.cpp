#include <iostream>
#include "./include/Byte.h"
#include <string>
#include <unordered_map>
#include <bitset>

using namespace std;

Byte::Byte(){ 
	this->strContenido = "0000000000000000";
}

string Byte::leer(){
	return 0;
}

void Byte::escribir(string valor){
	this->strContenido = valor;
}
