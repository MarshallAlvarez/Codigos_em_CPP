
/*
    Linha 39 , Atividade 1: Imprima os primeiros numeros naturais de "n".
    Linha 51 , atividade 2: Imprima os primeiros numeros naturais pares ate "n".
    Linha 66 , atividade 3: Imprima os primeiros numeros naturais impares ate "n".
    Linha 81 , atividade 4: Imprima o fatorial de "n".
    Linha 93 , atividade 5: Imprima uma sequencia "n" com os primeiros floats múltiplos de 0,5 com inicio em 1,5. a sequência , n = 5 , sequencia = 1.5  2.0  2.5  3.0  3.5.
    Linha 108 , atividade 6: Imprima uma sequencia "n" com primeiros floats múltiplos de “m” iniciando “i” , "n" = 6 , "m" = 0.3 e "i" = -1 , sequencia = -1.0  -0.7  -0.4  -0.1  0.2  0.5.
    Linha 129 , atividade 7: Receba infinitos ints ate 0 ser digitado , entao informe: Quantidade de numeros digitados , quantidade de pares , de impares , somatorio , media , maior e menor numero.
    Linha 176 , atividade 8: Imprima com apenas lacos: na tela a seguinte forma:    
                                                                                *****   
                                                                                *****   
                                                                                *****
                                                                                *****   
                                                                                *****
    Linha 185 , atividade 9: Imprima com apenas lacos:       
                                                      *
                                                      **   
                                                      ***   
                                                      ****
                                                      *****
    Linha 203 , atividade 10: Imprima com apenas lacos:        
                                                       *****  
                                                       **** 
                                                       ***  
                                                       **
                                                       *
    
    
    
*/
#include <iostream>

int main()
{
    float j , m , l ;
    int i , n , contNumeros = 0 , contPares = 0 , contImpares = 0 , somatorio = 0 , maior = 0 , menor = 0 ;

    // Atividade 1.

    std :: cout << "Atividade 1.Informe o tamanho de uma sequencia de numeros naturais: " ;
    std :: cin >> n ;

    std :: cout << std :: endl ;

    for ( i = 0 ; i < n ; i++ )
    {   
        std :: cout << i << ' ' ;
    }
    
    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Informe o tamanho de uma sequencia de numeros naturais pares: " ;
    std :: cin >> n ;

    std :: cout << std :: endl ;

    for ( i = 0 ; i < n ; i++ )
    {
        if ( i % 2 == 0 )
        {
            std :: cout << i << ' ' ;
        }
    }
    
    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Informe o tamanho de uma sequencia de numeros naturais impares: " ;
    std :: cin >> n ;

    std :: cout << std :: endl ;

    for ( i = 0 ; i < n ; i++ )
    {
        if ( i % 2 != 0 )
        {
            std :: cout << i << ' ' ;
        }
    }

    // Atividade 4. 

    std :: cout << "\n\nAtividade 4.Informe um numero para ver o seu fatorial: " ;
    std :: cin >> n ;

    for ( i = 1 ; n > 1 ; n = n - 1 )
    {
        i = i * n ;
    }

    std :: cout << "\nNumero fatorado: " << i ;

    // Atividade 5. 

    std :: cout << "\n\nAtividade 5.Informe o tamanho da sequencia de multiplos de 0.5 comecando em 1.5: " ;
    std :: cin >> n ; 
    
    std :: cout << std :: endl ;

    j = 1.5 ;

    for ( i = 0 ; i < n ; i++ )
    {
        std :: cout << j << ' ' ;
        j += 0.5 ;
    }

    // Atividade 6 
    
    std :: cout << "\n\nAtividade 6.Informe o tamanho duma sequencia , os multiplos dela e onde comeca.\n\nTamanho: " ;
    std :: cin >> n ;
    std :: cout << "Multiplos de: " ;
    std :: cin >> m ;
    std :: cout << "Iniciando em: " ;
    std :: cin >> l ;

    std :: cout << std :: endl ;

    j = 0 ;
    l -= m ;

    while ( j < n )
    {
        l += m ;
        std :: cout << l << ' ' ;
        j++ ;
    }
    
    // Atividade 7.

    std :: cout << "\n\nAtividade 7.Digite quantos numeros quiser.\n\n" ;
    
    i = 0 ;

    if ( i == 0 )
    {
        maior = i ;
        menor = i ;
    }

    while ( std :: cin >> i )
    {
        contNumeros++ ;
        somatorio += i ;

        if ( i == 0 )
        {
            break ; 
        }
        if ( i % 2 == 0 )
        {
            contPares++ ;
        }
        if ( i % 2 != 0 )
        {
            contImpares++ ;
        }
        if ( i > maior )
        {
            maior = i ;
        }
        if ( i < menor )
        {
            menor = i ;
        }
    }

    std :: cout << "\n\nQuantidade de numeros: " << contNumeros
                << "\nQuantidade de impares: " << contImpares
                << "\nQuantidade de pares: " << contPares 
                << "\nSomatorio: " << somatorio
                << "\nMedia: " << somatorio / contNumeros
                << "\nMaior: " << maior 
                << "\nMenor: " << menor ;

    // Atividade 8.
    
    std :: cout << "\n\nAtividade 8.\n\n" ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        std :: cout << "*****\n" ;
    }

    // Atividade 9.

    std :: cout << "\nAtividade 9.\n\n";

    i = 0 ;

    while ( i < 6 )
    {    
         
        for ( n = 0 ; n < i ; n++ )
        {
            std :: cout << "*" ;
        }
        std :: cout << std :: endl ;

        i++ ;
    }

    // Atividade 10.

    std :: cout << "\nAtividade 10.\n\n" ;

    i = 6 ;

    while ( i > 0 )
    {   
        for ( n = 1 ; n < i ; n++ )
        {
            std :: cout << "*" ;
        }
        std :: cout << std :: endl ;

        i--;
    }
    return 0 ;
}

