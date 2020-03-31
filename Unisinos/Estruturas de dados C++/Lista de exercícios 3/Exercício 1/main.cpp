
/*
    Lista de exercícios 3 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercício 1.Crie uma classe com dados de formas geométricas , imprima as informações dessas formas diferentes , sem informar qual forma eh.

            Formas suportadas:

                - Elipse
                - Retângulo
                - Triângulo

        Crie métodos para cálcular a área , perímetro e imprimir dados.
*/

#include <iostream>

#include "Elipse.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Formas_geometricas.h"

int main()
{
    Elipse    *E = new Elipse   () ;
	Retangulo *R = new Retangulo() ;
	Triangulo *T = new Triangulo() ;

	E -> set_tipo( "Elipse"    ) ;
	R -> set_tipo( "Retangulo" ) ;
	T -> set_tipo( "Triangulo" ) ;

	T -> set_lado_1( 3 ) ;
	T -> set_lado_2( 3 ) ;
	T -> set_lado_3( 3 ) ;

	E -> set_raio      ( 1     ) ;
	E -> set_pontos_a_b( 1 , 1 ) ;

	R -> set_base_e_altura( 2 , 2 ) ;
	T -> set_base_e_altura( 3 , 3 ) ;

	std :: cout << "\n\n" ;

    E -> imprimir_dados() ;
	R -> imprimir_dados() ;
	T -> imprimir_dados() ;

    return 0 ;
}
