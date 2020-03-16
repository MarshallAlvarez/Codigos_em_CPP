
#ifndef ARMAS_H
#define ARMAS_H

#include <iostream>

#include "Itens.h"

class Armas : public Itens
{
    private :

        float peso ;
        int pente , penteAtual ;

    public :

        Armas( int ID , std :: string nome , float peso , int penteAtual , int pente ) ;

        int getPeso      () ;
        int getPente     () ;
        int getPenteAtual() ;

        void dadosArmas() ;

        void setPenteAtual( int penteAtual ) ;
} ;

#endif
