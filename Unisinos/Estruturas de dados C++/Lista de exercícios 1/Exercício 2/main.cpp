
/*
    Lista de exercicios 1 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercicio 2.Crie a classe Paises.

            Atributos:

                - Codigo ISO 3166-1 ( ex: BRA           )
                - Nome              ( ex: Brasil        )
                - Populacao         ( ex: 198.7m        )
                - Dimensao , em Km2 ( ex: 8.515.767.049 )
                - Lista de paises ao qual ele faz fronteira.

            Metodos:

                1 - Criar 1 pais , deve ver tambem se o pais ja nao foi criado.

                2 - Imprimir dados do pais informado atraves do seu codigo ISO 3166-1 , exceto sua lista de vizinhos.

                3 - Imprimir todos os dados de todos os paises que estao no arquivo.txt desta forma:

                    NR( Numero )    \t  Pais( Codigo )  \t  Nome    \t  Populacao   \t  Dimensao    \t  NR de vizinhos  \t  Vizinho 1   \t  Vizinho 2   \t  Vizinho 3...

                4 - Salvar as informacoes de todos os paises num arquivo.txt.

                5 - Informar se 2 paises fazem fronteira.

                6 - Imprimir uma lista com paises vizinhos em comuns entre dois paises diferentes.

                7 - Getters e setters.
*/

// Bibliotecas e classes usadas no codigo:

    #include "Paises.h"
    #include "Planeta.h"

    #include <vector>
    #include <string>
    #include <sstream>
    #include <fstream>
    #include <iostream>

// Variaveis globais usadas no codigo:

    std :: string CodigoISO , nome , nome2 ;
    int i , numero = 0 , populacao , dimensao , contVizinhos ;

// Funcoes usadas no codigo:

    int menu()              ;
    void funcaoOpcao1Menu() ;
    void funcaoOpcao2Menu() ;
    void funcaoOpcao3Menu() ;
    void funcaoOpcao4Menu() ;
    void funcaoOpcao5Menu() ;
    void funcaoOpcao6Menu() ;
    void funcaoOpcao7Menu() ;

// Obj para chamar metodos:

    Planeta *Terra = new Planeta() ;

int main()
{
    menu() ;

    return 0 ;
}

// Funcao menu:

