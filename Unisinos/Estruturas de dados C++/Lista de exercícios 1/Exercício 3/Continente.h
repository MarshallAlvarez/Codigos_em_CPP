
#ifndef CONTINENTE_H
#define CONTINENTE_H

#include <vector>
#include <iostream>

#include "Paises.h"

class Continente
{
    private :

        float densidade ;
        std :: vector < Paises* > vectorDePaises ;
        std :: vector < Paises* > :: iterator itP ;
        std :: string nomeC , maPoNome , mePoNome , maDiNome , meDiNome ;
        int dimensao , populacao , maPo , mePo , maDi , meDi , razaoTerritorial ;

        void privatizarVector( Continente *c , Paises *p ) ;

    public :

        void setMaPo( int maPo ) ;
        void setMePo( int mePo ) ;
        void setMaDi( int maDi ) ;
        void setMeDi( int meDi ) ;

        int getMaPo() ;
        int getMePo() ;
        int getMaDi() ;
        int getMeDi() ;

        void setMaPoNome( std :: string maPoNome ) ;
        void setMePoNome( std :: string mePoNome ) ;
        void setMaDiNome( std :: string maDiNome ) ;
        void setMeDiNome( std :: string meDiNome ) ;

        std :: string getMaPoNome() ;
        std :: string getMePoNome() ;
        std :: string getMaDiNome() ;
        std :: string getMeDiNome() ;
        std :: string getNomeC   () ;

        void setDensidade       ( float densidade      ) ;
        void setPopulacao       ( int populacao        ) ;
        void setDimensao        ( int dimensao         ) ;
        void setRazaoTerritorial( int razaoTerritorial ) ;

        int   getPopulacao       () ;
        int   getDimensao        () ;
        int   getRazaoTerritorial() ;
        float getDensidade       () ;

        Continente( std :: string nomeC ) ;

        void estatizarVector       ( Continente *c , Paises *p ) ;
        int retornaMaiorOuMenorDado( Continente *c , int i     ) ;
} ;

#endif
