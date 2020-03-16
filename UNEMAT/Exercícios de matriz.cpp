
/*
    Linha 76  , Atividade 1. Imprima a posicao do maior numero uma matriz 10x10.
    Linha 93  , Atividade 2. Numa matriz 5x5 troque os numeros da diagonal principal por 1 e o resto 0.
    Linha 99  , Atividade 3. Numa matriz 6x6 imprima quantos numeros acima de 10 ha.
    Linha 116 , Atividade 4. Numa matriz 20x20 receba 1 numero e imprima a localizacao dele na matriz.
    Linha 122 , Atividade 5. Numa matriz 4x4 troque os numeros da linha 1 pelos da coluna 4.
    Linha 139 , Atividade 6. Transforme uma matriz 8x8 numa matriz triangular inferior trocando por 0 todos os numeros acima da diagonal principal.
    Linha 145 , Atividade 7. Numa matriz 5x5 troque os numeros acima da diagonal pelos embaixo dela.
    Linha 151 , Atividade 8. Troque os numeros de duas matrizes 10x10 , valores da diagonal inferior da primeira pelos da diagonal superior da segunda.
    Linha 157 , Atividade 9. Numa matriz 8x8 imprima o maior numero da diagonal principal e o somatorio dos valores da secundaria.
    Linha 163 , Atividade 10.Numa matriz 6x6 troque por 0 os numeros negativos fora das diagonais.
    Linha 169 , Atividade 11.Imprima os valores duma matriz 20x20 que se repetem em outra matriz 20x20.
    Linha 175 , Atividade 12.Numa matriz 100x10 , onde 100 equivale ao numero de alunos e 10 o numero de questoes num teste , e numa string tamanho 10 ,
                         com o gabarito duma prova com respostas ABCD , imprima quanto cada aluuno tirou no teste.
*/

#include <iostream>

char y ;
int i , j , x , cont , maior , imaior , jmaior ;

// Linha 184

    void funcao_Atividade_1( int A[ 10 ][ 10 ] ) ;

// Linha 213

    void funcao_Atividade_2( int B[ 5 ][ 5 ] ) ;

// Linha 239

    void funcao_Atividade_3( int C[ 6 ][ 6 ] ) ;

// Linha 262

    void funcao_Atividade_4( int D[ 20 ][ 20 ] ) ;

// Linha 304

    void funcao_Atividade_5( int E[ 4 ][ 4 ] , int F[ 4 ][ 4 ] ) ;

// Linha 329

    void funcao_Atividade_6( int A[ 10 ][ 10 ] ) ;

// Linha 356

    void funcao_Atividade_7( int B[ 5 ][ 5 ] ) ;

// Linha 393

    void funcao_Atividade_8( int A[ 10 ][ 10 ] , int G[ 10 ][ 10 ] ) ;

// Linha 470

    void funcao_Atividade_9( int H[ 8 ][ 8 ] ) ;

// Linha 512

    void funcao_Atividade_10( int C[ 6 ][ 6 ] ) ;

// Linha 549

    void funcao_Atividade_11( int D[ 20 ][ 20 ] , int I[ 20 ][ 20 ] ) ;

// Linha 604

    void funcao_Atividade_12( char J[ 100 ][ 10 ] , char gabarito[ 10 ] , int notas[ 11 ] ) ;

