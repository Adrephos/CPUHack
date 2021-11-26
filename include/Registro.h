#ifndef Registro_h
#define Registro_h
#include "Byte.h"
#include <string>
#include <bitset>

using namespace std;

class Registro : public Byte{
  public:
    Registro(string strNombre);
    ~Registro();

  private:
  string strNombre;

};

#endif
