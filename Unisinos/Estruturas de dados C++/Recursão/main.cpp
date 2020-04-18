
/*
    Recursão - Algoritmos e estruturas de dados em C++ - Unisinos

        Linha 104: Questão 1.Use recursão pra inverter uma palavra.
        Linha 112: Questão 2.Use recursão pra ver se uma palavra é palíndroma.
        Linha 148: Questão 3.Use recursão pra achar o fatorial dum int.
        Linha 156: Questão 4.Use recursão pra imprimir o somatório dum array de ints.
        Linha 166: Questão 5.Use recursão pra achar o MDC de 2 ints.

        Linha função questão 1: 27
        Linha função questão 2: 43
        Linha função questão 3: 64
        Linha função questão 4: 78
        Linha função questão 5: 93
*/

////////////////////////
//                    //
// Bibliotecas usadas //
//                    //
////////////////////////

    #include <cstring>
    #include <iostream>

/////////////////////////
//                     //
// Função da questão 1 //
//                     //
/////////////////////////

void funcao_exercicio_1( std :: string palavra , int i )
{
    if ( i >= 0 )
    {
        std :: cout << palavra[ i-- ] ;

        return funcao_exercicio_1( palavra , i ) ;
    }
}

/////////////////////////
//                     //
// Função da questão 2 //
//                     //
/////////////////////////

bool funcao_exercicio_2( std :: string palavra , int t , int i )
{
    if ( i < t )
    {
        if ( palavra[ i ] != palavra[ t - i - 1 ] )
        {
            return false ;
        }
        else
        {
            return funcao_exercicio_2( palavra , t , i + 1 ) ;
        }
    }
}

/////////////////////////
//                     //
// Função da questão 3 //
//                     //
/////////////////////////

int funcao_exercicio_3( int f , int i )
{
    if ( i > 1 )
    {
        return ( f * funcao_exercicio_3( f , i - 1 ) ) ;
    }
}

/////////////////////////
//                     //
// Função da questão 4 //
//                     //
/////////////////////////

int funcao_exercicio_4( int A[  ] , int i , int somatorio )
{
    if ( i < 0 ) { return somatorio ; }
    else
    {
        return funcao_exercicio_4( A , i - 1 , somatorio += A[ i ] ) ;
    }
}

/////////////////////////
//                     //
// Função da questão 5 //
//                     //
/////////////////////////

int funcao_exercicio_5( int n1 , int n2 , int i , int mdc , int maior )
{
    if ( ( n1 % i == 0 ) && ( n2 % i == 0 ) )
    {
        return funcao_exercicio_5( n1 / i , n2 / i , i + 1 , mdc * i , maior ) ;
    }
    else { return mdc ; }
}

int main()
{
    ///////////////
    //           //
    // Questão 1 //
    //           //
    ///////////////

        std :: cout << "\n\nQuestao 1.Palavra \"abc\" ao contrario:" ; funcao_exercicio_1( "abc" , 3 ) ;

    ///////////////
    //           //
    // Questão 2 //
    //           //
    ///////////////

        std :: cout << "\n\nQuestao 2.A palavra \"arara\"" ;

        if ( funcao_exercicio_2( "arara" , strlen( "arara" ) , 0 ) )
        {
            std :: cout << " eh palindroma" ;
        }
        else
        {
            std :: cout << " nao eh palindroma" ;
        }

    //////////////////////////////////////////////////////////////

        std :: cout << "\n..........A palavra \"banana\"" ;

        if ( funcao_exercicio_2( "banana" , strlen( "banana" ) , 0 ) )
        {
            std :: cout << " eh palindroma" ;
        }
        else
        {
            std :: cout << " nao eh palindroma" ;
        }

    ///////////////
    //           //
    // Questão 3 //
    //           //
    ///////////////

        std :: cout << "\n\nQuestao 3.Fatorial de 3: " << funcao_exercicio_3( 3 ,3 ) ;

    ///////////////
    //           //
    // Questão 4 //
    //           //
    ///////////////

        int A[  ] = { 1 , 2 , 3 , 4 , 5 } ;

        std :: cout << "\n\nQuestao 4.Somatorio do array A , com os 5 primeiros numeros naturais: " << funcao_exercicio_4( A , 4 , 0 ) ;

    ///////////////
    //           //
    // Questão 5 //
    //           //
    ///////////////

        /*
            i = 2
            MDC = 1

            numero 1 = 6
            numero 2 = 12

            maior numero entre numero 1 e numero 2 = 12
        */

        std :: cout << "\n\nQuestao 5.MDC de 6 e 12: " << funcao_exercicio_5( 6 , 12 , 2 , 1 , 12 ) << "\n\n" ;

    return 0 ;
}