int main()
{
    char J[ 100 ][ 10 ] , gabarito[  ] = { 'C' , 'A' , 'A' , 'D' , 'C' , 'B' , 'C' , 'D' , 'B' , 'A' } ;
    int  A[ 10 ][ 10 ] , B[ 5 ][ 5 ] , C[ 6 ][ 6 ] , D[ 20 ][ 20 ] , E[ 4 ][ 4 ] , F[ 4 ][ 4 ] , G[ 10 ][ 10 ] , H[ 8 ][ 8 ] , I[ 20 ][ 20 ] , notas[ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;

    // Atividade 1.

    std :: cout << "\nAtividade 1.Informe 100 inteiros.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            std :: cout << "Informe o numero na posicao [ " << i << " ][ " << j << " ] da matriz A: " ;
            std :: cin >> A[ i ][ j ] ;
        }
    }

    std :: cout << "\nMatriz:\n\n" ;

    funcao_Atividade_1( A ) ;

    // Atividade 2

    std :: cout << "\n\nAtividade 2.Matriz principal com valor 1 e resto 0:\n\n" ;

    funcao_Atividade_2( B ) ;

    // Atividade 3.

    std :: cout << "\nAtividade 3.Informe 36 inteiros.\n\n" ;

    for ( i = 0 ; i < 6 ; i++ )
    {
        for ( j = 0 ; j < 6 ; j++ )
        {
            std :: cout << "Informe o numero na posicao [ " << i << " ][ " << j << " ] da matriz C: " ;
            std :: cin >> C[ i ][ j ] ;
        }
    }

    std :: cout << "\nMatriz:\n\n" ;

    funcao_Atividade_3( C ) ;

    // Atividade 4.

    std :: cout << "\n\nAtividade 4.Matriz:\n\n" ;

    funcao_Atividade_4( D ) ;

    // Atividade 5.

    std :: cout << "\n\nAtividade 5.Informe 16 inteiros.\n\n" ;

    for ( i = 0 ; i < 4 ; i++ )
    {
        for ( j = 0 ; j < 4 ; j++ )
        {
            std :: cout << "Informe o numero na posicao [ " << i << " ][ " << j << " ] da matriz E: " ;
            std :: cin >> E[ i ][ j ] ;

            F[ i ][ j ] = E[ i ][ j ] ;
        }
    }

    funcao_Atividade_5( E , F ) ;

    // Atividade 6.

    std :: cout << "\nAtividade 6.Matriz triangular inferior com 0s acima da diagonal principal:\n\n" ;

    funcao_Atividade_6( A ) ;

    // Atividade 7.

    std :: cout << "\n\nAtividade 7.Matriz com valores acima das diagonais invertidos:\n\n" ;

    funcao_Atividade_7( B ) ;

    // Atividade 8.

    std :: cout << "\nAtividade 8.\n\nMatriz 0:\n\n" ;

    funcao_Atividade_8( A , G ) ;

    // Atividade 9.

    std :: cout << "\nAtividade 9.\n\n" ;

    funcao_Atividade_9( H ) ;

    // Atividade 10.

    std :: cout << "\n\nAtividade 10.Numeros negativos fora das diagonais da matriz convertidos para 0:\n\n" ;

    funcao_Atividade_10( C ) ;

    // Atividade 11.

    std :: cout << "\nAtividade 11.\n\nMatriz D:\n\n" ;

    funcao_Atividade_11( D , I ) ;

    // Atividade 12.

    std :: cout << "\n\nAtividade 12.\n\n" ;

    funcao_Atividade_12( J , gabarito , notas ) ;

    return 0 ;
}

void funcao_Atividade_1( int A[ 10 ][ 10 ] )
{
    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            if ( i == 0 )
            {
                maior = A[ i ][ j ] ;
            }

            if ( A[ i ][ j ] > maior )
            {
                maior = A[ i ][ j ] ;

                imaior = i ;
                jmaior = j ;
            }

            std :: cout << ' ' << A[ i ][ j ] ;
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\nO maior numero ( " << maior << " ) apareceu primeiro na posicao " << A[ imaior ][ jmaior ] ;

}

