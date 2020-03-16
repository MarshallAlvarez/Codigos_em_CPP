
#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <iostream>

class Guerreiro
{
    private :

        int HP , DP , MP , level ;
        std :: string arma , classe ;

    public :

        void setHP ( int HP ) ;
        void setDP ( int DP ) ;
        void setMP ( int MP ) ;

        int getHP() ;
        int getDP() ;
        int getMP() ;

        void setArma  ( std :: string arma   ) ;
        void setClasse( std :: string classe ) ;

        std :: string getArma  () ;
        std :: string getClasse() ;

        void afiarEspada() ;
        void lutar      () ;
        void treinar    () ;
        void beber      () ;
        void dormir     () ;
} ;

#endif
