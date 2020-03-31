
#include "Elipse.h"

float Elipse :: get_raio() const { return this -> raio ; }

void  Elipse :: set_raio( float raio ) { this -> raio = raio ; }

void Elipse :: set_pontos_a_b( float ponto_a , float ponto_b )
{
	this -> ponto_a = ponto_a ;
	this -> ponto_b = ponto_b ;
}

float Elipse :: get_ponto_a() const { return this -> ponto_a ; }
float Elipse :: get_ponto_b() const { return this -> ponto_b ; }

float Elipse :: calcular_area() const
{
	return 3.14 * get_raio() * get_raio() ;
}

float Elipse :: calcular_perimetro() const
{
    return ( 3 * 3.14 * ( get_ponto_a() + get_ponto_b() ) ) / 2 - ( sqrt( get_ponto_a() * get_ponto_b() ) ) ;
}
