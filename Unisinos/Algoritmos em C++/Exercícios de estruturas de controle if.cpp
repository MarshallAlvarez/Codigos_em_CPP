
/*
    Linha 30 , Exemplo.
    Linha 43 , Atividade 1: Faca o exemplo imprimir "Parabens , passou direto!" se notaFinal for >= 8.5.
    Linha 61 , Atividade 2: Receba um int e imprima se eh par ou impar.
    Linha 75 , Atividade 3: Receba 2 ints e imprima se o 1º dividido pelo 2º nao gera resto.
    Linha 91 , Atividade 4: Receba 2 ints e imprima se 1º -  2º < 0 ou > 0.
    Linha 107 , Atividade 5: Receba 1 temperatura em ºC , imprima se uma água esta sólida , líquida ou gasosa nessa temperatura.
    Linha 125 , Atividade 6: Receba 1 letra , imprima se eh maiuscula ou minúscula , use a tabela ASCII.
    Linha 143 , Atividade 7: Receba 2 letras , imprima se a 1ª eh igual , vem antes ou depois da 2ª letra , use a tabela ASCII.
    Linha 163 , Atividade 8: Receba 1 horário inicial e 1 final hh:mm:ss , calcule o intervalo entre elas.
    Linha 172 , Atividade 9: Use a formula MRU , distância = velocidade * tempo , receba 3 floats e calcule 1 deles , que deve ser recebido como 0.
    Linha 201 , Atividade 10: Receba 2 pontos , P1( x1 , y1 ) , P2( x2 , y2 ) , e calcule a distancia entre eles com a formula d = raizQuadrada( ( x2 - x1 ) ^ 2 + ( y2 - y1 ) ^ 2 )
    Linha 217 , Atividade 11: Receba a altura e sexo de alguem , calcule seu peso ideal com as formulas:
    
                                                                                                    Homens: 72.7 * h - 58
                                                                                                    Mulheres: 62.1 * h - 44.7 
*/

#include <cmath>
#include <stdio.h>
#include <iostream>

