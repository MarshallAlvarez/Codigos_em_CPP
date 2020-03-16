#ifndef JOGADOR_H
#define JOGADOR_H

#include <vector>
#include <iostream>

#include "Cura.h"
#include "Armas.h"
#include "Municao.h"
#include "Armaduras.h"

class Jogador
{
    private :

        std :: string nome ;
        int HP , colete , armaAtual ;

        std :: vector < Cura* > curaNaMochila ;
        std :: vector < Cura* > :: iterator itCura ;

        std :: vector < Armas* > armasNaMochila ;
        std :: vector < Armas* > :: iterator itArmas ;

        std :: vector < Municao* > municaoNaMochila ;
        std :: vector < Municao* > :: iterator itMunicao ;

        std :: vector < Armaduras* > armadurasNaMochila ;
        std :: vector < Armaduras* > :: iterator itArmaduras ;

    public :

        Jogador( std :: string nome , int HP , int colete , int armaAtual ) ;

        void setHP       ( int hp        ) ;
        void setColete   ( int colete    ) ;
        void setArmaAtual( int armaAtual ) ;

        int getHP       () ;
        int getColete   () ;
        int getArmaAtual() ;

        std :: string getNome() ;

        void atirar             ( Jogador *j ) ;
        void recarregar         ( Jogador *j ) ;
        void armaNasMaos        ( Jogador *j ) ;
        void porColete          ( Jogador *j ) ;
        void escolherArma       ( Jogador *j ) ;
        void escolherComoSeCurar( Jogador *j ) ;

        void addCura    ( Cura      *c ) ;
        void addArma    ( Armas     *a ) ;
        void addMunicao ( Municao   *m ) ;
        void addArmadura( Armaduras *a ) ;
} ;

#endif
