
/*
    Atividade: Faca um menu para mostrar o contracheque dum trabalhador: 

                                    Linha 70 , Opcao 1.Receba quanto alguem ganha por hora.
                                    Linha 83 , Opcao 2.Recebe quantas horas ele trabalhou no mês. 
                                    Linha 96 , Opcao 3.Imprime seu salario bruto. 
                                    Linha 116 , Opcao 4.Imprime quanto pagou ao INSS , ( 11% do salario bruto ).  
                                    Linha 127 , Opcao 5.Imprime quanto pagou ao sindicato ( 2% do salario bruto. 
                                    Linha 138 , Opcao 6.Imprime o salario liquido. 
                                    Linha 158 , Opcao 7.Sair.

    Se nao for informado nem o valor por hora ou horas trabalhadas deve dizer que nao ha dados suficientes.
*/

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

float ganhoPorHora = 0 , horasTrabalhadas = 0 , salarioBruto = 0 , INSS = 0 , sindicato = 0 , salarioLiquido = 0 ; 

void Opcao1() ;
void Opcao2() ;
void Opcao3() ;
void Opcao4() ;
void Opcao5() ;
void Opcao6() ;
void Opcao7() ;
 
int main()
{
    int opcao ;

    while ( 1 ) 
    {
        std::cout << "--------------------Menu--------------------"
                  << "\n\nOpcao 1.Informar ganho por hora."
                  << "\nOpcao 2.Informar horas trabalhadas no mes."
                  << "\nOpcao 3.Ver seu salario bruto."
                  << "\nOpcao 4.Ver quanto pagou ao INSS."
                  << "\nOpcao 5.Ver quanto pagou ao sindicato."
                  << "\nOpcao 6.Ver seu salario liquido."
                  << "\nOpcao 7.Sair." 
                  << "\n\n--------------------------------------------\n\nOpcao escolhida: " ;
        std :: cin >> opcao ;

        system("pause") ;
        system("cls") ;
    
        switch ( opcao )
        {
            case 1 : Opcao1() ; break ;
            case 2 : Opcao2() ; break ;
            case 3 : Opcao3() ; break ;
            case 4 : Opcao4() ; break ;
            case 5 : Opcao5() ; break ;
            case 6 : Opcao6() ; break ;
            case 7 : Opcao7() ; return 0 ; break ;
           
            default : std :: cout << "---------------"
                                 << "\n\nOpcao invalida."
                                 << "\n\n---------------" ;
                        system("pause") ;
                        system("cls") ;
            break ;
        }
    }
}

void Opcao1()
{
    std :: cout << "-----------------------------------"
                << "\n\nInforme quanto voce ganha por hora." 
                << "\n\n-----------------------------------\n\nGanho por hora: " ;
    std :: cin >> ganhoPorHora ;
    
    std :: cout << std :: endl ;

    system("pause") ;
    system("cls") ;
}

void Opcao2() 
{
    std::cout << "\n\n-----------------------------------------------"
              << "\n\nInforme quantas horas voce trabalhou nesse mes. " 
              << "\n\n-----------------------------------------------\n\nHoras trabalhadas: " ;
    std :: cin >> horasTrabalhadas ;

    std :: cout << std :: endl ;

    system("pause") ;
    system("cls") ;
}

void Opcao3() 
{
    salarioBruto = ganhoPorHora * horasTrabalhadas ;
    
    if ( ganhoPorHora == 0 || horasTrabalhadas == 0 )
    {
        std :: cout << "-------------------------"
                    << "\n\nNao ha dados suficientes." 
                    << "\n\n-------------------------\n\n" ;
    }
    else
    {
        std :: cout << "-----------------"
                    << "\n\nSalario Bruto: R$" << std :: fixed << std :: setprecision( 2 ) << salarioBruto
                    << "\n\n-----------------\n\n" ;
    }
    system("pause") ;
    system("cls") ;
}

void Opcao4()
{
    INSS = salarioBruto * 11 / 100 ;

    std :: cout << "----------------------"
                << "\n\nVoce pagou ao INSS: R$" << std :: fixed << std :: setprecision( 2 ) << INSS
                << "\n\n----------------------\n\n" ;
    system("pause") ;
    system("cls") ;
}

void Opcao5()
{
    sindicato = salarioBruto * 2 / 100 ;

    std :: cout << "---------------------------"
                << "\n\nVoce pagou ao sindicato: R$" << std :: fixed << std :: setprecision( 2 ) << sindicato
                << "\n\n--------------------------\n\n" ;
    system("pause") ;
    system("cls") ;
}

void Opcao6()
{
    salarioLiquido = salarioBruto - ( INSS + sindicato ) ;

    if ( ganhoPorHora == 0 || horasTrabalhadas == 0 )
    {
        std :: cout << "-------------------------"
                    << "\n\nNao ha dados suficientes."
                    << "\n\n-------------------------\n\n" ;
    }
    else
    {
    std :: cout << "-------------------"
                << "\n\nSalario liquido: R$" << std :: fixed << std :: setprecision( 2 ) << salarioLiquido
                << "\n\n-------------------\n\n" ;
    }    
    system("pause") ;
    system("cls") ;
}

void Opcao7()
{
    std :: cout << "-------------------"
                << "\n\nSaindo do programa."
                << "\n\n-------------------\n\n" ;
}
