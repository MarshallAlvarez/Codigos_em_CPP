
#ifndef PAISES_H
#define PAISES_H

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>

class Paises
{
    private :

        std :: string  CodigoISO , nome , nomeV ;
        std :: vector < Paises* > :: iterator itPV ;
        std :: vector < Paises* > :: iterator itPV2 ;
        int numero , populacao , dimensao , contVizinhos ;
        std :: vector < Paises* > vectorDeVizinhos ;

    public :

        void setPopulacao       ( int populacao           ) ;
        void setDimensao        ( int dimensao            ) ;
        void setContVizinhos    ( int contVizinhos        ) ;
        void setNumero          ( int numero              ) ;
        void setNome            ( std :: string nome      ) ;
        void setCodigoISO       ( std :: string CodigoISO ) ;

        int getPopulacao          () ;
        int getDimensao           () ;
        int getContVizinhos       () ;
        int getNumero             () ;
        std :: string getNome     () ;
        std :: string getCodigoISO() ;

        std :: string serializarPais() ;

        void addVizinho      ( Paises* pv ) ;
        void imprimirVizinhos( Paises *p  ) ;

        bool varrerVectorVizinhos( std :: string nome ) ;

        void mandarVizinhosParaArquivo() ;
} ;

#endif