void funcao_Atividade_2( int B[ 5 ][ 5 ] )
{
    for ( i = 0 ; i < 5 ; i++ )
    {
        for ( j = 0 ; j < 5 ; j++ )
        {
            B[ i ][ j ] = 0 ;
        }
    }

    for ( i = 0 ; i < 5 ; i++ )
    {
        B[ i ][ i ] = 1 ;
    }

    for ( i = 0 ; i < 5 ; i++ )
    {
        for ( j = 0 ; j < 5 ; j++ )
        {
            std :: cout << ' ' << B[ i ][ j ] ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_3( int C[ 6 ][ 6 ] )
{
    maior = 0 ;

    for ( i = 0 ; i < 6 ; i++ )
    {
        for ( j = 0 ; j < 6 ; j++ )
        {
            if ( C[ i ][ j ] > 10 )
            {
                maior++ ;
            }

            std :: cout << ' ' << C[ i ][ j ] ;
        }

        std :: cout << std :: endl ;
    }

    if ( maior > 1 ){ std :: cout << "\nHa " << maior << " numeros maiores que 10 na matriz." ; }
    else            { std :: cout << "\nHa " << maior << " numero maior que 10 na matriz."    ; }
}

void funcao_Atividade_4( int D[ 20 ][ 20 ] )
{
    maior = 1 ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            D[ i ][ j ] = maior ;

            if      ( D[ i ][ j ] < 10                      ) { std :: cout <<        D[ i ][ j ] << "   " ; }
            else if ( D[ i ][ j ] > 10 && D[ i ][ j ] < 21  ) { std :: cout << ' ' << D[ i ][ j ] << ' '   ; }
            else if ( D[ i ][ j ] > 20 && D[ i ][ j ] < 100 ) { std :: cout <<        D[ i ][ j ] << "  "  ; }
            else                                              { std :: cout <<        D[ i ][ j ] << ' '   ; }

            maior++ ;
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\n\nInforme 1 numero para procura-lo na matriz: " ;
    std :: cin >> maior ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            if ( D[ i ][ j ] == maior )
            {
                std :: cout << "\nO numero " << maior << " foi encontrado na posicao [ " << i << " ][ " << j << " ]." ;
                maior = 999 ;
            }
        }
    }

    if ( maior == 999 )
    {
        std :: cout << "\nO numero " << maior << " nao foi encontrado na matriz." ;
    }
}

void funcao_Atividade_5( int E[ 4 ][ 4 ] , int F[ 4 ][ 4 ] )
{
    for ( i = 1 , j = 2 ; i < 4 ; i++ , j-- )
    {
        E[ i ][ 3 ] = F[ 0 ][ j ] ;
    }

    for ( i = 3 , j = 0 ; j < 4 ; i-- , j++ )
    {
        E[ 0 ][ j ] = F[ i ][ 3 ] ;
    }

    std :: cout << "\nMatriz:\n\n" ;

    for ( i = 0 ; i < 4 ; i++ )
    {
        for ( j = 0 ; j < 4 ; j++ )
        {
            std :: cout << ' ' << E[ i ][ j ] ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_6( int A[ 10 ][ 10 ] )
{
    maior = 1 ;

    for ( i = 0 ; i < 8 ; i++ )
    {
        for ( j = 0 ; j < 8 ; j++ )
        {
            A[ i ][ j ] = maior ;

            if ( i < j )
            {
                std :: cout << " 0" << " " ;
            }

            else
            {
                std :: cout << A[ i ][ j ] << ' ' ;
            }

            maior++ ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_7( int B[ 5 ][ 5 ] )
{
    maior = 1 ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        for ( j = 0 ; j < 5 ; j++ )
        {
            B[ i ][ j ] = maior ;

            maior++ ;
        }
    }

    for ( i = 0 ; i < 5 ; i++ )
    {
        for ( j = i + 1 ; j < 5 ; j++ )
        {
            x = B[ i ][ j ] ;

            B[ i ][ j ] = B[ j ][ i ] ;

            B[ j ][ i ] = x ;
        }
    }

    for ( i = 0 ; i < 5 ; i++ )
    {
        for ( j = 0 ; j < 5 ; j++ )
        {
            std :: cout << B[ i ][ j ] << ' ' ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_8( int A[ 10 ][ 10 ] , int G[ 10 ][ 10 ] )
{
      for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            G[ i ][ j ] = 0 ;

            std :: cout << G[ i ][ j ] << ' ' ;
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\nMatriz 1:\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            A[ i ][ j ] = 1 ;

            std :: cout << A[ i ][ j ] << ' ' ;
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\nTroca entre numeros abaixo da diagonal da matriz 0 pelos acima da matriz 1.\n\nMatriz 0:\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = i + 1 ; j < 10 ; j++ )
        {
            x = A[ i ][ j ] ;

            G[ i ][ j ] = A[ j ][ i ] ;

            A[ j ][ i ] = x ;
        }
    }

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = i + 1 ; j < 10 ; j++ )
        {
            x = A[ i ][ j ] ;

            A[ i ][ j ] = G[ j ][ i ] ;

            A[ j ][ i ] = x ;
        }
    }

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            std :: cout << G[ i ][ j ] << ' ' ;
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\nMatriz 1:\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            std :: cout << A[ i ][ j ] << ' ' ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_9( int H[ 8 ][ 8 ] )
{
    x = 1 ;

    for ( i = 0 ; i < 8 ; i++ )
    {
        for ( j = 0 ; j < 8 ; j++ )
        {
            H[ i ][ j ] = x ;

            std :: cout << H[ i ][ j ] << ' ' ;

            x++ ;
        }

        std :: cout << std :: endl ;
    }

    for ( i = 0 ; i < 8 ; i++ )
    {
        if ( i == 0 )
        {
            maior = H[ i ][ i ] ;
        }

        if ( H[ i ][ i ] > maior )
        {
            maior = H[ i ][ i ] ;
        }
    }

    x = 0 ;

    for ( i = 0 ; i < 8 ; i++ )
    {
        x += H[ i ][ 8 - i - 1 ] ;
    }

    std :: cout << "\nMaior numero da diagonal principal: " << maior
                << "\nSomatorio da diagonal secundaria: " << x ;
}

void funcao_Atividade_10( int C[ 6 ][ 6 ] )
{
    x = -36 ;

    for ( i = 0 ; i < 6 ; i++ )
    {
        for ( j = 0 ; j < 6 ; j++ )
        {
            if ( i == j )
            {
                C[ i ][ j ] = x ;
            }

            else if ( i == 6 - 1 - j )
            {
                C[ i ][ j ] = x ;
            }

            else
            {
                C[ i ][ j ] = x ;

                if ( C[ i ][ j ] < 0 )
                {
                    C[ i ][ j ] = 0 ;
                }
            }

            std :: cout << C[ i ][ j ] << ' ' ;

            x++ ;
        }

        std :: cout << std :: endl ;
    }
}

void funcao_Atividade_11( int D[ 20 ][ 20 ] , int I[ 20 ][ 20 ] )
{
    x = 1 ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            D[ i ][ j ] = x ;
            I[ i ][ j ] = x ;

            x++ ;
        }
    }

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            if      ( D[ i ][ j ] < 10                      ) { std :: cout <<        D[ i ][ j ] << "   " ; }
            else if ( D[ i ][ j ] > 10 && D[ i ][ j ] < 21  ) { std :: cout << ' ' << D[ i ][ j ] << ' '   ; }
            else if ( D[ i ][ j ] > 20 && D[ i ][ j ] < 100 ) { std :: cout <<        D[ i ][ j ] << "  "  ; }
            else                                              { std :: cout <<        D[ i ][ j ] << ' '   ; }
        }

        std :: cout << std :: endl ;
    }

    std :: cout << "\nMatriz I:\n\n" ;

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            if      ( I[ i ][ j ] < 10                      ) { std :: cout <<        I[ i ][ j ] << "   " ; }
            else if ( I[ i ][ j ] > 10 && I[ i ][ j ] < 21  ) { std :: cout << ' ' << I[ i ][ j ] << ' '   ; }
            else if ( I[ i ][ j ] > 20 && I[ i ][ j ] < 100 ) { std :: cout <<        I[ i ][ j ] << "  "  ; }
            else                                              { std :: cout <<        I[ i ][ j ] << ' '   ; }
        }

        std :: cout << std :: endl ;
    }

    for ( i = 0 ; i < 20 ; i++ )
    {
        for ( j = 0 ; j < 20 ; j++ )
        {
            if ( D[ i ][ j ] == I[ i ][ j ] )
            {
                std :: cout << "\nO valor [ " << D[ i ][ j ] << " ] da matriz D apareceu na posicao [ " << i << " ][ " << j << " ] da matriz I." ;
            }
        }
    }
}

