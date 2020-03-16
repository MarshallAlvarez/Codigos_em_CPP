
/*
    Lista de exercicios 1 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercicio 3.Crie a classe Continente.

            Atributos:

                - Nome              ( ex: Brasil        )
                - Populacao         ( ex: 198.7m        )
                - Dimensao , em Km2 ( ex: 8.515.767.049 )
                - Densidade         ( ex: 23.8/Km2      )
                - Lista de paises em seu territorio.

            Metodos:

                - Construtor do continente , instancia com apenas o nome.
                - Adicionar paises.
                - Setters e getters.

                - Imprimir o pais com a maior populacao.
                - Imprimir o pais com a menor populacao.

                - Imprimir o pais com a maior dimensao.
                - Imprimir o pais com a menor dimensao.

                - Imprimir a razao territorial entre o maior e o menor pais.
*/

// Bibliotecas e classes usadas no codigo:

    #include <vector>
    #include <iostream>

    #include "Paises.h"
    #include "Planeta.h"
    #include "Continente.h"

// Variaveis globais usadas no codigo:

    int populacao , dimensao ;
    std :: string  nome , nomeC ;

// Funcoes usadas no codigo:

    int menu()              ;
    void funcaoOpcao1Menu() ;
    void funcaoOpcao2Menu() ;
    void funcaoOpcao3Menu() ;
    void funcaoOpcao4Menu() ;

// Obj Planeta Terra:

    Planeta *Terra = new Planeta() ;

int main()
{
    menu() ; return 0 ;
}

// Funcao menu:

int menu()
{
    int opcao ;

    while ( 1 )
    {
        std :: cout << "\n\n---------------Menu--------------------"
                    << "\n\n1.Criar 1 continente."
                    << "\n2.Add 1 pais a 1 continente."
                    << "\n3.Imprimir dados de todos os continentes."
                    << "\n4.Sair do programa."
                    << "\n\n---------------------------------------"
                    << "\n\nOpcao escolhida: " ;
        std :: cin >> opcao ; fflush ( stdin ) ; system("cls") ;

        switch ( opcao )
        {
            case 1  : funcaoOpcao1Menu() ;            break ;
            case 2  : funcaoOpcao2Menu() ;            break ;
            case 3  : funcaoOpcao3Menu() ;            break ;
            case 4  : funcaoOpcao4Menu() ; return 0 ; break ;

            default : std :: cout << "\n\n---------------------------"
                                  << "\n\nOpcao digitada eh invalida."
                                  << "\nVoltado ao menu."
                                  << "\n\n---------------------------\n\n" ;

            system("pause") ; system("cls") ;
        }
    }
}

// Funcao opcao 1 menu:

void funcaoOpcao1Menu()
{
    std :: cout << "\n\n-----------------------------"
                << "\n\nInforme o nome do continente."
                << "\n\n-----------------------------\n\nNome: " ;
    getline( std :: cin , nomeC ) ; fflush ( stdin ) ; system( "cls" ) ;

    if ( Terra -> continenteExiste( nomeC ) )
    {
        std :: cout << "\n\n----------------------------------------"
                    << "\n\nO continente " << nomeC << " ja existe."
                    << "\n\n----------------------------------------\n\n" ;

        system("pause") ;
        system("cls"  ) ;
    }
    else
    {
        std :: cout << "\n\n-------------------------------------"
                    << "\n\nInforme as dimensoes do continente."
                    << "\n\n-----------------------------------\n\nDimensoes: " ;
        std :: cin >> dimensao ; fflush ( stdin ) ; system( "cls" ) ;

        Continente *c = new Continente( nomeC ) ;

        c -> setPopulacao( 0        ) ;
        c -> setDensidade( 0        ) ;
        c -> setDimensao ( dimensao ) ;
        c -> setMaDi     ( 0        ) ;
        c -> setMeDi     ( 0        ) ;
        c -> setMaPo     ( 0        ) ;
        c -> setMePo     ( 0        ) ;

        Terra -> addContinenteNoVector( c ) ;

        std :: cout << "\n\n-----------------------------------------"
                    << "\n\nO continente " << c -> getNomeC() << " foi criado. "
                    << "\n\n-----------------------------------------\n\n" ;

        system("pause") ;
        system("cls"  ) ;
    }
}

// Funcao opcao 2 menu:

void funcaoOpcao2Menu()
{
    std :: cout << "\n\n-----------------------------"
                << "\n\nInforme o nome do continente."
                << "\n\n-----------------------------\n\nNome: " ;
    getline( std :: cin , nomeC ) ; fflush ( stdin ) ; system( "cls" ) ;

    if ( Terra -> continenteExiste( nomeC ) == false )
    {
        std :: cout << "\n\n-----------------------------------------------"
                    << "\n\nO continente " << nomeC << " ja ou nao existe."
                    << "\n\n-----------------------------------------------\n\n" ;

        system("pause") ;
        system("cls"  ) ;
    }
    else
    {
        std :: cout << "\n\n-----------------------"
                    << "\n\nInforme o nome do pais."
                    << "\n\n-----------------------\n\nNome: " ;
        getline( std :: cin , nome ) ; fflush ( stdin ) ; system( "cls" ) ;

        std :: cout << "\n\n----------------------------------"
                    << "\n\nInforme a populacao total do pais."
                    << "\n\n----------------------------------\n\nPopulacao: " ;
        std :: cin >> populacao ; fflush ( stdin ) ; system( "cls" ) ;

        std :: cout << "\n\n-----------------------------"
                    << "\n\nInforme as dimensoes do pais."
                    << "\n\n-----------------------------\n\nDimensoes: " ;
        std :: cin >> dimensao ; fflush ( stdin ) ; system( "cls" ) ;

        Paises *p = new Paises() ;

        p -> setNome     ( nome      ) ;
        p -> setPopulacao( populacao ) ;
        p -> setDimensao ( dimensao  ) ;

        Terra -> addPaisNoVector ( p         , nomeC ) ;
        Terra -> aumentaPopulacao( populacao , nomeC ) ;
        Terra -> aumentaDensidade(             nomeC ) ;

        std :: cout << "\n\n---------------------------------------------------------"
                    << "\n\nO pais " << p -> getNome() << " foi adicionado a " << nomeC
                    << "\n\n---------------------------------------------------------\n\n" ;

        system("pause") ;
        system("cls"  ) ;
    }
}

// Funcao opcao 3 menu:

void funcaoOpcao3Menu()
{
    Terra -> imprimirDados() ;
}

// Funcao opcao 4 menu:

void funcaoOpcao4Menu()
{
    std :: cout << "\n\n----------------------"
                << "\n\nVoce saiu do programa."
                << "\n\n----------------------\n\n" ;
}
