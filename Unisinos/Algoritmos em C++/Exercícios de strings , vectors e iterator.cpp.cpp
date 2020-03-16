
/*
    Atividade 1.Acesse www.cplusplus.com e leia a documentacao sobre string.
    Atividade 2.Acesse www.cplusplus.com e leia a documentacao sobre vector.
    Atividade 3.Acesse www.cplusplus.com e leia a documentacao sobre iterator. 
    
    Linha 47 , atividade 4.Receba 1 frase e letra , com lacos e o medoto at() conte quantas vezes a letra aparece na frase.
    
    Linha 70 , atividade 5.Receba 1 nome , telefone e endereco , faca 1 string frase com eles.
    
    Linha 93 , atividade 6.Imprima 1 frase recebida de tras pra frente com lacos e operador[].
    
    Linha 112 , atividade 7.Receba 1 frase e troque as vogais por suas versoes em maiusculas.
    
    Linha 132 , atividade 8.Receba 2 strings e diga se sao iguais ou nao. 

    Linha 153 , atividade 9.Receba infinitos ints , a cada int recebido coloque ele num vector , quando 0 for digitado varra o vector com 1 iteratore e imprima todos os ints 1 do lado do outro
    separados por um ' ' , nao deve liste o zero e nem o ponha no vector.
    
    Linha 183 , atividade 10.Imprima o vector da atividade 9 ao contrario com 1 reverse iterator.
    
    Linha 215 , atividade 11.Varra o vector da atividade 9 e imprima o menor , maior numero e media aritmetica.
    
    Linha 252 , atividade 12.Imprima numa linha os numeros pares de tras pra frente e embaixo os impares do vector da atividade 9. 
*/


