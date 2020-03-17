
#ifndef RANGER_H
#define RANGER_H

#include "Humano.h"

class Ranger : public Humano
{
    public :

        void cacar       ( Ranger *r ) ;
        void mirar       ( Ranger *r ) ;
        void atirar      ( Ranger *r ) ;
        void recarregar  ( Ranger *r ) ;
        void porArmadilha( Ranger *r ) ;
} ;

#endif
