
/* 
    Linha 25 , Atividade 1: Imprima seu primeiro nome.
    Linha 29 , Atividade 2: Imprima sua idade com um int.
    Linha 33 , Atividade 3: Imprima sua altura , em m , com um float.
    Linha 37 , Atividade 4: Imprima este desenho " ******** " com 4 comandos e depois com 1.
    Linha 45 , Atividade 5 , 6 e 7: Receba e imprima o dia , mes e ano de nascimento do usuario.
    Linha 55 , Atividade 8: Converta um char para um int de acordo com a tabela ASCII.
    Linha 61 , Atividade 9: Converta um número entre 32 e 255 de acordo com a tabela ASCII.
    Linha 67 , Atividade 10: Imprima um float como um int e depois com 3 casas decimais.
    Linha 74 , Atividade 11: Receba um char que representa uma moeda e um float que representa um valor , imprima o valor com 2 casas decimais.
    Linha 82 , Atividade 12: Receba 3 floats e os imprima com 2 casas decimais.
*/

#include <iostream>
#include <bits/stdc++.h>

int main()
{
    char caracter ;
    int dia , mes , ano , idade = 19 ;
    std :: string texto ;
    float numeroFracionario1 , numeroFracionario2 , numeroFracionario3 ;

    // Atividade 1.

    std :: cout << "Atividade 1.\n\nNome: Marcelo."

    // Atividade 2.        

                << "\nAtividade 2.Idade: " << idade

    // Atividade 3.    

                << "\nAtividade 3.Altura: 1.72."

    // Atividade 4.

                << "\n\nAtividade 4.\n\n********"
                << "\n********"
                << "\n********"
                << "\n********"
                << "\n\n********\n********\n********\n********" ;

    // Atividade 5 , 6 e 7.

    std :: cout << "\n\nAtividade 5 , 6 e 7.Informe o quando voce nasceu.\n\nDia: " ; 
    std :: cin >> dia ;
    std :: cout << "Mes: " ;
    std :: cin >> mes ;
    std :: cout << "Ano: " ;
    std :: cin >> ano ;
    std :: cout << "\nData de nascimento: " << dia << "/" << mes << "/" << ano ;

    // Atividade 8.

    std :: cout << "\n\nAtividade 8.Informe uma letra: " ;
    std :: cin >> caracter;
    printf( "\nLetra convertida com a tabela ASCII: %d" , caracter ) ;

    // Atividade 9.

    std :: cout << "\n\nAtividade 9.Informe um numero entre 32 e 255: " ;
    std :: cin >> dia ;
    printf ( "\nNumero convertido com a tabela ASCII: %c" , dia ) ;

    // Atividade 10.

    std :: cout << "\n\nAtividade 10.Informe um numero fracionario: " ;
    std :: cin >> numeroFracionario1 ;
    std :: cout << "\nNumero convertido com 3 casas decimais : " << std :: fixed << std :: setprecision( 3 ) << numeroFracionario1
        << "\nNumero covertido para inteiro: " << std :: fixed << std :: setprecision( 3 ) << numeroFracionario1 ;

    // Atividade 11.

    std :: cout << "\n\nAtividade 11.Informe um valor em dinheiro.\n\nValor fracionario: " ;
    getline ( std :: cin , texto ) ;
    std :: cout << "Valor: ";
    std :: cin >> numeroFracionario1 ;
    std :: cout << "\nValor monetario: " << texto << std :: fixed << std :: setprecision( 2 ) << numeroFracionario1 ;

    // Atividade 12.

    std :: cout << "\n\nAtividade 12.Digite 3 numeros fracionarios." ;
    std :: cout << "\n\nNumero fraionario 1 : " ;
    std :: cin >> numeroFracionario1 ;
    std :: cout << "Numero fraionario 2 : " ;
    std :: cin >> numeroFracionario2 ;
    std :: cout << "Numero fraionario 3 : " ;
    std :: cin >> numeroFracionario3 ;
    std :: cout << "\nNumero fraionario 1 : " << std :: fixed << std :: setprecision( 2 ) << numeroFracionario1
                << "\nNumero fraionario 2 : " << std :: fixed << std :: setprecision( 2 ) << numeroFracionario2
                << "\nNumero fraionario 3 : " << std :: fixed << std :: setprecision( 2 ) << numeroFracionario3 << "\n\n" ;
    return 0 ;
}
