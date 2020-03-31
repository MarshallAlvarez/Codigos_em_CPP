
#ifndef ELIPSE_H
#define ELIPSE_H

#include <cmath>
#include <iostream>

#include "Formas_geometricas.h"

class Elipse : public Formas_geometricas
{
    private :

        float raio ;

        float ponto_a ;
        float ponto_b ;

    public :

        float get_raio   () const ;
        float get_ponto_a() const ;
        float get_ponto_b() const ;

        void set_raio( float raio ) ;

        float calcular_area     () const ;
        float calcular_perimetro() const ;

        void set_pontos_a_b( float ponto_a , float ponto_b ) ;
} ;

#endif
