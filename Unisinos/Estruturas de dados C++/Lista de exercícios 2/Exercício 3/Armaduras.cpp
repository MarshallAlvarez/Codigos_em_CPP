
#include "Armaduras.h"

Armaduras :: Armaduras( int ID , std :: string nome , int defesa , int quantidadeAtual , int quantidade )
{
    this -> ID         = ID         ;
    this -> nome       = nome       ;
    this -> defesa     = defesa     ;

    this -> quantidade      = quantidade      ;
    this -> quantidadeAtual = quantidadeAtual ;
}

int Armaduras :: getDefesa() { return this -> defesa ; }
