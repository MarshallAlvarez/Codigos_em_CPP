
#include "Calculadora.h"

Calculadora :: Calculadora( float n1 , char op , float n2 )
{
    std :: cout << "\n\n---------------------------------------\n\n" ;

    switch( op )
    {
        case '+' : std :: cout << n1 << " + " << n2 << " = " << n1 + n2 << " , Modulo: " ; if ( n1 + n2 < 0 ) { std :: cout << ( n1 + n2 ) * - 1 ; } break ;
        case '-' : std :: cout << n1 << " - " << n2 << " = " << n1 - n2 << " , Modulo: " ; if ( n1 - n2 < 0 ) { std :: cout << ( n1 - n2 ) * - 1 ; } break ;
        case '*' : std :: cout << n1 << " * " << n2 << " = " << n1 * n2 << " , Modulo: " ; if ( n1 * n2 < 0 ) { std :: cout << ( n1 * n2 ) * - 1 ; } break ;
        case '/' : std :: cout << n1 << " / " << n2 << " = " << n1 / n2 << " , Modulo: " ; if ( n1 / n2 < 0 ) { std :: cout << ( n1 / n2 ) * - 1 ; } break ;
        default  : std :: cout << "Conta invalida."                              ;
    }
    std :: cout << "\n\n---------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}
