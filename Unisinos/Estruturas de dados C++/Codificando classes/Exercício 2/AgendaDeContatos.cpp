
#include "AgendaDeContatos.h"

void AgendaDeContatos :: criarContato( Contato *p ) { this -> listaDeContatos.push_back( p ) ; }

void AgendaDeContatos :: listarContatos()
{
    int i = 1 ;

    for ( it = listaDeContatos.begin() ; it != listaDeContatos.end() ; it++ )
    {
        std :: cout << "\n\n---------------------------------------\n"
                    << "\nContato numero " << i
                    << "\n\nTipo.................: " << ( *it ) -> getTipo       ()
                    << "\nNome.................: " << ( *it ) -> getNome       ()
                    << "\nEmail................: " << ( *it ) -> getEmail      ()
                    << "\nEndereco.............: " << ( *it ) -> getEndereco   ()
                    << "\nAniversario..........: " << ( *it ) -> getAniversario() ;

        if ( ( *it ) -> getTipo() == "Cliente" )
        {
            std :: cout << "\nData da ultima compra: " << ( *it ) -> getDataUC       ()
                        << "\nClassificacao........: " << ( *it ) -> getClassificacao() ;
        }
        else if ( ( *it ) -> getTipo() == "Fornecedor" )
        {
            std :: cout << "\nNota.................: " << ( *it ) -> getNota() ;
        }
        i++ ;
    }
    std :: cout << "\n\n---------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}

void AgendaDeContatos :: apagarContato( std :: string nome )
{
    for ( it = listaDeContatos.begin() ; it != listaDeContatos.end() ; it++ )
    {
        if ( ( *it ) -> getNome() == nome )
        {
            delete *it ;

            break ;
        }
    }
}

void AgendaDeContatos :: ConsultarContato( std :: string nome )
{
    for ( it = listaDeContatos.begin() ; it != listaDeContatos.end() ; it++ )
    {
        if ( ( *it ) -> getNome() == nome )
        {
            std :: cout << "\n\n---------------------------------------\n"
                        << "\nTipo.................: " << ( *it ) -> getTipo       ()
                        << "\nNome.................: " << ( *it ) -> getNome       ()
                        << "\nEmail................: " << ( *it ) -> getEmail      ()
                        << "\nEndereco.............: " << ( *it ) -> getEndereco   ()
                        << "\nAniversario..........: " << ( *it ) -> getAniversario() ;

            if ( ( *it ) -> getTipo() == "Cliente" )
            {
                std :: cout << "\nData da ultima compra: " << ( *it ) -> getDataUC       ()
                            << "\nClassificacao........: " << ( *it ) -> getClassificacao() ;
            }
            else if ( ( *it ) -> getTipo() == "Fornecedor" )
            {
                std :: cout << "\nNota.................: " << ( *it ) -> getNota() ;
            }
        }
    }
    std :: cout << "\n\n---------------------------------------\n\n" ;

    system("pause") ; system("cls") ;
}
