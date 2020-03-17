
#ifndef MAGO_H
#define MAGO_H

#include "Humano.h"

class Mago : public Humano
{
    public :

        // Mago

            void trovoada     ( Mago *m ) ;
            void chuvaAcida   ( Mago *m ) ;
            void raioDeGelo   ( Mago *m ) ;
            void bolaDeFogo   ( Mago *m ) ;
            void rajadaDeVento( Mago *m ) ;

        // Clerigo

            void rezar    ( Mago *c ) ;
            void curar    ( Mago *c ) ;
            void reviver  ( Mago *c ) ;
            void exorcizar( Mago *c ) ;
            void regenerar( Mago *c ) ;
} ;

#endif
