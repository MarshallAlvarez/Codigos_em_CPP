
#ifndef MAGO_H
#define MAGO_H

#include <iostream>

class Mago
{
    private :

        std :: string nome , tipo ;
        int poder , idade , escolaMagia ;

    public :

        void setPoder      ( int poder          ) ;
        void setIdade      ( int idade          ) ;
        void setEscolaMagia( int escolaMagia    ) ;
        void setNome       ( std :: string nome ) ;
        void setTipo       ( std :: string tipo ) ;

        int getPoder         () ;
        int getIdade         () ;
        int getEscolaMagia   () ;
        std :: string getNome() ;
        std :: string getTipo() ;

        void andar() ;
        void falar() ;
        void invocarMagia() ;
} ;

#endif
