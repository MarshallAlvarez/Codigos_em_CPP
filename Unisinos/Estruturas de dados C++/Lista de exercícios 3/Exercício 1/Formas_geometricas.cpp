
#include "Formas_geometricas.h"

std :: string Formas_geometricas :: get_tipo() { return this -> tipo ; }

float Formas_geometricas :: get_base  () const { return this -> base   ; }
float Formas_geometricas :: get_altura() const { return this -> altura ; }

void Formas_geometricas :: set_base_e_altura( float base , float altura )
{
	this -> base    = base   ;
	this -> altura  = altura ;
}

void Formas_geometricas :: imprimir_dados()
{
    std :: cout <<   "Forma geometrica: " << get_tipo          ()
                << "\nPerimetro.......: " << calcular_perimetro()
                << "\nArea............: " << calcular_area     () << "\n\n" ;
}

void Formas_geometricas :: set_tipo( std :: string tipo ) { this -> tipo = tipo ; }
