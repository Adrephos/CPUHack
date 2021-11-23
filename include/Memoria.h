#ifndef Memoria_h
#define Memoria_h
#include <string>
#include <bitset>

using namespace std;

class Memoria {
  public:
    Memoria(int numCapacidad);
    ~Memoria();
    string leer(int numPosicion);
    void escribir(int numPosicion);
    
  private:
  int numCapacidad;
  //FALTA ARRAYMEMORIA
};

#endif