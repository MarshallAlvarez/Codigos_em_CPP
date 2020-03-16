
#include "Municao.h"

Municao :: Municao( int ID , std :: string nome , float calibre , int quantidadeAtual , int quantidade )
{
    this -> ID      = ID      ;
    this -> nome    = nome    ;
    this -> calibre = calibre ;

    this -> quantidade      = quantidade      ;
    this -> quantidadeAtual = quantidadeAtual ;
}

float Municao :: getCalibre        () { return this -> calibre ; }

void Municao :: dadosMunicao()
{
    std :: cout << "\nMunicao: " << getQuantidadeAtual() << '/' << getQuantidade()
                << "\nCalibre: " << getCalibre() ;
}

