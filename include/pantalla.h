#ifndef Pantalla_h
#define Pantalla_h
#include <iostream> 
#include <bitset>
#include "registro.h"
#include "memoria.h"

using namespace std;

class Pantalla{
	private:
		int posX;
		int posY;
		string strColor;
		string strValor;
		Registro* objRegistro;
		Memoria* objMemoria;
	public:
		Pantalla(int x, int y, string strColor, Registro* registro);
		Pantalla(int x, int y, string strColor, Memoria* memoria);
		Pantalla(int x, int y, string strColor, string strValor);
		~Pantalla();
		void pintar();
   
};

#endif
