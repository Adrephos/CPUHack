#ifndef Byte_h
#define Byte_h
#include <string>
#include <bitset>

using namespace std;

class Byte {
	public:
		Byte();
		~Byte();
		string leer();
		void escribir(string valor);

	private:
		string strContenido;

};

#endif
