
/*
    Linha 23 , Atividade 1: Informe uma conta , " 1 + 1 , 2.3 * 2 , 5 - 2.7 , 9.3 / 2.4 " imprima o resultado , cada conta dever ser um switch case que chama uma funcao 
    e retorna o resultado pro main.
    Linha 30 , Atividade 2: Faca uma funcao que recebe um int como parametro e devolve 1 se for positivo ou 0 se for negativo para o main.
    Linha 36 , Atividade 3: Faça uma funcao que representa uma bhaskara , use a funcao da atividade 2 para ver se o delta eh positivo ou nao , devolver o resultado ao main.
*/

// Declaracao das funcoes

float funcaoAtividade1( float n1 , char op , float n2 ) ;
float funcaoAtividade2( float x ) ;
void funcaoAtividade3( float a , float b , float c ) ;

#include <cmath>
#include <iostream>

int main()
{
    char op ;
    float a , b , c , x1 , x2 ;

    // Atividade 1.

    std :: cout << "Atividade 1.Informe uma conta , numero , operador , numero , conta: " ;
    std :: cin >> x1 >> op >> x2 ;

    std :: cout << std :: endl << x1 << ' ' << op << ' ' << x2 << " = " << funcaoAtividade1( x1 , op , x2 ) ;

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Informe um numero , se receber 1 o numero eh positivo , 0 eh negativo: " ;
    std :: cin >> x1 ;
    std :: cout << std :: endl << "\nNumero: " << funcaoAtividade2( x1 ) ;

    // Atividade 3.
    
    std :: cout << "\n\nAtividade 3.Informe a raiz a , b e c de uma bhaskara.\n\nA: " ;
    std :: cin >> a ;
    std :: cout << "B: " ;
    std :: cin >> b ;
    std :: cout << "C: " ;
    std :: cin >> c ;
    
    funcaoAtividade3( a , b , c ) ;

    return 0 ;
}

// Funcao atividade 1

float funcaoAtividade1( float n1 , char op , float n2 )
{
    switch ( op )
    {
        case '+' : return n1 + n2; break ;
        case '-' : return n1 - n2; break ;
        case '*' : return n1 * n2; break ;
        case '/' : return n1 / n2; break ;
        default : std :: cout << "\nConta invalida" ;
    }
}

// Funcao atividade 2

float funcaoAtividade2( float x )
{
    if ( x > 0 )
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

// Funcao atividade 3

void funcaoAtividade3( float a , float b , float c )
{
    float delta , xI , xII ;
    
    delta = sqrt( ( b * b ) + ( ( - 4 * a ) * c ) ) ;
    xI = ( - b + delta ) / ( 2 * a ) ;
    xII = ( - b - delta ) / ( 2 * a ) ;
    
    std :: cout << "\nx1: " << xI << "\nx2: " << xII 
                << "\n\n1 = Delta Positivo\n0 = Delta negativo\nDelta eh: " << funcaoAtividade2( delta ) << "\n\n" ;
}
