
#ifndef SACERDOTE_H
#define SACERDOTE_H

#include "Humano.h"

class Sacerdote : public Humano
{
    public :

        // Sacerdote da luz

            void rezar          ( Sacerdote *s ) ;
            void purificar      ( Sacerdote *s ) ;
            void projecaoAstral ( Sacerdote *s ) ;
            void armaEspiritual ( Sacerdote *s ) ;
            void removerMaldicao( Sacerdote *s ) ;

        // Sacerdote das trevas

            void reviver        ( Sacerdote *s ) ;
            void drenarVida     ( Sacerdote *s ) ;
            void toqueDaMorte   ( Sacerdote *s ) ;
            void ergam_seMortos ( Sacerdote *s ) ;
            void controlarMortos( Sacerdote *s ) ;

} ;

#endif
