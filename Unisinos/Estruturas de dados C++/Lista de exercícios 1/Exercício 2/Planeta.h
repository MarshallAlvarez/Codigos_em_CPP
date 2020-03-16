
#ifndef PLANETA_H
#define PLANETA_H

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>

#include "Paises.h"

class Planeta
{
    private :

        std :: string CodigoISO ;
        std :: vector < Paises* > vectorDePaises ;
        std :: vector < Paises* > :: iterator itP ;
        std :: vector < Paises* > :: iterator itP2 ;
        std :: vector < Paises* > :: iterator itPV ;

    public :

        void lerArquivo() ;
        void salvaDados() ;

        void addPaisNoVector ( Paises* p ) ;

        bool veSePaisExiste( std :: string nome      ) ;
        void imprimirDados ( std :: string CodigoISO ) ;

        bool fazemFronteira( std :: string nome , std :: string nome2 ) ;

        void vizinhosEmComum( std :: string nome , std :: string nome2 ) ;
} ;

#endif
