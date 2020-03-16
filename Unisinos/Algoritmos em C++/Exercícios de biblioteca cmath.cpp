
/*
    Linha 18 , Atividade 1: Receba o raio de 1 círculo e imprima seu diâmetro , circunferência e área.
    Linha 26 , Atividade 2: Receba a altura e largura de 1 retângulo e imprima seu perímetro e área.
    Linha 35 , Atividade 3: Receba a base e altura de 1 triângulo e imprima sua área.
    Linha 43 , Atividade 4: Receba 2 números e imprima a potencia do primeiro pelo segundo.
    Linha 51 , Atividade 5: Receba 2 catetos de 1 triângulo e imprima sua hipotenusa , área , perímetro , seno , cosseno e tangente.
*/

#include <cmath>
#include <cstdio> 
#include <iostream>

int main()
{
    float raio , base , altura , hipotenusa ;

    // Atividade 1.

    std :: cout << "Atividade 1.Informe o raio de um circulo: " ;
    std :: cin >> raio ;
    std :: cout << "\nArea: " << ( raio * raio ) * 3.14
                << "\nDiametro: " << 2 * raio
                << "\nCircunferencia: " << 2 * 3.14 * raio ;

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Informe a altura e a largura de um retangulo.\n\nAltura: " ;
    std :: cin >> altura ;
    std :: cout << "Base: " ;
    std :: cin >> base ;
    std :: cout << "\nArea: " << base * altura
                << "\nPerimetro: " << ( base * 2 ) + ( altura * 2 ) ;

    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Informe a base e a altura de um triangulo.\n\nAltura: " ;
    std :: cin >> altura ;
    std :: cout << "Base: " ;
    std :: cin >> base ;
    std :: cout << "\nArea: " << ( base * altura ) / 2 ;

    // Atividade 4.

    std :: cout << "\n\nAtividade 4.Informe 2 numeros.\n\nNumero 1: " ;
    std :: cin >> altura ;
    std :: cout << "Numero 2: " ;
    std :: cin >> base ;
    std :: cout << "\nPotencia do numero 1 pelo numero 2: " << pow( altura , base ) ;

    // Atividade 5.

    std :: cout << "\n\nAtividade 5.Informe 2 catetos.\n\nCateto oposto: " ;
    std :: cin >> altura ;
    std :: cout << "Cateto adjacente: " ;
    std :: cin >> base ;

    hipotenusa = sqrt( ( altura * altura ) + ( base * base ) ) ;

    std :: cout << "\nArea: " << ( base * altura ) / 2
                << "Seno: " << altura / hipotenusa
                << "\nCosseno: " << base / hipotenusa
                << "\nTangente: " << altura / base
                << "\nPerimetro: " << base + altura + hipotenusa
                << "\nHipotenusa: " << hipotenusa ;
    return 0 ;
}