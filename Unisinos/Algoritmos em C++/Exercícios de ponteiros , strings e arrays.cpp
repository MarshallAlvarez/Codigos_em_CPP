
/*
    Linha , Atividade 1: Faça um programa que declare 4 arrays(char, short int, int e float) com 5 elementos cada.Inicialize os vetores com os valores 65, 66, 67, 68 e 69. Depois, liste o endereço e o conteúdo de cada elemento dos arrays.Observe os valores e endereços impressos
    Linha , Atividade 2: Desenvolva o método “void ajustaTexto(char* txtIN)” que recebe um texto como referência e garanta que somente a primeira letra desse texto seja maiúscula e as demais sejam minúsculas.Retorne o texto ajustado para o chamador no mesmo parâmetro de entrada
    Linha , Atividade 3: Converta o método desenvolvido anteriormente para uma função, para que devolva o texto como uma string sem modificar o parâmetro de entrada.Ex: “char * ajustaTexto(char* txtIN)”
    Linha , Atividade 4: Escreva um método void que recebe como parâmetro um ponteiro “A” com 10 inteiros armazenados nele.O método deve alterar o valor de cada posição multiplicando - os por 2. Os valores alterados devem ser impressos por um comando fora do método
    Linha , Atividade 5: Escreva um método que recebe um array de inteiros e retorne o elemento de maior valor e o elemento de menor valor.O método deve retornar os dois valores ao “main()”, onde devem ser impressos na tela
    Linha , Atividade 6: Crie um array “A” com “n” inteiros, onde “n” é um valor inteiro fornecido pelo usuário.O vetor só deve ser alocado na memória depois que o usuário fornecer o valor de “n”.Alimente esse vetor com os primeiros “n” múltiplos de 10 e imprima na tela
*/

#include <string>
#include <ctype.h>
#include <iostream>
#include <bits/stdc++.h>

void ajustaTexto( char* txtlN  ) ;
char* ajustaTexto3(char* txtlN ) ;
void multiplicaPor2( int*  pA  ) ;
void menorMaior(     int*  pA  ) ;

char txtlNString[ 1000 ] ;
int i , tamanho , maior , menor ;

int main()
{
    char texto[ 1000 ] ;
    int j = 65 , A[ 10 ] ;
    char       C[ 5 ] , *pC  ;
    short int SI[ 5 ] , *pSI ;
    int        I[ 5 ] , *pI  ;
    float      F[ 5 ] , *pF  ;

    // Atividade 1.

    std :: cout << "1.\n----------------------------------------" 
                << "\nEndereco\tConteudo\tVariavel" 
                << "\n----------------------------------------\n" ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        C[ i ] = j ;
        pC = &C[ i ] ;
        
        std :: cout << pC << "  \t   " << C[ i ] << "     \t  char\n" ;
        
        j++ ;
    }

    j = 65 ;

    std :: cout << "1.\n----------------------------------------"
                << "\nEndereco\tConteudo\tVariavel"
                << "\n----------------------------------------\n" ;

    for ( i = 0 ; i < 5 ; i++ )
    {
        SI[ i ] = j ;
        pSI = &SI[ i ] ;
        
        std :: cout << pSI << "            " << SI[ i ] << "  \t       short int\n" ;
        
        j++ ;
    }

    j = 65 ;

    std :: cout << "1.\n----------------------------------------"
                << "\nEndereco\tConteudo\tVariavel"
                << "\n----------------------------------------\n" ;
    for ( i = 0 ; i < 5 ; i++ )
    {
        I[ i ] = j ;
        pI = &I[ i ] ;
        
        std :: cout << pI << "            " << I[ i ] << "  \t\t  int\n" ;
        
        j++ ;
    }

    j = 65 ;

    std :: cout << "1.\n----------------------------------------"
                << "\nEndereco\tConteudo\tVariavel"
                << "\n----------------------------------------\n" ;
    for ( i = 0 ; i < 5 ; i++ )
    {
        F[ i ] = j ;
        pF = &F[ i ] ;

        std :: cout << pF << "  \t   " << std :: fixed << std :: setprecision( 0 ) << F[ i ] << "  \t\t float\n" ;

        j++ ;
    }

    std :: cout << "----------------------------------------" 
                << "\n\n2.Digite um texto qualquer: " ;
    fgets( texto , 1000 , stdin ) ;
    
    ajustaTexto( texto ) ;
    
    std :: cout << "Texto digitado: " ;
    
    puts( texto ) ;

    std :: cout << "\n3.Digite um texto qualquer: " ;
    fgets( texto , 1000 , stdin ) ;
    
    std :: cout << "Texto arrumado: " ;
    
    puts( ajustaTexto3( texto ) ) ;

    std :: cout << "\n\n4.Digite 10 numeros: " ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cin >> A[ i ] ;
    }

    multiplicaPor2( A ) ;

    std :: cout << "Array: " ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cout << "  " << A[ i ] << " " ;
    }

    std :: cout << "\n\n5.Digite 10 numeros: " ;
    
    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cin >> A[ i ] ;
    }

    std :: cout << "Array: " ;

    for ( i = 0 ; i < 10 ; i++ )
    {
        std :: cout << "  " << A[ i ] << " " ;
    }

    menorMaior( A ) ;

    std :: cout << "\nMaior valor: " << maior << "\nMenor valor: " << menor 
                
                << "\n\n6.Digite o tamanho do array: " ;
    std :: cin >> tamanho ;
   
    int B[ tamanho ] ;
   
    j = 1 ;
     
    for ( i = 0 ; i < tamanho ; i++ )
    {
        B[ i ] = j * 10 ;

        std :: cout << "Multiplo de 10 numero " << i << ": = " << B[ i ] << std :: endl ;
        
        j++ ;
    }

    return 0 ;
}

void ajustaTexto( char* txtlN )
{
    txtlN[ 0 ] = toupper( txtlN[ 0 ] ) ;
    for ( i = 1 ; i < strlen( txtlN ) + 1 ; i++ )
    {
        txtlN[ i ] = tolower( txtlN[ i ] ) ;
    }
}

char* ajustaTexto3( char* txtlN )
{
    char* txtlNString = ( char* ) malloc( strlen( txtlN ) ) ;
    
    txtlNString[ 0 ] = toupper( txtlN[ 0 ] ) ;
    
    for ( i = 1 ; i < strlen( txtlN ) + 1 ; i++ )
    {
        txtlNString[ i ] = tolower( txtlN[ i ] ) ;
    }

    return txtlNString ;
}

void multiplicaPor2( int* pA )
{
    for ( i = 0 ; i < 10 ; i++ )
    {
        *pA *= 2 ;
        *( pA++ ) ;
    }
}

void menorMaior( int* pA )
{
    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( i == 0 )
        {
            maior = pA[ i ] ;
            menor = pA[ i ] ;
        }

        if ( pA[ i ] > maior )
        {
            maior = pA[ i ] ;
        }

        if ( pA[ i ] < menor )
        {
            menor = pA[ i ] ;
        }
    }
}

