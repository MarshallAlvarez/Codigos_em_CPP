
/*
    Linha 82  , Atividade 1. Alimente 1 array  com 12 inteiros e receba 2 posicoes deles , x e y , imprima a soma de x e y.
    Linha 96  , Atividade 2. Alimente 1 array  com 10 primeiros inteiros impares naturais e os imprima.
    Linha 104 , Atividade 3. Alimente 1 array  com 16 inteiros e troque os numeros das 8 primerias posicoes pelos da ultimas 8 e vice-versa , imprima o novo array.
    Linha 118 , Atividade 4. Alimente 1 array  com 20 inteiros e receba 1 numero , imprima as posicoes em que ele foi encontrado.
    Linha 132 , Atividade 5. Alimente 1 array  com 40 inteiros , imprima quantos pares ele tem.
    Linha 151 , Atividade 6. Alimente 1 array  com 40 inteiros e troque valores negativos por 0.
    Linha 170 , Atividade 7. Alimente 2 arrays com 20 inteiros , passe para 1 array de 40 posicoes os valores do primeiro nas posicoes pares e do segundo nas impares.
    Linha 190 , Atividade 8. Alimente 1 array  com 40 inteiros e imprima o somatorio dos valores nele.
    Linha 204 , Atividade 9. Alimente uma string com as letras separadas por espacos , arrume a frase apagando apenas esses espacos.
    Linha 211 , Atividade 10.Receba 1 numero de 0-99 e o escreva por extenso.
    Linha 218 , Atividade 11.Receba 2 palavras , diga se uma eh anagrama da outra.
    Linha 233 , Atividade 12.Receba 3 arrays com 9 inteiros e crie outro com o 1º terco do primeiro , 2º terco do segundo e 3º terco do terceiro , imprima o novo array.
    Linha 263 , Atividade 13.Receba 1 array com 10 inteiros e veja se ha numeros iguais dentro do array.
*/

#include <string>
#include <iostream>
#include <algorithm>

// Linha 278

    void funcaoQuestao1( int A[ 12 ] ) ;

// Linha 294

    void funcaoQuestao2( int B[ 10 ] ) ;

// Linha 314

    void funcaoQuestao3( int C[ 16 ] , int D[ 16 ] ) ;

// Linha 333

    void funcaoQuestao4( int E[ 20 ] ) ;

// Linha 361

    void funcaoQuestao5( int G[ 40 ] ) ;

// Linha 366

    void funcaoQuestao6( int G[ 40 ] ) ;

// Linha 376

    void funcaoQuestao7( int E[ 20 ] , int F[ 20 ] , int G[ 40 ] ) ;

// Linha 403

    void funcaoQuestao8( int G[ 40 ] ) ;

// Linha 408

    void funcaoQuestao9( std :: string frase1 ) ;

// Linha 421 , 429 e 435

    std :: string funcaoQuestao10( const std :: string& n ) ;

// Linha 465

    bool funcaoQuestao11( std :: string frase1 , std :: string frase2 ) ;

// Linha 486

    void funcaoQuestao12( int H[ 9 ] , int I[ 9 ] , int J[ 9 ] , int K[ 27 ] ) ;

// Linha 509

    void funcaoQuestao13( int B[ 10 ] ) ;

int i , j , x , y , cont ;

