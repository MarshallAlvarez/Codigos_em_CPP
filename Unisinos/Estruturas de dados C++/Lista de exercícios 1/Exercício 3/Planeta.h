
#ifndef PLANETA_H
#define PLANETA_H

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

#include "Continente.h"

class Planeta
{
    private :

        std :: vector < Continente* > :: iterator itC ;
        std :: vector < Continente* > vectorDeContinentes ;

    public :

        bool continenteExiste( std :: string nome ) ;

        void imprimirDados        (                                     ) ;
        void addContinenteNoVector( Continente *c                       ) ;
        void aumentaDensidade     (                 std :: string nomeC ) ;
        void addPaisNoVector      ( Paises *p     , std :: string nomeC ) ;
        void aumentaPopulacao     ( int populacao , std :: string nomeC ) ;
} ;

#endif