void funcao_Atividade_12( char J[ 100 ][ 10 ] , char gabarito[ 10 ] , int notas[ 11 ] )
{
    cont = 0 ;

    for ( i = 0 ; i < 100 ; i++ )
    {
        std :: cout << "Gabarito do aluno " << i << ": " ;

        for ( j = 0 ; j < 10 ; j++ )
        {
            x = ( rand() % 4 ) + 1 ;

            if      ( x == 1 ) { y = 'A' ; }
            else if ( x == 2 ) { y = 'B' ; }
            else if ( x == 3 ) { y = 'C' ; }
            else               { y = 'D' ; }

            J[ i ][ j ] = y ;

            if ( J[ i ][ j ] == gabarito[ j ] )
            {
                cont++ ;
            }

            std :: cout << y << ' ' ;
        }

        std :: cout << ", o aluno tirou nota " << cont << " no teste.\n" ;

        if      ( cont == 0 ) { notas[ 0 ]++  ; }
        else if ( cont == 1 ) { notas[ 1 ]++  ; }
        else if ( cont == 2 ) { notas[ 2 ]++  ; }
        else if ( cont == 3 ) { notas[ 3 ]++  ; }
        else if ( cont == 4 ) { notas[ 4 ]++  ; }
        else if ( cont == 5 ) { notas[ 5 ]++  ; }
        else if ( cont == 6 ) { notas[ 6 ]++  ; }
        else if ( cont == 7 ) { notas[ 7 ]++  ; }
        else if ( cont == 8 ) { notas[ 8 ]++  ; }
        else if ( cont == 9 ) { notas[ 9 ]++  ; }
        else                  { notas[ 10 ]++ ; }

        cont = 0 ;
    }

    for ( i = 0 ; i < 11 ; i++ )
    {
        std :: cout << std :: endl << notas[ i ] << " alunos tiraram nota " << i ;
    }
}
