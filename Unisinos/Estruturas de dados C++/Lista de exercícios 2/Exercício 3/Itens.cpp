
#include "Itens.h"

int Itens :: getID()              { return this -> ID              ; }
int Itens :: getQuantidade()      { return this -> quantidade      ; }
int Itens :: getQuantidadeAtual() { return this -> quantidadeAtual ; }

std :: string Itens :: getNome() { return this -> nome ; }


void Itens :: setQuantidadeAtual( int quantidadeAtual )
{
    this -> quantidadeAtual = quantidadeAtual ;
}
