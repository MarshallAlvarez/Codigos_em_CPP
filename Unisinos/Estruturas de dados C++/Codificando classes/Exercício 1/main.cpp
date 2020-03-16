
/*
    Codificando classes em C++ - Exercicio 1 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercicio 1.Crie a Calculadora.

            Atributos:

                - Operador char.
                - Numero 1 e numero 2 , ambos float.

            Metodos:

                - Somar.
                - Móoulo.
                - Dividir.
                - Subtrair.
                - Multiplicar.
*/

// Bibliotecas e classes usadas:

    #include <iostream>

    #include "Calculadora.h"

// Variaveis globais usadas:

    char op ;
    float n1 , n2 ;

// Funcoes usadas:

void opcao1Menu()
{
    std :: cout << "\n\n--------------------------------------------------"
                << "\n\nO programa suporta os seguintes tipos de calculos: "
                << "\n\n--------------------------------------------------"
                << "\n\nAdicao."
                << "\n\nModulo."
                << "\n\nDivisao."
                << "\n\nSubtracao."
                << "\n\nMultiplicacao."
                << "\n\n--------------------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}

void opcao2Menu()
{
    std :: cout << "\n\n--------------------------------------------------"
                << "\n\nInforme um operador disponivel entre os 2 numeros."
                << "\n\n--------------------------------------------------\n\nConta: " ;

    std :: cin >> n1 >> op >> n2 ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;
}

void opcao3Menu()
{
    Calculadora *c = new Calculadora( n1 , op , n2 ) ;
}

void opcao4Menu()
{
    std :: cout << "\n\n----------------------"
                << "\n\nVoce saiu do programa."
                << "\n\n----------------------" ;
}

int menu()
{
    int i ;

    while ( 1 )
    {
        std :: cout << "\n\n----------Menu----------\n"
                    << "\n1.Operacoes suportadas."
                    << "\n2.Receber calculo."
                    << "\n3.Imprimir resultado."
                    << "\n4.Sair."
                    << "\n\n------------------------\n\nOpcao escolhida: " ;

        std :: cin >> i ; fflush( stdin ) ;

        std :: cout << "\n\n" ;

        system("pause") ; system("cls") ;

        switch( i )
        {
            case 1 : opcao1Menu() ;            break ;
            case 2 : opcao2Menu() ;            break ;
            case 3 : opcao3Menu() ;            break ;
            case 4 : opcao4Menu() ; return 0 ; break ;
            default :
                std :: cout << "\n\n---------------"
                            << "\n\nOpcao invalida."
                            << "\n\n---------------\n\n" ;
                system("pause") ; system("cls") ;
        }
    }
}

int main() { menu() ; return 0 ; }
