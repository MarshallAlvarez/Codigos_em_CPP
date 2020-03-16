
/* 
    Linha 20 , Atividade 1: Receba 2 floats e imprima a soma deles.
    Linha 28 , Atividade 2: Receba 2 floats e imprima a subtracao deles.
    Linha 36 , Atividade 3: Receba 2 floats e imprima a multiplicacao deles.
    Linha 44 , Atividade 4: Receba 2 floats e imprima a divisao deles.
    Linha 52 , Atividade 5: Receba uma temperatura em graus ºC , converta para ºF com a formula " F = C * 1.8 + 32 ".
    Linha 58 , Atividade 6: Receba uma temperatura em graus ºF , converta para ºC com a formula " C = (F -32) / 1.87 ".
    Linha 64 , Atividade 7: Receba uma velocidade km/h , converta para m/s
    Linha 70 , Atividade 8: Receba o preco e o % de desconto de um calcado , calcule o valor final do calcado.
*/

#include <cstdio> 
#include <iostream>

int main()
{
    float numero1 , numero2 ;

    // Atividade 1.
    
    std :: cout << "Atividade 1.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;
    std :: cout << "Soma: " << numero1 << " + " << numero2 << " = " << numero1 + numero2 ;

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;
    std :: cout << "Subtracao: " << numero1 << " - " << numero2 << " = " << numero1 - numero2 ;

    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;
    std :: cout << "Multiplicacao: " << numero1 << " x " << numero2 << " = " << numero1 * numero2 ;

    // Atividade 4.

    std :: cout << "\n\nAtividade 4.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> numero1 ;
    std :: cout << "Numero 2: " ;
    std :: cin >> numero2 ;
    std :: cout << "Divisao: " << numero1 << " / " << numero2 << " = " << numero1 / numero2 ;

    // Atividade 5.

    std :: cout << "\n\nAtividade 5.Informe uma temperatura em graus Celsius: " ;
    std :: cin >> numero1 ;
    std :: cout << "\nTemperatura em graus Fahrenheit: " << ( numero1 * 1.8 ) + 32 ;

    // Atividade 6.

    std :: cout << "\n\nAtividade 6.Informe uma temperatura em graus Fahrenheit: " ;
    std :: cin >> numero2 ;
    std :: cout << "\nTemperatura em graus Celsius: " << ( numero2 - 32 ) / 1.8 ;

    // Atividade 7.

    std :: cout << "\n\nAtividade 7.Informe uma velocidade em km/h: " ;
    std :: cin >> numero1 ;
    std :: cout << "\nVelocidade em m/s: " << numero1 * 1000 << "m/s" ;

    // Atividade 8.

    std :: cout << "\n\nAtividade 8.Informe o valor de um calcado e o percentual de desconto.\n\nValor: " ;
    std :: cin >> numero1 ;
    std :: cout << "Desconto: " ;
    std :: cin >> numero2 ;
    std :: cout << "\nValor com desconto: R$" << ( numero1 * numero2 ) / 100 << "\n\n" ;
    
    return 0 ;
}