int menu()
{
    int opcao ;

    while ( 1 )
    {
        std :: cout << "\n\n------------------------Menu------------------------"
                    << "\n\n1.Criar um novo pais."
                    << "\n2.Imprimir dados dum pais."
                    << "\n3.Imprimir dados de todos os paises."
                    << "\n4.Salvar paises."
                    << "\n5.Verificar fronteiras de 2 paises."
                    << "\n6.Imprimir paises vizinhos em comum entre 2 paises."
                    << "\n7.Sair do programa."
                    << "\n\n----------------------------------------------------"
                    << "\n\nOpcao escolhida: " ;
        std :: cin >> opcao ; fflush ( stdin ) ; system("cls") ;

        switch ( opcao )
        {
            case 1  : funcaoOpcao1Menu() ;            break ;
            case 2  : funcaoOpcao2Menu() ;            break ;
            case 3  : funcaoOpcao3Menu() ;            break ;
            case 4  : funcaoOpcao4Menu() ;            break ;
            case 5  : funcaoOpcao5Menu() ;            break ;
            case 6  : funcaoOpcao6Menu() ;            break ;
            case 7  : funcaoOpcao7Menu() ; return 0 ; break ;

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
    std :: cout << "\n\n----------------------------------------------"
                << "\n\nInforme o Codigo ISO 3166-1 do pais , ex: BRA."
                << "\n\n----------------------------------------------\n\nCodigo: " ;
    std :: cin >> CodigoISO ; fflush ( stdin ) ; system( "cls" ) ;

    std :: cout << "\n\n-----------------------"
                << "\n\nInforme o nome do pais."
                << "\n\n-----------------------\n\nNome: " ;
    getline( std :: cin , nome ) ; fflush ( stdin ) ; system( "cls" ) ;

    if ( Terra -> veSePaisExiste( nome ) )
    {
        std :: cout << "\n\n--------------------------------------------"
                    << "\n\nO pais " << nome << " ja esta na lista de paises."
                    << "\n\n--------------------------------------------" ;

        system("pause") ;
        system("cls"  ) ;
    }
    else
    {
        std :: cout << "\n----------------------------------"
                    << "\n\nInforme a populacao total do pais."
                    << "\n\n----------------------------------\n\nPopulacao: " ;
        std :: cin >> populacao ; fflush ( stdin ) ; system( "cls" ) ;

        std :: cout << "\n-----------------------------"
                    << "\n\nInforme as dimensoes do pais."
                    << "\n\n-----------------------------\n\nDimensoes: " ;
        std :: cin >> dimensao ; fflush ( stdin ) ; system( "cls" ) ;

        std :: cout << "\n---------------------------------"
                    << "\n\nInforme quantos paises " << nome << " faz fronteira."
                    << "\n\n---------------------------------\n\nQuantidade: " ;
        std :: cin >> contVizinhos ; fflush ( stdin ) ; system( "cls" ) ;

        Paises *p = new Paises() ;

        p -> setCodigoISO       ( CodigoISO    ) ;
        p -> setNome            ( nome         ) ;
        p -> setPopulacao       ( populacao    ) ;
        p -> setDimensao        ( dimensao     ) ;
        p -> setContVizinhos    ( contVizinhos ) ;
        p -> setNumero          ( numero + 1   ) ;

        Terra -> addPaisNoVector( p ) ;

        std :: cout << "\n\n--------------------------------------------------------------------------------"
                    << "\n\nO pais " << p -> getNome() << " foi criado , informe o nome de seus vizinhos ou volte ao menu. "
                    << "\n\n--------------------------------------------------------------------------------\n\n" ;

        numero++ ;

        system("pause") ;
        system("cls"  ) ;

        for ( i = 0 ; i < p -> getContVizinhos() ; i++ )
        {
            std :: cout << "\n\n---------------------------------------------------"
                        << "\n\nInforme o nome do pais vizinho numero " << i + 1 << " de " << p -> getNome() << "."
                        << "\n\n---------------------------------------------------\n\nNome: " ;
            getline ( std :: cin , nome ) ; fflush ( stdin ) ;

            Paises *pv = new Paises() ;

            pv -> setNome( nome ) ;

            system("cls") ;

            std :: cout << "\n\n-------------------------------------------------------------------\n\n"
                        << pv -> getNome() << " foi adicionado a lista de paises vizinhos de " << p -> getNome()
                        << ".\n\n-------------------------------------------------------------------\n\n" ;

            p -> addVizinho( pv ) ;

            system("pause") ;
            system("cls"  ) ;
        }
    }
}

// Funcao opcao 2 menu:

void funcaoOpcao2Menu()
{
    std :: cout << "\n\n------------------------------------"
                << "\n\nInforme o codigo ISO 3166-1 do pais."
                << "\n\n------------------------------------\n\nPais: " ;
    std :: cin >> CodigoISO ; fflush ( stdin ) ;

    system("cls") ;

    Terra -> imprimirDados( CodigoISO ) ;
}

// Funcao opcao 3 menu:

void funcaoOpcao3Menu()
{
    Terra -> lerArquivo() ;
}

// Funcao opcao 4 menu:

void funcaoOpcao4Menu()
{
    Terra -> salvaDados() ;

    std :: cout << "\n\n----------------------------------------------------------------------------"
                << "\n\nOs dados de todos os paises foram salvos num arquivo.txt na pasta do codigo."
                << "\n\n----------------------------------------------------------------------------\n\n" ;

    system("pause") ;
    system("cls"  ) ;
}

// Funcao opcao 5 menu:

void funcaoOpcao5Menu()
{
    std :: cout << "\n\n----------------------------"
                << "\n\nInforme o nome dos 2 paises."
                << "\n\n----------------------------\n\nPais 1: " ;
    getline( std :: cin , nome  ) ; fflush ( stdin ) ;

    std :: cout << "Pais 2: " ;
    getline( std :: cin , nome2 ) ; fflush ( stdin ) ;

    std :: cout << "\n----------------------------\n\n" ;

    system("pause") ;
    system("cls"  ) ;

    if ( Terra -> fazemFronteira( nome , nome2 ) )
    {
         std :: cout << "\n\n----------------------------------------------"
                     << "\n\nO pais " << nome << " faz fronteira com " << nome2
                     << ".\n\n----------------------------------------------\n\n" ;
    }
    else
    {
        std :: cout << "\n\n--------------------------------------------------"
                    << "\n\nO pais " << nome << " nao faz fronteira com " << nome2
                    << ".\n\n--------------------------------------------------\n\n" ;
    }
    system("pause") ;
    system("cls"  ) ;
}

// Funcao opcao 6 menu:

void funcaoOpcao6Menu()
{
    std :: cout << "\n\n----------------------------"
                << "\n\nInforme o nome dos 2 paises."
                << "\n\n----------------------------\n\nPais 1: " ;
    getline( std :: cin , nome  ) ; fflush ( stdin ) ;

    std :: cout << "Pais 2: " ;
    getline( std :: cin , nome2 ) ; fflush ( stdin ) ;

    std :: cout << "\n----------------------------\n\n" ;

    system("pause") ;
    system("cls"  ) ;

    Terra -> vizinhosEmComum( nome , nome2 ) ;

    system("pause") ;
    system("cls"  ) ;
}

// Funcao opcao 7 menu:

void funcaoOpcao7Menu()
{
    std :: cout << "\n\n----------------------"
                << "\n\nVoce saiu do programa."
                << "\n\n----------------------\n\n" ;
}
