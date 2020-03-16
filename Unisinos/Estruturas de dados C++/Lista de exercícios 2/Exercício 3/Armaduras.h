
#ifndef ARMADURAS_H
#define ARMADURAS_H


#include "Itens.h"

class Armaduras : public Itens
{
    private :

        int defesa ;

     public :

         Armaduras( int ID , std :: string nome , int defesa , int quantidadeAtual , int quantidade ) ;

         int getDefesa() ;
} ;

#endif
