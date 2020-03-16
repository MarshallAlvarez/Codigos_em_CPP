
#include "Mago.h"

void Mago :: setPoder      ( int poder          ) { this -> poder       = poder       ; }
void Mago :: setIdade      ( int idade          ) { this -> idade       = idade       ; }
void Mago :: setEscolaMagia( int escolaMagia    ) { this -> escolaMagia = escolaMagia ; }
void Mago :: setNome       ( std :: string nome ) { this -> nome        = nome        ; }
void Mago :: setTipo       ( std :: string tipo ) { this -> tipo        = tipo        ; }

int Mago :: getPoder         () { return this -> poder       ; }
int Mago :: getIdade         () { return this -> idade       ; }
int Mago :: getEscolaMagia   () { return this -> escolaMagia ; }
std :: string Mago :: getNome() { return this -> nome        ; }
std :: string Mago :: getTipo() { return this -> tipo        ; }

void Mago :: andar()
{
    std :: cout << "\n\nO mago-guerreiro " << getNome() << " andou." ;
}

void Mago :: falar()
{
    std :: cout << "\nO mago-guerreiro " << getNome() << " falou." ;
}

void Mago :: invocarMagia()
{
    std :: cout << "\nO mago-guerreiro " << getNome() << " invocou uma magia." ;
}
