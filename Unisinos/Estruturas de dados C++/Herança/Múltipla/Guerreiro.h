
#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <iostream>

class Guerreiro
{
    private :

        std :: string nome , tipo ;
        int forca , idade , tipoAtaque ;

    public :

        void setForca     ( int forca          ) ;
        void setIdade     ( int idade          ) ;
        void setTipoAtaque( int tipoAtaque     ) ;
        void setNome      ( std :: string nome ) ;

        int getForca         () ;
        int getIdade         () ;
        int getTipoAtaque    () ;
        std :: string getNome() ;

        void andar () ;
        void atacar() ;
} ;

#endif
