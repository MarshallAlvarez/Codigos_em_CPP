
#ifndef PAISES_H
#define PAISES_H

#include <vector>
#include <iostream>

class Paises
{
    private :

        std :: string  nome ;
        int populacao , dimensao ;
        std :: vector < Paises* > :: iterator itC ;

    public :

        void setPopulacao( int populacao      ) ;
        void setDimensao ( int dimensao       ) ;
        void setNome     ( std :: string nome ) ;

        int getPopulacao     () ;
        int getDimensao      () ;
        std :: string getNome() ;
} ;

#endif
