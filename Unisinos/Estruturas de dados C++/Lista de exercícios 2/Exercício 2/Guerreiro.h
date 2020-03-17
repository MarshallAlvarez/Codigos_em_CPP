
#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Humano.h"

class Guerreiro : public Humano
{
    public :

        // Guerreiro

            void lutar    ( Guerreiro *l ) ;
            void beber    ( Guerreiro *l ) ;
            void morrer   ( Guerreiro *l ) ;
            void treinar  ( Guerreiro *l ) ;
            void afiarArma( Guerreiro *l ) ;

        // Paladino

            void rezar      ( Guerreiro *s ) ;
            void heroismo   ( Guerreiro *s ) ;
            void vitalidade ( Guerreiro *s ) ;
            void auraDaVida ( Guerreiro *s ) ;
            void favorDivino( Guerreiro *s ) ;

        // Barbaro

            void furia         ( Guerreiro *b ) ;
            void matar         ( Guerreiro *b ) ;
            void reviver       ( Guerreiro *b ) ;
            void retaliar      ( Guerreiro *b ) ;
            void instintoPrimal( Guerreiro *b ) ;
} ;

#endif
