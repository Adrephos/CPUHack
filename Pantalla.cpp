#include <iostream> 
#include "./include/Pantalla.h"

using namespace std;


Pantalla::Pantalla(int x, int y, string strColor, Registro objeto){
	this->posX = x;
	this->posY = y;
	this->strColor = strColor;
}
Pantalla::Pantalla(int x, int y, string strColor, Memoria objeto){
	this->posX = x;
	this->posY = y;
	this->strColor = strColor;
}
Pantalla::Pantalla(int x, int y, string strColor, string strValor){
	this->posX = x;
	this->posY = y;
	this->strColor = strColor;
	this->strValor = strValor;
}

void Pantalla::pintar(){
  cout << "si" << endl;
}
