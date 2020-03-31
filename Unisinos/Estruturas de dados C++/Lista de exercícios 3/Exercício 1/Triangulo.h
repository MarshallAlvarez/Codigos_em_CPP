
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

#include "Formas_geometricas.h"

class Triangulo : public Formas_geometricas
{
    private :

        float lado_1 ;
        float lado_2 ;
        float lado_3 ;

    public :

        float get_lado_1() const ;
        float get_lado_2() const ;
        float get_lado_3() const ;

        void set_lado_1( float lado_1 ) ;
        void set_lado_2( float lado_2 ) ;
        void set_lado_3( float lado_3 ) ;

        float calcular_area     () const ;
        float calcular_perimetro() const ;
} ;

#endif
