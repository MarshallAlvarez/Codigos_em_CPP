
#ifndef CURA_H
#define CURA_H

#include <iostream>

#include "Itens.h"

class Cura : public Itens
{
    private :

        int recuperacao ;

    public :

        Cura( int ID , std :: string nome , int recuperacao , int quantidadeAtual , int quantidade ) ;

        int getRecuperacao() ;
} ;

#endif
