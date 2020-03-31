
#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

#include "Formas_geometricas.h"

class Retangulo : public Formas_geometricas
{
    public :

        float calcular_area     () const ;
        float calcular_perimetro() const ;
} ;

#endif
