
/*    
    Linha 32 , Atividade 1: Receba 1 numero de 1-7 e mostre o dia da semana , se eh util , fim de semana ou invalido.
    Linha 49 , Atividade 2: Receba 1 numero de 1-12 imprima o mes , semestre , dias e estacao.
    Linha 71 , Atividade 3: Receba um sexo , M/F ou m/f e , imprima-o por extenso.
    Linha 85 , Atividade 4: Digite uma conta com 2 floats " 1 + 1 , 2.3 * 2 , 5 - 2.7 , 9.3 / 2.4 " imprima o resultado , cada conta deve ser um case diferente.
    Linha 99 , Atividade 5: O menu duma lancheria é:   ____________________________________                                            
                                                    |                                  |
                                                    | Item            Codigo  Preco    |
                                                    |__________________________________|                                                    
                                                    |                                  |
                                                    | Cachorro quente 100     R$ 5, 50 | 
                                                    | Bauru simples   101     R$ 6, 20 |
                                                    | Bauru com ovo   102     R$ 7, 80 |
                                                    | Hamburguer      103     R$ 5, 90 |
                                                    | Cheeseburguer   104     R$ 6, 80 |
                                                    | Refrigerante    105     R$ 3, 70 |
                                                    | Suco natural    106     R$ 4, 25 |                                  
                                                    |__________________________________|

    Receba o codigo e quantidade do item e imprima o valor total a ser pago.
*/

#include <iostream>
#include <bits/stdc++.h>
int main()
{ 
    int opcao ; 
    char valor ;
    float n1 , n2 ;
    
    // Atividade 1.

    std :: cout << "Atividade 1.Digite um numero de 1-7: " ;
    std :: cin >> opcao ; 
    
    switch ( opcao ) 
    { 
         case 1 : std :: cout << "\nDomingo." ; break ; 
         case 2 : std :: cout << "\nSegunda-feira." ; break ; 
         case 3 : std :: cout << "\nTerca-feira." ; break ;
         case 4 : std :: cout << "\nQuarta-feira." ; break ; 
         case 5 : std :: cout << "\nQuinta-feira." ; break ;
         case 6 : std :: cout << "\nSexta-feira." ; break ;  
         case 7 : std :: cout << "\nSabado." ; break ;
         default : std :: cout << "\nOpcao invalida" ;  
    }

    // Atividade 2.

    std :: cout << "\n\nAtividade 2.Digite um numero de 1-12: " ;
    std :: cin >> opcao ;

    switch ( opcao )
    {
         case 1 : std :: cout << "\nJaneiro\n31 dias\nPrimeiro semestre\nVerao"; break ;
         case 2 : std :: cout << "\nFevereiro\n28 dias\nPrimeiro semestre\nVerao" ; break ;
         case 3 : std :: cout << "\nMarco\n31 dias\nPrimeiro semestre\nOutono" ; break ;
         case 4 : std :: cout << "\nAbril\n30 dias\nPrimeiro semestre\nOutono" ; break ;
         case 5 : std :: cout << "\nMaio\n31 dias\nPrimeiro semestre\nOutono" ; break ;
         case 6 : std :: cout << "\nJunho\n30 dias\nPrimeiro semestre\nInverno" ; break ;
         case 7 : std :: cout << "\nJulho\n31 dias\nSegundo semestre\nInverno" ; break ;
         case 8 : std :: cout << "\nAgosto\n31 dias\nSegundo semestre\nInverno" ; break ; 
         case 9 : std :: cout << "\nSetembro\n30 dias\nSegundo semestre\nPrimavera" ; break ;
         case 10 : std :: cout << "\nOutubro\n31 dias\nSegundo semestre\nPrimavera" ; break ;
         case 11 : std :: cout << "\nNovembro\n30 dias\nSegundo semestre\nPrimavera" ; break ;
         case 12 : std :: cout << "\nDezembro\n31 dias\nSegundo semestre\nVerao" ; break ;
         default : std :: cout << "\nOpcao invalida" ;
    }

    // Atividade 3.

    std :: cout << "\n\nAtividade 3.Informe um sexo , M/F ou m/f , Sexo: " ;
    std :: cin >> valor ;

    switch ( valor )
    {
         case 'M': std :: cout << "\nMasculino" ; break ;
         case 'm': std :: cout << "\nMasculino" ; break ; 
         case 'F': std :: cout << "\nFeminino" ; break ;
         case 'f': std :: cout << "\nFeminino" ; break ;
         default : std :: cout << "\nSexo invalido" ; break ;
    }

    // Atividade 4.

    std :: cout << "\n\nAtividade 4.Digite uma conta , numero operador numero.\n\nConta: " ;
    std :: cin >> n1 >> valor >> n2 ;

    switch ( valor )
    {
         case '+' : std :: cout << std :: endl << n1 << ' ' << valor << ' ' << n2 << " = " << n1 + n2 ; break ;
         case '-' : std :: cout << std :: endl << n1 << ' ' << valor << ' ' << n2 << " = " << n1 - n2 ; break ;
         case '*' : std :: cout << std :: endl << n1 << ' ' << valor << ' ' << n2 << " = " << n1 * n2 ; break ;
         case '/' : std :: cout << std :: endl << n1 << ' ' << valor << ' ' << n2 << " = " << n1 / n2 ; break ;
         default : std :: cout << "\nConta invalida" ;
    }

    // Atividade 5.

    std :: cout << "\n\nMenu de uma lancheria , informe o codigo e quantidade do que quer comprar.\n\n" 
                << "____________________________________\n"
                << "|                                  |\n"
                << "| Item            Codigo  Preco    |\n"
                << "|__________________________________|\n"
                << "|                                  |\n"
                << "| Cachorro quente 100     R$ 5, 50 |\n"
                << "| Bauru simples   101     R$ 6, 20 |\n"
                << "| Bauru com ovo   102     R$ 7, 80 |\n"
                << "| Hamburguer      103     R$ 5, 90 |\n"
                << "| Cheeseburguer   104     R$ 6, 80 |\n"
                << "| Refrigerante    105     R$ 3, 70 |\n"
                << "| Suco natural    106     R$ 4, 25 |\n"
                << "|__________________________________|\n\nCodigo: " ;
    std :: cin >> opcao ; 
    std :: cout << "Quantidade: " ;
    std :: cin >> n1 ;

    switch ( opcao )
    {
         case 100 : std :: cout << std :: endl << n1 << " Cachorros quentes , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 5.50 ; break ;
         case 101 : std :: cout << std :: endl << n1 << " Baurus simples , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 6.20 ; break ;
         case 102 : std :: cout << std :: endl << n1 << " Baurus com ovo , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 7.80 ; break ;
         case 103 : std :: cout << std :: endl << n1 << " Hamburguer , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 5.90 ; break ;
         case 104 : std :: cout << std :: endl << n1 << " Cheeseburguer , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 6.80 ; break ;
         case 105 : std :: cout << std :: endl << n1 << " Refrigerantes , preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 3.70 ; break ;
         case 106 : std :: cout << std :: endl << n1 << " Sucos naturais, preco: " << std :: fixed << std :: setprecision( 2 ) << n1 * 4.25 ; break ;
         default : std :: cout << "\nCodigo invalido" ;
    }
    return 0 ;
}
