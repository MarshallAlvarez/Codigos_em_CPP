
#ifndef MUNICAO_H
#define MUNICAO_H

#include <iostream>

#include "Itens.h"

class Municao : public Itens
{
    private :

        float calibre ;

    public :

        Municao( int ID , std :: string nome , float calibre , int quantidadeAtual , int quantidade ) ;

        float getCalibre() ;

        void dadosMunicao() ;
} ;

#endif
