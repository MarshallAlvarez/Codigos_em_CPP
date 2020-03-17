#ifndef HUMANO_H
#define HUMANO_H

#include <vector>
#include <iostream>

class Humano
{
    private :

        int HP , DP , MP , level ;
        std :: string arma , classe , nome ;
        std :: vector < Humano* > listaDeJogadores ;
        std :: vector < Humano* > :: iterator it ;

    public :

        void setHP( int HP ) ;
        void setDP( int DP ) ;
        void setMP( int MP ) ;

        void setLevel( int level ) ;

        void setNome  ( std :: string nome   ) ;
        void setArma  ( std :: string arma   ) ;
        void setClasse( std :: string classe ) ;

        int getHP() ;
        int getDP() ;
        int getMP() ;

        int getLevel() ;

        std :: string getNome  () ;
        std :: string getArma  () ;
        std :: string getClasse() ;

        void settar() ;

        void imprimeDados() ;

        void addJogador( Humano *h ) ;
} ;

#endif
