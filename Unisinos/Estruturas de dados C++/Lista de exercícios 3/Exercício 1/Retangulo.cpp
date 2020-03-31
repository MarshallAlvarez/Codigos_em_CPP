
#include "Retangulo.h"

float Retangulo :: calcular_area() const
{
    return get_base() * get_altura() ;
}

float Retangulo :: calcular_perimetro() const
{
    return get_base() * 2 + get_altura() * 2 ;
}