int main() 
{ 
    char letra1 , letra2 ;
    float notaFinal = 6.0 , d , v , t , p1 , p2 ; 
    int numero1 , numero2 , hi , mi , si , hf , mf , sf ;
    
    // Exemplo

    std :: cout << "Exemplo.Nota final: 6.0.\n\n" ;

    if ( notaFinal >= 6.0 && notaFinal < 8.5 )
    { 
        std :: cout << "Grau C para aumentar a nota." ; 
    } 
    else 
    {
        std :: cout << "Grau C para poder passar." ; 
    }

    // Atividade 1.

    std :: cout << "\n\nAtividade 1.Informe sua nota final: " ;
    std :: cin >> notaFinal ;
    
    if ( notaFinal >= 6.0 && notaFinal < 8.5 )
    {
        std :: cout << "\nGrau C para aumentar a nota." ;
    }
    else if ( notaFinal >= 8.5 )
    { 
        std :: cout << "\nParabens , passou direto!" ;
    }
    else
    {
        std :: cout << "\nGrau C para poder passar." ;
    }

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Informe 1 numero: " ;
    std :: cin  >> numero1 ;

    if ( numero1 % 2 == 0 )
    {
         std :: cout << std:: endl << numero1 << " eh par." ;
    }
    else
    {
         std :: cout << std :: endl <<  numero1 << " eh impar." ;
    }

    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;

    if ( numero1 % numero2 == 0 )
    {
        std :: cout << std :: endl << numero1 << " / " << numero2 << " gera resto." ;
    }
    else
    {
        std :: cout << std :: endl << numero1 << " / " << numero2 << " nao gera resto." ;
    }

    // Atividade 4.

    std :: cout << "\n\nAtividade 4.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;

    if ( numero1 - numero2 < 0 )
    {
        std :: cout << std :: endl << numero1 << " - " << numero2 << " gera 1 numero negativo." ;
    }
    else
    {
        std :: cout << std :: endl << numero1 << " - " << numero2 << " gera 1 numero positivo." ;
    }

   // Atividade 5.

    std :: cout << "\n\nAtividade 5.Informe uma temperatura em graus C: " ;
    std :: cin >> numero1 ;

    if ( numero1 <= 0 )
    {
         std :: cout << "\nA agua numa chaleira esta na sua forma solida." ;
    }
    else if ( numero1 >= 1 && numero1 <= 99 )
    {
        std :: cout << "\nA agua numa chaleira esta na sua forma liquida." ;
    }
    else
    {
        std :: cout << "\nA agua numa chaleira esta na sua forma gasosa." ;
    }

    // Atividade 6.

    std :: cout << "\n\nAtividade 6.Informe uma letra: " ;
    std :: cin >> letra1 ;

    if ( letra1 >= 65 && letra1 <= 90 )
    {
        std :: cout << std :: endl << letra1 << " eh Maiuscula." ;
    }
    else if ( letra1 >= 97 && letra1 <= 122 )
    {
         std :: cout << std :: endl << letra1 << " eh minuscula." ;
    }
    else
    {
        std :: cout << std :: endl << letra1 << " nao eh uma letra." ;
    }

    // Atividade 7.

    std :: cout << "\n\nAtividade 7.Informe 2 letras.\n\nLetra 1: " ;
    std :: cin >> letra1 ;
    std :: cout << "Letra 2: " ;
    std :: cin >> letra2 ;
    
    if ( letra1 == letra2 )
    {    
         std :: cout << std :: endl << letra1 << " e " << letra2 << " sao iguais." ; 
    }
    else if ( letra1 < letra2 )
    {
         std :: cout << std :: endl << letra1 << " vem antes de " << letra2 << "." ;
    }
    else if ( letra1 > letra2 )
    {
         std :: cout << std :: endl << letra1 << " vem depois de " << letra2 << "." ;
    }

    // Atividade 8.

    std :: cout << "\n\nAtividade 8.Informe uma hora inicial , formato hh:mm:ss.\n\nHora inicial: " ;
    std :: cin >> hi >> mi >> si ;
    std :: cout << "Hora final: " ;
    std :: cin >> hf >> mf >> sf ; 
    
    std :: cout << "\nIntervalo de tempo: " << hf - hi << ":" << mf - mi << ":" << sf - si << "." ;

    // Atividade 9.

    std :: cout << "\n\nAtividade 9.Calcule um MRU , formula: distancia = velocidade * tempo.\n\nDistancia: " ;
    std :: cin >> d ;
    std :: cout << "Velocidade: " ;
    std :: cin >> v ;
    std :: cout << "Tempo: " ;
    std :: cin >> t ;
    
    if ( d == 0 )
    {
         std :: cout << std :: endl << "d = " << v << " x " << t 
                                    << "\nd = " << v * t ;
    }
    else if ( v == 0 )
    {
        std :: cout << std :: endl << d << " = " << "v x " << t
                    << std :: endl << d << " = " << t << "v\n" 
                                   << d << "/" << t << " = v\n"
                                   << "v = " << d / t ;
    }
    else if ( t == 0)
    {
        std :: cout << std :: endl << d << " = " << v << " x t\n"
                                   << d << " = " << v << "t\n"
                                   << d << "/" << v << " = t\n"
                                   << "t = " << d / v ; 
    }

    // Atividade 10.

    std :: cout << "\n\nAtividade 10.Informe 2 pontos de um plano cartesiano.\n\nPlano 1: " ;
    std :: cin >> p1 ;
    std :: cout << "Plano 2: " ;
    std :: cin >> p2 ;

    t = p2 - p1 ;

    std :: cout << "\nd = raizQuadrada( ( ( p2 - p1 ) ^ 2 ) + ( ( p2 - p1 ) ^ 2 ) )\n" ;
    std :: cout << "\nd = raizQuadrada( ( ( " << p2 << " - " << p1 << " ) ^ 2 ) + ( ( " << p2 << " - " << p1 << " ) ^ 2 ) )\n" ;
    std :: cout << "\nd = raizQuadrada( ( " << p2 -  p1 << " ^ 2 ) + ( " << p2 - p1 << " ^ 2 ) )\n" ;
    std :: cout << "\nd = raizQuadrada( " << pow( t , 2 ) << " + " << pow( t , 2 ) << " )\n" ;
    std :: cout << "\nd = raizQuadrada( " << pow( t , 2 ) + pow( t , 2 ) << " )\n" ;
    std :: cout << "\nd = " << sqrt( pow( t , 2 ) + pow( t , 2 ) ) ;

    // Atividade 11.

    std :: cout << "\n\nInforme o seu sexo , m ou f , e a sua altura.\n\nSexo: " ;
    std :: cin >> letra1 ;
    std :: cout << "Altura: " ;
    std :: cin >> t ;

    if ( letra1 == 'm' )
    {
         std :: cout << "\nPeso ideal: " << 72.7 * t - 58 ;
    }
    else if ( letra1 == 'f' )
    {
        std :: cout << "\nPeso ideal: " << 62.1 * t - 44.7 ;
    }
    else
    {
        std :: cout << "\nSexo invalido." ;
    }
    return 0 ;
}