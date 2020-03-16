
#ifndef ITENS_H
#define ITENS_H

#include <iostream>

class Itens
{

    protected :

        std :: string nome ;
        int quantidade , quantidadeAtual , ID ;

    public :

        int getID             () ;
        int getQuantidade     () ;
        int getQuantidadeAtual() ;

        std :: string getNome() ;

        void setQuantidadeAtual( int quantidadeAtual ) ;
} ;

#endif
