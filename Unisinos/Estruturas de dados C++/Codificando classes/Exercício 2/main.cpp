
#include <cstdlib>
#include <iostream>

#include "Geral.h"
#include "Cliente.h"
#include "Contato.h"
#include "Fornecedor.h"
#include "AgendaDeContatos.h"

// Obj de controle usado:

    AgendaDeContatos *Agenda = new AgendaDeContatos() ;

// Variavel global usada:

    std :: string nome ;

void opcao1Menu()
{
    std :: string email , endereco ;
    int dia , diaUC , mes , mesUC , ano , anoUC , telefone , tipo , tpClass , nota ;

    std :: cout << "\n\n--------------------------"
                << "\n\nInforme o nome do contato."
                << "\n\n--------------------------\n\nNome: " ;
    getline( std :: cin , nome ) ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    std :: cout << "\n\n------------------------------------------"
                << "\n\nInforme qual das opcoes abaixo contato eh."
                << "\n\n------------------------------------------"
                << "\n\n1.Geral."
                << "\n2.Cliente."
                << "\n3.Fornecedor."
                << "\n\n------------------------------------------\n\nOpcao: " ;
    std :: cin >> tipo ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    std :: cout << "\n\n---------------------------"
                << "\n\nInforme o email do contato."
                << "\n\n---------------------------\n\nEmail: " ;
    getline( std :: cin , email ) ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;


    std :: cout << "\n\n------------------------------"
                << "\n\nInforme o telefone do contato."
                << "\n\n------------------------------\n\nTelefone: " ;
    std :: cin >> telefone ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    std :: cout << "\n\n------------------------------"
                << "\n\nInforme o endereco do contato."
                << "\n\n------------------------------\n\nEndereco: " ;
    getline( std :: cin , endereco ) ; fflush( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    std :: cout << "\n\n--------------------------------"
                << "\n\nInforme quando o contato nasceu."
                << "\n\n--------------------------------\n\n"

                << "Dia: " ; std :: cin >> dia ; fflush( stdin ) ;
    std :: cout << "Mes: " ; std :: cin >> mes ; fflush( stdin ) ;
    std :: cout << "Ano: " ; std :: cin >> ano ; fflush( stdin ) ;

    switch ( tipo )
    {
        case 1 :
        {
            Geral *g = new Geral( nome , email , telefone , endereco , dia , mes , ano ) ;

            g -> setTipo( "Geral" ) ;

            Agenda -> criarContato( g ) ;
        }
        break ;

        case 2 :
        {
            std :: cout << "\n\n" ;

            system("pause") ; system("cls") ;

            std :: cout << "\n\n-----------------------------------------------"
                        << "\n\nInforme a data da sua ultima compra do cliente."
                        << "\n\n-----------------------------------------------\n\n"

                        << "Dia: " ; std :: cin >> diaUC ; fflush( stdin ) ;
            std :: cout << "Mes: " ; std :: cin >> mesUC ; fflush( stdin ) ;
            std :: cout << "Ano: " ; std :: cin >> anoUC ; fflush( stdin ) ;

            std :: cout << "\n\n" ;

            system("pause") ; system("cls") ;

            std :: cout << "\n\n----------------------------------------------------------------"
                        << "\n\nClassifique o contato do cliente de acordo com a sua fidelidade."
                        << "\n\n----------------------------------------------------------------"
                        << "\n\n1.Fiel."
                        << "\n2.Frequente."
                        << "\n3.Pouco frequente."
                        << "\n4.Apenas uma vez."
                        << "\n\n----------------------------------------------------------------\n\nClassificacao: " ;
            std :: cin >> tpClass ; fflush( stdin ) ;

            Cliente *c = new Cliente( nome , email , telefone , endereco , dia , mes , ano , diaUC , mesUC , anoUC , tpClass ) ;

            c -> setTipo( "Cliente" ) ;

            Agenda -> criarContato( c ) ;
        }
        break ;

        case 3 :
        {
            std :: cout << "\n\n" ;

            system("pause") ; system("cls") ;

            std :: cout << "\n\n--------------------------------------------------------------"
                        << "\n\nNuma escala de 1-10 , que nota o contato do fornecedor merece?"
                        << "\n\n--------------------------------------------------------------\n\nNota: " ;
            std :: cin >> nota ; fflush( stdin ) ;

            if      ( nota < 1  ) { nota = 1  ; }
            else if ( nota > 10 ) { nota = 10 ; }

            Fornecedor *f = new Fornecedor( nome , email , telefone , endereco , dia , mes , ano , nota ) ;

            f -> setTipo( "Fornecedor" ) ;

            Agenda -> criarContato( f ) ;
        }
        break ;

        default :
        {
            Geral *g = new Geral( nome , email , telefone , endereco , dia , mes , ano ) ;

            g -> setTipo( "Geral" ) ;

            Agenda -> criarContato( g ) ;
        }
    }
    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    std :: cout << "\n\n------------------------------------------------"
                << "\n\nO contato de " << nome << " foi criado."
                << "\n\n------------------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}

void opcao2Menu()
{
    std :: cout << "\n\n--------------------------"
                << "\n\nInforme o nome do contato."
                << "\n\n--------------------------\n\nNome: " ;
    getline( std :: cin , nome ) ;

    system("pause") ; system("cls") ;

    Agenda -> apagarContato( nome ) ;

    std :: cout << "\n\n----------------------------------------------------"
                << "\n\nO contato de " << nome << " foi apagado."
                << "\n\n----------------------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}

void opcao3Menu()
{
    Agenda -> listarContatos() ;
}

void opcao4Menu()
{
    std :: cout << "\n\n--------------------------"
                << "\n\nInforme o nome do contato."
                << "\n\n--------------------------\n\nNome: " ;
    getline( std :: cin , nome ) ; fflush ( stdin ) ;

    std :: cout << "\n\n" ;

    system("pause") ; system("cls") ;

    Agenda -> ConsultarContato( nome ) ;
}

void opcao5Menu()
{
    std :: cout << "\n\n----------------------"
                << "\n\nVoce saiu do programa."
                << "\n\n----------------------\n\n" ;
}

int menu()
{
    int i ;

    while ( 1 )
    {
        std :: cout << "\n\n----------Menu----------\n"
                    << "\n1.Adicionar contato."
                    << "\n2.Excluir contato."
                    << "\n3.Listar contato."
                    << "\n4.Consultar um contato."
                    << "\n5.Sair."
                    << "\n\n--------------------------\n\nOpcao escolhida: " ;
        std :: cin >> i ; fflush( stdin ) ;

        std :: cout << "\n\n" ;

        system("pause") ; system("cls") ;

        switch( i )
        {
            case 1  : opcao1Menu() ;            break ;
            case 2  : opcao2Menu() ;            break ;
            case 3  : opcao3Menu() ;            break ;
            case 4  : opcao4Menu() ;            break ;
            case 5  : opcao5Menu() ; return 0 ; break ;

            default : std :: cout << "\n\n-------------------------"
                                  << "\n\nOpcao informada invalida."
                                  << "\n\n-------------------------\n\n" ;

                      system("pause") ; system("cls") ;
        }
    }
}

int main()
{
    menu() ;

    return 0 ;
}