int main()
{
    char texto[ 1000 ] ;
    std :: string frase1 , frase2 ;
    int A[ 12 ] , B[ 10 ] , C[ 16 ] , D[ 16 ] , E[ 20 ] , F[ 20 ] , G[ 40 ] , H[ 9 ] , I[ 9 ] , J[ 9 ] , K[ 27 ] ;

    // Atividade 1.

    std :: cout << "\nAtividade 1.\n\n" ;

    for ( i = 0 ; i < 12 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array A: " ;
        std :: cin >> A[ i ] ;
    }

    std :: cout << std :: endl ;

    funcaoQuestao1( A ) ;

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.\n\n" ;

    x = 0 ;

    funcaoQuestao2( B ) ;

    // Atividade 3.

    std :: cout << "\nAtividade 3.\n\n" ;

    for ( i = 0 ; i < 16 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array C: " ;
        std :: cin >> C[ i ] ;
    }

    std :: cout << std :: endl ;

    funcaoQuestao3( C , D ) ;

    // Atividade 4.

    std :: cout << "\nAtividade 4.\n\n" ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array E: " ;
        std :: cin >> E[ i ] ;
    }

    std :: cout << std :: endl ;

    funcaoQuestao4( E ) ;

    // Atividade 5.

    std :: cout << "\nAtividade 5.\n\n" ;

    x = 0 ;

    for ( i = 0 ; i < 40 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array G: " ;
        std :: cin >> G[ i ] ;

        if ( G[ i ] % 2 == 0 )
        {
            x++ ;
        }
    }

    funcaoQuestao5( G ) ;

    // Atividade 6.

    std :: cout << "\n\nAtividade 6.\n\n" ;

    x = 0 ;

    for ( i = 0 ; i < 40 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array G: " ;
        std :: cin >> G[ i ] ;

        if ( G[ i ] < 0 )
        {
            G[ i ] = 0 ;
        }
    }

    funcaoQuestao6( G ) ;

    // Atividade 7.

    std :: cout << "\nAtividade 7.\n\n" ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array E: " ;
        std :: cin >> E[ i ] ;
    }

    std :: cout << std :: endl ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array F: " ;
        std :: cin >> F[ i ] ;
    }

    funcaoQuestao7( E , F , G ) ;

    // Atividade 8.

    std :: cout << "\n\nAtividade 8.\n\n" ;

    x = 0 ;

    for ( i = 0 ; i < 40 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array G: " ;
        std :: cin >> G[ i ] ;

        x += G[ i ] ;
    }

    // Atividade 9.

    std :: cout << "\n\nAtividade 9.Informe uma frase separando cada letra por apenas 1 espaco: " ;
    getline ( std :: cin , frase1 ) ;

    funcaoQuestao9( frase1 ) ;

    // Atividade 10.

    std :: cout << "\n\nAtividade 10.Informe 1 numero: " ;
    gets ( texto ) ;

    std :: cout << "\nNumero por extenso: " << funcaoQuestao10( texto ) ;

    // Atividade 11.

    std :: cout << "\n\nAtividade 11.Informe 2 palavras: " ;
    std :: cin >> frase1 >> frase2 ;

    if ( funcaoQuestao11( frase1 , frase2 ) )
    {
        std :: cout << "\nAs palavras sao anagramas" ;
    }

    else
    {
        std :: cout << "\nAs palavras nao sao anagramas" ;
    }

    // Atividade 12.

    std :: cout << "\n\nAtividade 12.Informe 27 numeros , 9 deles para cada 1 desses arrays: H , I e J.\n\n" ;

    for ( i = 0 ; i < 9 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array H: " ;
        std :: cin >> H[ i ] ;
    }

    std :: cout << std :: endl ;

    for ( i = 0 ; i < 9 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array I: " ;
        std :: cin >> I[ i ] ;
    }

    std :: cout << std :: endl ;

    for ( i = 0 ; i < 9 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array J: " ;
        std :: cin >> J[ i ] ;
    }

    std :: cout << "\nNovo array:\n\n" ;

    funcaoQuestao12( H , I , J , K ) ;

    // Atividade 13.

    std :: cout << "\nAtividade 13.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cout << "Informe o numero na posicao " << i << " do array B: " ;
        std :: cin >> B[ i ] ;
    }

    funcaoQuestao13( B ) ;

    return 0 ;
}

void funcaoQuestao1( int A[ 12 ] )
{
    for ( i = 0 ; i < 12 ; i++ )
        {
            std :: cout << "A[ " << i << " ]: " << A[ i ] << std :: endl ;
        }

        std :: cout << "\nInforme 2 numeros equivalentes as posicoes do array.\n\nNumero 1: " ;
        std :: cin >> x ;

        std :: cout << "Numero 2: " ;
        std :: cin >> y ;

        std :: cout << "\nSoma dos numeros " << A[ x ] << " e " << A[ y ] << " , respectivamente , nas posicoes [ " << x << " ] e [ " << y << " ]: " << A[ x ] + A[ y ] ;
}

void funcaoQuestao2( int B[ 10 ] )
{
    for ( i = 0 ; i < 40 ; i++ )
    {
        if ( i % 2 != 0 )
        {
            B[ i ] = i ;

            std :: cout << x + 1 << "* numero impar natural: " << B[ i ] << std :: endl ;

            x++ ;
        }

        if ( x == 10 )
        {
            break ;
        }
    }
}

void funcaoQuestao3( int C[ 16 ] , int D[ 16 ] )
{
    for ( i = 0 , x = 8 ; i < 8 && x < 16 ; i++ , x++ )
    {
        D[ i ] = C[ i ] ;
        D[ x ] = C[ x ] ;

        C[ i ] = D[ x ] ;
        C[ x ] = D[ i ] ;
    }

    std :: cout << "Array com os 8 primeiros e 8 ultimos valores trocados:\n\n" ;

    for ( i = 0 ; i < 16 ; i++ )
    {
        std :: cout << "C[ " << i << " ]: " << C[ i ] << std :: endl ;
    }
}

void funcaoQuestao4( int E[ 20 ] )
{
    y = 1 ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        std :: cout << "E[ " << i << " ]: " << E[ i ] << std :: endl ;
    }

    std :: cout << "\nInforme 1 numeros equivalente ao valor duma posicao do array: " ;
    std :: cin >> x ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        if ( x == E[ i ] )
        {
            std :: cout << "\nNumero " << x << " foi encontrado na posicao E[ " << i << " ]: " << E[ i ] << std :: endl ;

            y = 0 ;
        }
    }

    if ( y == 1 )
    {
        std :: cout << "\nNumero " << x << " nao foi encontrado em nenhuma posicao do array E[ ]\n" ;
    }
}

