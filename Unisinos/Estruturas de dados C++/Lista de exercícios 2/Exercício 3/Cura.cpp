
#include "Cura.h"
#include "Jogador.h"

Cura :: Cura( int ID , std :: string nome , int recuperacao , int quantidadeAtual , int quantidade )
{
    this -> ID   = ID   ;
    this -> nome = nome ;

    this -> recuperacao     = recuperacao     ;
    this -> quantidade      = quantidade      ;
    this -> quantidadeAtual = quantidadeAtual ;
}

int Cura :: getRecuperacao() { return this -> recuperacao ; }
