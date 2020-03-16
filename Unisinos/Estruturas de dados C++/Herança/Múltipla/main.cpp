
/*
    Heranca multipla - Algoritmos e estruturas de dados em C++ - Unisinos

        Crie 2 super classe Mago e Guerreiro e uma classe filha Mago guerreiro.

            Atributos da classe Mago:

                - String: Nome
                - Int...: Poder , idade e escolaMagia

            Atributos da classe Guerreiro:

                - String: Nome
                - Int...: forca , idade e tipoAtaque

            Metodos da classe Mago:

                - Void: andar() , falar() e invocarMagia()

            Metodos da classe Guerreiro:

                - Void: andar() e atacar()
*/

#include <iostream>

#include "Mago.h"
#include "Guerreiro.h"
#include "MagoGuerreiro.h"

int main()
{
    MagoGuerreiro *Geraldo = new MagoGuerreiro() ;

    Geraldo -> Mago :: setNome       ("Geraldo"       ) ;
    Geraldo -> Mago :: setTipo       ("Mago-guerreiro") ;
    Geraldo -> Mago :: setIdade      ( 100            ) ;
    Geraldo -> Mago :: setPoder      ( 1000           ) ;
    Geraldo -> Mago :: setEscolaMagia( 10             ) ;

    Geraldo -> Guerreiro :: setNome       ("Geraldo") ;
    Geraldo -> Guerreiro :: setForca      ( 1000    ) ;
    Geraldo -> Guerreiro :: setTipoAtaque ( 10      ) ;

    std :: cout << "\n\n-------------------------------------------\n"
                << "\nMago..........: "      << Geraldo -> Mago      :: getNome       ()
                << "\nTipo..........: "      << Geraldo -> Mago      :: getTipo       ()
                << "\nIdade.........: + de " << Geraldo -> Mago      :: getIdade      ()
                << "\nPoder.........: "      << Geraldo -> Mago      :: getPoder      ()
                << "\nForca.........: "     << Geraldo -> Guerreiro :: getForca      ()
                << "\nEscola magia..: "      << Geraldo -> Mago      :: getEscolaMagia()
                << "\nTipo de ataque: "      << Geraldo -> Guerreiro :: getTipoAtaque () ;

    Geraldo -> Mago      :: andar       () ;
    Geraldo -> Mago      :: falar       () ;
    Geraldo -> Guerreiro :: atacar      () ;
    Geraldo -> Mago      :: invocarMagia() ;

    std :: cout << "\n\n-------------------------------------------\n\n" ;

    return 0 ;
}
