
#ifndef LADINO_H
#define LADINO_H

#include "Humano.h"

class Ladino : public Humano
{
    public :

        void assltar    ( Ladino *l ) ;
        void acrobacia  ( Ladino *l ) ;
        void investigar ( Ladino *l ) ;
        void assassinar ( Ladino *l ) ;
        void seDispersar( Ladino *l ) ;
} ;

#endif
