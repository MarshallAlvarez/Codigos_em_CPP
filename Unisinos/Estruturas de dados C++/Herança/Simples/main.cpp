
/*
    Heranca simples - Algoritmos e estruturas de dados em C++ - Unisinos

        Crie a super classe pai Mago e classe filhos Druida , Mago cinza e Mago branco.

            Atributos da classe pai:

                - String: Nome
                - Int...: Poder , idade e escolaMagia

            Metodos da classe pai:

                - Void: andar() , falar() e invocarMagia()
*/

#include <iostream>

#include "Mago.h"
#include "Druida.h"
#include "MagoCinza.h"
#include "MagoBranco.h"

int main()
{
    Druida     *Merlin  = new Druida    () ;
    MagoCinza  *Gandolf = new MagoCinza () ;
    MagoBranco *Saruman = new MagoBranco() ;

    Merlin -> setNome       ("Merlin"     ) ;
    Merlin -> setTipo       ("Druida"     ) ;
    Merlin -> setIdade      ( 8001        ) ;
    Merlin -> setPoder      ( 8001        ) ;
    Merlin -> setEscolaMagia( 10          ) ;

    Gandolf -> setNome       ("Gandolf"    ) ;
    Gandolf -> setTipo       ("Mago cinza" ) ;
    Gandolf -> setIdade      ( 8001        ) ;
    Gandolf -> setPoder      ( 8001        ) ;
    Gandolf -> setEscolaMagia( 10          ) ;

    Saruman -> setNome       ("Saruman"    ) ;
    Saruman -> setTipo       ("Mago branco") ;
    Saruman -> setIdade      ( 8001        ) ;
    Saruman -> setPoder      ( 8001        ) ;
    Saruman -> setEscolaMagia( 10          ) ;

    std :: cout << "\n\n---------------------------------\n"
                << "\nMago........: "      << Merlin -> getNome       ()
                << "\nTipo........: "      << Merlin -> getTipo       ()
                << "\nIdade.......: + de " << Merlin -> getIdade      ()
                << "\nPoder.......: + de " << Merlin -> getPoder      ()
                << "\nEscola magia: "      << Merlin -> getEscolaMagia() ;

    Merlin -> andar       () ;
    Merlin -> falar       () ;
    Merlin -> invocarMagia() ;

    std :: cout << "\n\n---------------------------------\n"
                << "\nMago........: "      << Gandolf -> getNome       ()
                << "\nTipo........: "      << Gandolf -> getTipo       ()
                << "\nIdade.......: + de " << Gandolf -> getIdade      ()
                << "\nPoder.......: + de " << Gandolf -> getPoder      ()
                << "\nEscola magia: "      << Gandolf -> getEscolaMagia() ;

    Gandolf -> andar       () ;
    Gandolf -> falar       () ;
    Gandolf -> invocarMagia() ;

    std :: cout << "\n\n---------------------------------\n"
                << "\nMago........: "      << Saruman -> getNome       ()
                << "\nTipo........: "      << Saruman -> getTipo       ()
                << "\nIdade.......: + de " << Saruman -> getIdade      ()
                << "\nPoder.......: + de " << Saruman -> getPoder      ()
                << "\nEscola magia: "      << Saruman -> getEscolaMagia() ;

    Saruman -> andar       () ;
    Saruman -> falar       () ;
    Saruman -> invocarMagia() ;

    std :: cout << "\n\n---------------------------------\n\n" ;

    return 0 ;
}
