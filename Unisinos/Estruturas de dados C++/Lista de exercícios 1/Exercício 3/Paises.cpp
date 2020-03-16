
#include "Paises.h"

void Paises :: setPopulacao( int populacao      ) { this -> populacao = populacao ; }
void Paises :: setDimensao ( int dimensao       ) { this -> dimensao  = dimensao  ; }
void Paises :: setNome     ( std :: string nome ) { this -> nome      = nome      ; }

int Paises :: getPopulacao() { return this -> populacao ; }
int Paises :: getDimensao () { return this -> dimensao  ; }

std :: string Paises :: getNome() { return this -> nome ; }
