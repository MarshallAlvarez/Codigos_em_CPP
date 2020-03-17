
#ifndef BARDO_H
#define BARDO_H

#include "Humano.h"

class Bardo : public Humano
{
    public :

        void tocar      ( Bardo *b ) ;
        void cantar     ( Bardo *b ) ;
        void seduzir    ( Bardo *b ) ;
        void acharMagia ( Bardo *b ) ;
        void seDisfarcar( Bardo *b ) ;
} ;

#endif