#include <vector>
#include <string>
#include <cstdio>
#include <numeric>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    std :: vector < int > numeros ;
    std :: vector < int > :: iterator it ;
    std :: vector < int > :: reverse_iterator rit ;
    int i , cont = 0 , tamanho , maior = 0 , menor = 1 ;
    std :: string frase , letra , nome , telefone , endereco ;
    std :: vector < int > :: reverse_iterator rev_begin = numeros.rend() ;
    std :: vector < int > :: reverse_iterator rev_end = numeros.rbegin() ;

    // Atividade 4.

    std :: cout << "4.Digite uma frase: " ;
    getline( std :: cin , frase ) ;
    
    std :: cout << "Digite uma letra: " ;
    std :: cin >> letra ;
   
    tamanho = frase.length() ;

    for ( i = 0 ; i < tamanho ; i++ )
    {
        if ( frase.at( i ) == letra.at( 0 ) )
        {
            cont++ ;
        }
    }

    std :: cout << "\nA letra " << letra << " apareceu " << cont << " vezes na frase\n\n" ;
    
    system("pause") ;
    system("cls") ;

    // Atividade 5.

    std :: cout << "5.Informe o seu nome: " ;
    getline( std :: cin , nome ) ;
    
    std :: cout << "Informe o seu telefone: " ;
    getline( std :: cin , telefone ) ;
    
    std :: cout << "Informe o seu endereco: " ;
    getline( std :: cin , endereco ) ;
    
    frase = "\nO seu nome eh "            ;
    frase = frase + nome                  ;
    frase = frase + " , seu telefone eh " ;
    frase = frase + telefone              ;
    frase = frase + " e seu endereco eh " ;
    frase = frase + endereco              ;

    std :: cout << frase << "\n\n" ;
    
    system("pause") ;
    system("cls") ;

    // Atividade 6.

    std :: cout << "6.Informe uma frase: " ;
    getline( std :: cin , frase ) ;

    tamanho = frase.length() ;

    std :: cout << "\nFrase ao contrario:\n" ;

    for ( i = tamanho ; i > -1 ; i-- )
    {
        std :: cout << frase[ i ] ;
    }

    std :: cout << "\n\n" ;

    system("pause") ;
    system("cls") ;

    // Atividade 7.

    std :: cout << "7.Informe uma frase: " ;
    getline( std :: cin , frase ) ;
    
    tamanho = frase.length() ;
    
    for ( i = 0 ; i < tamanho ; i++ )
    {
        if ( frase.at( i ) == 'a' || frase.at( i ) == 'e' || frase.at( i ) == 'i' || frase.at( i ) == 'o' || frase.at( i ) == 'u' )
        {
            frase.at( i ) = toupper( frase.at( i ) ) ;
        }
    }
    
    std :: cout << "Frase digitada com vogais em maiusculo:\n" << frase << std :: endl ;
    
    system("pause") ;
    system("cls") ;

    // Atividade 8.

    std :: cout << "8.Informe uma frase: " ;
    getline( std :: cin, frase) ;
    
    std :: cout << "Informe outra frase: " ;
    getline( std :: cin , nome ) ;
   
    if ( frase == nome )
    {
        std :: cout << "\nAs 2 frases sao iguais\n\n" ;
    }

    else
    {
        std :: cout << "\nAs 2 frases nao sao iguais\n\n" ;
    }

    system("pause") ;
    system("cls") ;

    // Atividade 9.
    
    std :: cout << "9.Digite quantos numeros quiser.\nDigite 0 para parar o loop: " ;
        
    while ( std :: cin >> i )
    {
        numeros.push_back( i ) ;

        if ( i == 0 )
        {
            break ;
        }
    }

    numeros.erase( numeros.end() - 1 ) ;

    std :: cout << "\nNumeros digitados:\n\n" ;

    for ( it = numeros.begin() ; it != numeros.end() ; it++ )
    {
        std :: cout << *it << " " ;
    }

    std :: cout << "\n\n" ;

    numeros.clear() ;

    system("pause") ;
    system("cls") ;

    // Atividade 10.

    std :: cout << "10.Digite quantos numeros quiser.\nDigite 0 para parar o loop: " ;
    
    while ( std :: cin >> i )
    {
        numeros.push_back( i ) ;
        
        tamanho++ ;
        
        if ( i == 0 )
        {
            break ;
        }
    }

    numeros.erase( numeros.end() - 1 ) ;
    
    std :: cout << "\nNumeros pares na ordem inversa:\n\n" ;

    for ( rit = numeros.rbegin() ; rit != numeros.rend() ; rit++ )
    {
        std :: cout << *rit << " " ;
    }

    std :: cout << "\n\n" ;

    numeros.clear() ;

    system("pause") ;
    system("cls") ;

    // Atividade 11.
    
    std :: cout << "11.Digite quantos numeros quiser.\nDigite 0 para parar o loop: " ;
    
    while ( std :: cin >> i )
    {
        numeros.push_back( i ) ;

        tamanho++ ;

        if ( i == 0 )
        {
            break ;
        }
    }

    numeros.erase( numeros.end() - 1 ) ;

    std :: cout << "\nNumeros digitados:\n\n" ;

    for ( it = numeros.begin() ; it != numeros.end() ; it++ )
    {
        std :: cout << *it << " " ;
    }

    maior = *max_element( numeros.begin() , numeros.end() ) ;
    menor = *min_element( numeros.begin() , numeros.end() ) ;

    std :: cout << "\n\nMaior numero do vector: " << maior
                << "\nMenor numero do vector: " << menor 
                << "\nMedia aritmetica: " << ( accumulate( numeros.begin() , numeros.end() , 0) / 2 ) << "\n\n" ;
    
    numeros.clear() ;
    
    system("pause") ;
    system("cls") ;

    // Atividade 12.

    std :: cout << "12.Digite quantos numeros quiser.\nDigite 0 para parar o loop: ";
   
    while ( std :: cin >> i )
    {
        numeros.push_back( i ) ;
        
        tamanho++ ;
        
        if ( i == 0 )
        {
            break ;
        }
    }

    numeros.erase( numeros.end() - 1 ) ;

    std :: cout << "\nNumeros pares na ordem inversa:\n\n" ;
   
    for ( it = numeros.end() - 1 ; it != numeros.begin() ; it-- )
    {
        if ( *it % 2 == 0 )
        {
            std :: cout << *it << " " ;
        }
    }

    std :: cout << "\n\nNumeros impares na ordem direta:\n\n" ;

    for ( it = numeros.begin() ; it != numeros.end() ; it++ )
    {
        if ( *it % 2 != 0 )
        {
            std :: cout << *it << " " ;
        }
    }

    std :: cout << "\n\n" ;
    
    numeros.clear() ;
    
    system("pause") ;
    system("cls") ;

    return 0 ;
}