void funcaoQuestao5( int G[ 40 ] )
{
    std :: cout << "\nO array G possui " << x << " numeros pares." ;
}

void funcaoQuestao6( int G[ 40 ] )
{
    std :: cout << "\nNovo array:\n\n" ;

    for ( i = 0 ; i < 40 ; i++ )
    {
        std :: cout << "G[ " << i << " ]: " << G[ i ] << std :: endl ;
    }
}

void funcaoQuestao7( int E[ 20 ] , int F[ 20 ] , int G[ 40 ] )
{
    x = 0 ;
    y = 0 ;

    for ( i = 0 ; i < 40 ; i++ )
    {
        if ( i % 2 == 0 )
        {
            G[ i ] = E[ x ] ;

            x++ ;
        }
        if ( i % 2 != 0 )
        {
            G[ i ] = F[ y ] ;

            y++ ;
        }
    }

    for ( i = 0 ; i < 40 ; i++ )
    {
        std :: cout << "\nG[ " << i << " ]: " << G[ i ] ;
    }
}

void funcaoQuestao8( int G[ 40 ] )
{
    std :: cout << "\nSomatorio dos valores no array: " << x ;
}

void funcaoQuestao9( std :: string frase1 )
{
    for ( i = frase1.size( ) - 1 ; i >= 0 ; i-- )
    {
        if ( frase1.at( i ) == ' ' && frase1.at( i ) != frase1.at( i - 1 ) )
        {
            frase1.erase( frase1.begin( ) + i ) ;
        }
    }

    std :: cout << "\nFrase arrumada:\n\n" << frase1  ;
}

const std :: string unidades[ ] =
{
    "zero"   , "um"        , "dois"      , "tres"    , "quatro"   ,
    "cinco"  , "seis"      , "sete"      , "oito"    , "nove"     ,
    "dez"    , "onze"      , "doze"      , "treze"   , "quatorze" ,
    "quinze" , "dezesseis" , "dezessete" , "dezoito" , "dezenove"
} ;

const std :: string dezenas[ ] =
{
    "vinte"    , "trinta"  , "quarenta" , "quinze" ,
    "sessenta" , "setenta" , "oitenta"  , "noventa"
} ;

std :: string funcaoQuestao10( const std :: string& n )
{
    std :: string numeroEmExtenso = "" ;

    if ( n.length() == 1 )
    {
        numeroEmExtenso = unidades[ n[ 0 ] - '0' ] ;
    }

    else if ( n.length( ) == 2 )
    {
        if ( n[ 0 ] == '1' )
        {
            numeroEmExtenso = unidades[ n[ 1 ] - '0' + 10 ] ;
        }

        else
        {
            numeroEmExtenso = dezenas[ n[ 0 ] - '2' ] ;

            if ( n[ 1 ] != '0' )
            {
                numeroEmExtenso += " " + unidades[ n[ 1 ] - '0' ] ;
            }
        }
    }

    return numeroEmExtenso ;
}

bool funcaoQuestao11( std :: string frase1 , std :: string frase2 )
{
    int n1 = frase1.length(  ) ;
    int n2 = frase2.length(  ) ;

    if ( n1 != n2 ) { return false ; }

    sort( frase1.begin(  ) , frase1.end(  ) ) ;
    sort( frase2.begin(  ) , frase2.end(  ) ) ;

    for ( i = 0 ; i < n1 ; i++ )
    {
        if ( frase1[ i ] != frase2[ i ] )
        {
            return false ;
        }
    }

    return true ;
}

void funcaoQuestao12( int H[ 9 ] , int I[ 9 ] , int J[ 9 ] , int K[ 27 ] )
{
    for ( i = 0 ; i < 9 ; i++ )
    {
        K[ i ] = H[ i ] ;
    }

    for ( i = 0 , x = 9 ; i < 9 ; i++ , x++ )
    {
        K[ x ] = I[ i ] ;
    }

    for ( i = 0 , x = 18 ; i < 9 ; i++ , x++ )
    {
        K[ x ] = J[ i ] ;
    }

    for ( i = 0 ; i < 27 ; i++ )
    {
        std :: cout << "K[ " << i << " ]: " << K[ i ] << std :: endl ;
    }
}

void funcaoQuestao13( int B[ 10 ] )
{
    std :: cout << "\nNumeros repetidos no array sao: " ;

    cont = 1 ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for( x = i + 1 ; x < 10 ; x++ )
        {
            if ( B[ i ] == B[ x ] )
            {
                std :: cout << B[ i ] << " ; " ;

                cont-- ;
            }
        }
   }

   if ( cont == 1 )
   {
       std :: cout << "Nenhum." ;
   }
}

