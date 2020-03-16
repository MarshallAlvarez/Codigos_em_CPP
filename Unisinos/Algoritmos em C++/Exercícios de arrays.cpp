/*
    Linha 40 , Atividade 1: Alimente 1 array A[ 6 ] vazio com { 2 , 4 , 6 , 8 , 10 , 12 } com uma formula matematica.
    Linha 51 , Atividade 2: Alimente 1 array B[ 10 ] vazio com { −1.5 , −1 , −0.5 , 0 , 0.5 , 1 , 1.5 , 2 , 2.5 , 3 } com uma formula matematica.
    Linha 64 , Atividade 3: Crie 1 array[ 10 ] mas imprima apenas os 5 primeiros com o valor do seu indice.
    Linha 75 , Atividade 4: Alimente 1 array com 10 floats recebidos , imprima o indice e valor do menor , maior e a diferenca entre eles.
    Linha 114 , Atividade 5: Alimente 1 array com 10 ints , imprima o array ao contrario.
    Linha 123 , Atividade 6: Alimente 1 array com 10 ints , alimente 1 2º array com os valores do 1º ao inverso.
    Linha 140 , Atividade 7: Alimente 1 array com 10 ints recebidos , use lacos para por os valores na ordem inversa array.
    Linha 158 , Atividade 8: Alimente 1 array com 10 ints e imprima , receba 1 valor e procure ele no array , se achar o valor imprimir quantos e quais seus indices 
    se nao achar informar que nao ha tal valor.
    Linha 189 , Atividade 9: Alimente 2 arrays com 5 floats recebidos , some , subtraia , multiplique e divida , os valores do 1º pelo os do 2º indice por indice.
    Linha 213 , Atividade 10 , Desafio: Receba o tamanho de uma turma de alunos e nota por nota de cada aluno , depois imprima um histograma desse modelo:
    
    Resultado da avaliação da turma :

    Menor nota : 2.1 (1x) 
    Maior nota : 10.0 (2x) 
    Média da turma : 6.5

    Histograma das notas: 
    
    0.0 ~3.0 : ***
    3.1 ~4.0 : **
    4.1 ~5.0 : ****
    5.1 ~6.0 : *******
    6.1 ~7.0 : **********
    7.1 ~8.0 : *****    
    8.1 ~9.0 : *
    9.1 ~10.0 : **
*/

#include <iostream>
#include <bits/stdc++.h>

