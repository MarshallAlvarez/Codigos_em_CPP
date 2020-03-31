
#include "Triangulo.h"

float Triangulo :: get_lado_1() const { return this -> lado_1 ; }
float Triangulo :: get_lado_2() const { return this -> lado_2 ; }
float Triangulo :: get_lado_3() const { return this -> lado_3 ; }

void Triangulo :: set_lado_1( float lado_1 ) { this -> lado_1 = lado_1 ; }
void Triangulo :: set_lado_2( float lado_2 ) { this -> lado_1 = lado_1 ; }
void Triangulo :: set_lado_3( float lado_3 ) { this -> lado_1 = lado_1 ; }

float Triangulo :: calcular_area() const
{
    return ( get_base() * get_altura() ) / 2 ;
}

float Triangulo :: calcular_perimetro() const
{
    return get_lado_1() + get_lado_2() + get_lado_3() ;
}
