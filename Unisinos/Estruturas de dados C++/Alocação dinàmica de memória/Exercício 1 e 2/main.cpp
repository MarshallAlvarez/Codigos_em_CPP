
/*
    Alocação dinâmica de memória - Algoritmos e estruturas de dados em C++ - Unisinos

        Linha 58 , exercício 1.Leia 2 ints e some-os com ponteiros.
        Linha 70 , exercício 2.Leia um array int de tamanho opcional , imprima o array na ordem direta ou inversa , use ponteiros.
*/

// Bibliotecas usadas:

    #include <iostream>

// Funções usadas:

    float funcao_exercicio_1( int *p1 , int *p2 ) { return *p1 + *p2 ; }

    void funcao_exercicio_2( int opcao , int *pt , int *pA )
    {
        switch ( opcao )
        {
            case 1 :

                for ( int i = 0 ; i < *pt ; i++ )
                {
                    std :: cout << "\nA[ " << i << " ]: " << pA[ i ] ;
                }
            break ;

            case 2 :

                for ( int i = *pt - 1 ; i >= 0 ; i-- )
                {
                    std :: cout << "\nA[ " << i << " ]: " << pA[ i ] ;
                }
            break ;

            default :

                std :: cout << "\n  ==============="
                            << "\n\nOpcao invalida."
                            << "\n\n===============\n" ;
        }
        std :: cout << std :: endl ;
    }

    void funcao_liberar_memoria( int *p1 , int *p2 , int *pt , int *pA )
    {
        delete p1 ; delete p2 ; delete pt ;

        delete[ ]pA ;
    }

int main()
{
    int n1 , *p1 = &n1 ;
    int n2 , *p2 = &n2 ;

    // Exercício 1

    std :: cout << "\n\n=============================="
                << "\n\nExercicio 1.Informe 2 numeros."
                << "\n\n==============================\n\n"
                << "Numero 1: " ; std :: cin >> n1 ; fflush( stdin ) ;
    std :: cout << "Numero 2: " ; std :: cin >> n2 ; fflush( stdin ) ;

    std :: cout << std :: endl << *p1 << " + " << *p2 << " = " << funcao_exercicio_1( p1 , p2 ) << "\n\n" ;

    system("pause") ; system("cls") ;

    // Exercício 2

    int t , *pt = &t , opcao ;

    std :: cout << "\n\n========================================================"

                << "\n\nExercicio 2.Informe o tamanho para um array de inteiros."

                << "\n\n========================================================\n\n"

                << "Tamanho: " ; std :: cin >> t ; fflush( stdin ) ;

    std :: cout << std :: endl ;

    int *A = ( int* ) calloc( t , sizeof( int ) ) , *pA = A ;

    for ( int i = 0 ; i < t ; i++ )
    {
        std :: cout << "Informe o valor da posicao " << i << " do array A: " ;
        std :: cin >> A[ i ] ;
    }

    std :: cout << "\n==================================\n"

                << "\n1.Imprimir array na forma direta. "
                << "\n2.Imprimir array na forma reversa."

                << "\n\n==================================\n\n"

                << "Opcao escolhida: " ; std :: cin >> opcao ; fflush( stdin ) ;

    funcao_exercicio_2( opcao , pt , pA ) ;

    funcao_liberar_memoria( p1 , p2 , pt , pA ) ;

    return 0 ;
}