int main()
{ 
    int i , A[ 6 ] , C[ 10 ] , k , contMaior = 0 , contMenor = 0 ;
    float j = 0 , B[ 10 ] , D[ 10 ] , E[ 100 ] , maior , menor , media = 0 ;

    // Atividade 1.
    
    std :: cout << "Atividade 1.Array pares de 1-12.\n\n" ;

    for ( i = 0 ; i < 6 ; i++ )
    {
        A[ i ] = j += 2 ;

        std :: cout << "[ " << A[ i ] << " ] " ;
    }
    
    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Array de -0.5 ate 3.0.\n\n" ;

    j = -2.0 ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        B[ i ] = j += 0.5 ;

        std :: cout << "[ " << std :: fixed << std :: setprecision( 1 ) <<  B[ i ] << " ] " ;
    }

    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Array com indice como valor.\n\n" ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        B[ i ] = i ;

        std :: cout << "[ " << std :: fixed << std :: setprecision( 0 ) << B[ i ] << " ] " ;
    }

    // Atividade 4.

    std :: cout << "\n\n4.Informe 10 numeros: " ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cin >> B[ i ] ;
        
        if ( i == 0 )
        {
            maior = B[ i ] ;
            menor = B[ i ] ;
        }
        if ( B[ i ] > maior )
        {
            maior = B[ i ] ;
        }
        if ( B[ i ] < menor )
        {
            menor = B[ i ] ;
        }
    }

    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( B[ i ] == maior )
        {
            std :: cout << "\nMaior numero: ( " << i << " ) = [ " << std :: fixed << std :: setprecision( 0 ) << B[ i ] << " ]" ;
        }
        if ( B[ i ] == menor )
        {
            std :: cout << "\nMenor numero: ( " << i << " ) = [ " << std :: fixed << std :: setprecision( 0 ) << B[ i ] << " ]" ;
        }
    }
    
    std :: cout << "\n\nDiferenca entre o maior e o menor: " << maior - menor ;

    // Atividade 5.
    
    std :: cout << "\n\nAtividade 5.Array ao contrario.\n\n" ;

    for ( i = 9 ; i > - 1 ; i-- )
    {
        B[ i ] = i ;

        std :: cout << "[ " << B[ i ] << " ] " ;
    }
    
    // Atividade 6.

    std :: cout << "\n\nAtividade 6.Array ao contrario.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        B[ i ] = i ;
    }
    for ( i = 10 - 1 , k = 0 ; i >= 0 ; i-- , k++ )
    {
        C[ k ] = B[ i ] ;
    }
    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cout << "[ " << C[ i ] << " ] " ;
    }

    // Atividade 7

    std :: cout << "\n\nAtividade 7.Informe 10 numeros: " ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cin >> B[ i ] ;
    }

    std :: cout << "\nAtividade 7.Array ao contrario.\n\n" ;

    for ( i = 9 ; i > -1 ; i-- )
    {
        B[ i ] = i ;

        std :: cout << "[ " << B[ i ] << " ] " ;
    }

    // Atividade 8.
     
    std :: cout << "\n\nAtividade 8.Array.\n\n" ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        B[ i ] = i ;

        std :: cout << "( " << i << " ) = [ " << B[ i ] << " ]\n" ;
    }
    
    std :: cout << "\nInforme um valor para procurar no array: " ;
    std :: cin >> j ;
    
    k = 0 ;

    for ( i = 0; i < 10; i++ )
    {
        if ( i == j )
        {
            std :: cout << "Valor achado na posicao: ( " << i << " ) = [ " << B[ i ] << " ]\n" ;

            k = 1 ;
        }
    }
    
    if ( k == 0 )
    {
        std :: cout << "\nNao existe nenhum indice com esse valor no array.\n" ;
    }

    // Atividade 9.

    std :: cout << "\nAtividade 9.Informe 5 numeros fracionarios: " ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        std :: cin >> B[ i ] ;
    }
    
    std :: cout << "\nInforme mais 5 numeros fracionarios: " ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        std :: cin >> D[ i ] ;
    }

    for ( i = 0 ; i < 5 ; i++ )
    {
        std :: cout << "\nSoma          entre valores do indice " << i << " do array 1 com o do 2: " << "( " << i << " ) = [ " << B[ i ] << " ] + [ " << D[ i ] << " ] = " << B[ i ] + D[ i ]
                    << "\nSuubtracao    entre valores do indice " << i << " do array 1 com o do 2: " << "( " << i << " ) = [ " << B[ i ] << " ] - [ " << D[ i ] << " ] = " << B[ i ] - D[ i ]
                    << "\nMultiplicacao entre valores do indice " << i << " do array 1 com o do 2: " << "( " << i << " ) = [ " << B[ i ] << " ] + [ " << D[ i ] << " ] = " << B[ i ] * D[ i ]
                    << "\nDivisao       entre valores do indice " << i << " do array 1 com o do 2: " << "( " << i << " ) = [ " << B[ i ] << " ] + [ " << D[ i ] << " ] = " << B[ i ] / D[ i ] << "\n" ;
    }
    
    // Atividade 10.

    std :: cout << "Atividade 10.Informe o tamanho de uma turma: " ;
    std :: cin >> j ;

    for ( i = 0 ; i < j ; i++ )
    {
        std :: cout << "Informe a nota do aluno " << i << ": " ;
        std :: cin >> E[ i ] ;
        
        media += E[ i ] ;

        if ( i == 0 )
        {
            maior = E[ i ] ;
            menor = E[ i ] ;
        }
        if ( E[ i ] > maior )
        {
            maior = E[ i ] ;
        }
        if ( E[ i ] < menor )
        {
            menor = E[ i ] ;
        }
    }
    
    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] == maior )
        {
            contMaior++ ;
        }
        if  ( E[ i ] == menor )
        {
            contMenor++ ;
        }
    }
    
    std :: cout << "\nResultado da avaliacao da turma:"
                << "\n\nMenor nota: " << menor << " ( " << contMenor << " x )"
                << "\nMaior nota: " << maior << " ( " << contMaior << " x )"
                << "\nMedia da turma: " <<  media / j 
                << "\n\nHistograma das notas:" 
                << "\n\n0.0 - 3.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 0.0 && E[ i ] <= 3.0 )
        { 
            std :: cout << '*' ;
        }
    }

    std :: cout << "\n3.1 - 4.0: " ;
  
    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 3.1 && E[ i ] <= 4.0 )
        {
            std :: cout << '*' ;
        }
    }

    std :: cout << "\n4.1 - 5.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 0.0 && E[ i ] <= 3.0 )
        {
            std :: cout << "*" ;
        }
    }

    std :: cout << "\n5.1 - 6.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 5.1 && E[ i ] <= 6.0 )
        {
            std :: cout << "*" ;
        }
    }
    
    std :: cout << "\n6.1 - 7.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 6.1 && E[ i ] <= 7.0)
        {
            std :: cout << "*" ;
        }
    }

    std :: cout << "\n7.1 - 8.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 7.1 && E[ i ] <= 8.0 )
        {
            std :: cout << "*" ;
        }
    }

    std :: cout << "\n8.1 - 9.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 8.1 && E[ i ] <= 9.0 )
        {
            std :: cout << "*" ;
        }
    }

    std :: cout << "\n9.1 - 10.0: " ;

    for ( i = 0 ; i < j ; i++ )
    {
        if ( E[ i ] >= 9.1 && E[ i ] <= 10.0)
        {
            std :: cout << "*" ;
        }
    }  
    
    std :: cout << "\n\n" ;
}
