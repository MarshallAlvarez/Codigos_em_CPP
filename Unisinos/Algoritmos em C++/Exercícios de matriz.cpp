/*
    Linha 20 , atividade 1: Alimente 1 matriz 10x10 com floats , parte inteira como indice da linha e parte fracionaria como indice da coluna , imprimir com 1 casa decimal.
    Linha 35 , atividade 2: Imprima a diagonal principal da matriz da atividade 1.
    Linha 46 , atividade 3: Imprima a diagonal secundaria da matriz da atividade 1.
    Linha 55 , atividade 4: Imprima as bordas da matriz da atividade 1.
    Linha 98 , atividade 5: Imprima a matriz da atividade 1 transposta.
    Linha 115 , atividade 6: Receba as dimensoes de 1 matriz menor que 10x10 , copie as ultima linha e coluna da matriz da atividade 1 para dentro da nova matriz.
    Linha 164 , atividade 7: Crie uma matriz 10x10 com apenas '*' , com lacos faca as 2 diagonais terem o valor 'x'.
*/

#include <iostream>
#include <bits/stdc++.h>

int main()
{
    char C[ 10 ][ 10 ] ;
    int i , j , tamanho ;
    float A[ 10 ][ 10 ] , B[ 10 ][ 10 ] ;
    
    // Atividade 1.

    std :: cout << "Atividade 1.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            A[ i ][ j ] = i + ( j / 10.0 ) ;

            std :: cout << "[ " << std :: fixed << std :: setprecision( 1 ) << A[ i ][ j ] << " ] " ;
        }   
        std :: cout << std :: endl ;
    }

    // Atividade 2.

    std :: cout << "\nAtividade 2.Diagonal principal da matriz da atividade1.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        A[ i ][ i ] ;
        
        std :: cout << "[ " << std :: fixed << std :: setprecision( 1 ) <<  A[ i ][ i ] << " ]\n" ;
    }

    // Atividade 3.

    std :: cout << "\nAtividade 3.Diagonal secundaria da matriz da atividade 1.\n\n" ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cout << " [ " << std :: fixed << std :: setprecision( 1 ) << A[ i ][ 10 - i - 1 ] << " ]\n" ;
    }
    
    // Atividade 4.

    std :: cout << "\nAtividade 4.Matriz da atividade 1 em formato tabular.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            // Linha de cima.

            if ( i == 0 && j >= 0 && j <= 9 )
            {
                std :: cout << " [ " << A[ i ][ j ] << " ] " ;
            }

            // Linha de baixo.

            if ( i == 9 && j >= 0 && j <= 10 )
            {
                std :: cout << " [ " << A[ i ][ j ] << " ] " ;
            }

            // Coluna esquerda.

            if ( i >= 1 && i <= 8 && j == 0 )
            {
                std :: cout << " [ " << A[ i ][ j ] << " ] " ;
            }

            // Coluna direita.

            if ( i >= 1 && i <= 8 && j == 9 )
            {
                std :: cout << "                                                                         [ " << A[ i ][ j ] << " ] " ;
            }
        }
        std :: cout << std :: endl ;
    }
    
    // Atividade 5.

    std :: cout << "\nAtividade 5.Matriz da atividade 1 transposta:\n\n" ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            B[ j ][ i ] = A[ i ][ j ] ;
        }
    }
   
    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            std :: cout << " [ " << B[ i ][ j ] << " ] " ;
        }
        std :: cout << std :: endl ;
    }

    // Atividade 6. 

    std :: cout <<"\nAtividade 6.Informe o tamanho de uma matriz , deve ser menor que 10: " ;
    std :: cin >> tamanho ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            B[ i ][ j ] = 1 ;
        }
    }
    if ( tamanho >= 10 || tamanho <= 0 )
    {
        std :: cout << "\nDimensoes de matriz nao suportadas\n" ;
    }

    else
    {
        j = 0 ;

        while ( j < tamanho + 1 )
        {
            B[ tamanho ][ j ] = A[ 9 ][ j ] ;
            
            j++ ;        
        }
        
        i = 0 ;

        while ( i < tamanho + 1 )
        {
            B[ i ][ tamanho ] = A[ i ][ 9 ] ;

            i++ ;
        }
    }

    std :: cout << "\nNova matriz com a ultima linha e coluna da matriz da atividade 1:\n\n" ;

    for ( i = 0 ; i < tamanho + 1 ; i++ )
    {
        for ( j = 0 ; j < tamanho + 1 ; j++ )
        {
            std :: cout << " [ " << B[ i ][ j ] << " ] " ;
        }
        std :: cout << std :: endl ;
    }

    // Atividade 7.

    std :: cout <<("\nAtividade 7.\n\n") ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            C[ i ][ j ] = '*' ;
    
            std :: cout << C[ i ][ j ] ;
        }
        std :: cout << std :: endl ;
    }

    for ( i = 0 ; i < 10 ; i++ )
    {
        C[ i ][ i ] = 'x' ;
    }

    for ( i = 0; i < 10 ; i++ ) 
    {
        C[ i ][ 10 - i - 1 ] = 'x' ;
    }

    std :: cout << "\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 10 ; j++ )
        {
            std :: cout << C[ i ][ j ] ;
        }
        std :: cout << std :: endl ;
    }
}
