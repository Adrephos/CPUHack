#include <iostream>
#include "./include/byte.h"
#include <string>
#include <unordered_map>
#include <bitset>

using namespace std;

Byte::Byte(){ 
	this->strContenido = "0000000000000000";
}

Byte::~Byte(){

}

string Byte::leer(){
	return strContenido;
}

void Byte::escribir(string valor){
	this->strContenido = valor;
}
