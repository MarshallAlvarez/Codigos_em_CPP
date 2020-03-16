
#include "Planeta.h"

void Planeta :: addPaisNoVector ( Paises* p ) { this -> vectorDePaises.push_back( p ) ; }

void Planeta :: imprimirDados( std :: string CodigoISO )
{
    int i = 0 ;

    for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++ )
    {
        if ( ( *itP ) -> getCodigoISO() == CodigoISO )
        {
            std :: cout << "\n\n-----------------------------"
                        << "\n\nNumero no arquivo: " << ( *itP ) -> getNumero      ()
                        << "\nNome do Pais.....: "   << ( *itP ) -> getNome        ()
                        << "\nCodigo ISO 3166-1: "   << ( *itP ) -> getCodigoISO   ()
                        << "\nPopulacao........: "   << ( *itP ) -> getPopulacao   ()
                        << "\nDimensoes........: "   << ( *itP ) -> getDimensao    ()
                        << "\nQt. de vizinhos..: "   << ( *itP ) -> getContVizinhos()
                        << "\n\n-----------------------------"
                        << "\n\nLista de vizinhos:\n\n" ;

            ( *itP ) -> imprimirVizinhos( ( *itP ) ) ;

            i = 1 ;
        }
    }
    if ( i == 0 )
    {
        std :: cout << "\n\n-------------------------------------------------------"
                    << "\n\nNao ha nenhum pais com o codigo " << CodigoISO << " na lista de paises."
                    << "\n\n-------------------------------------------------------\n\n" ;
    }
    system("pause") ;
    system("cls"  ) ;
}

void Planeta :: salvaDados()
{
    std :: fstream fs      ( "Paises.txt" , std :: iostream :: out | std :: iostream :: trunc ) ;
                   fs.close(                                                                  ) ;
                   fs.open ( "Paises.txt" , std :: iostream :: out | std :: iostream :: trunc ) ;

    if ( fs.is_open() )
    {
        fs << "\n\n------------------------------------------------------------------------------\n"
           << "Numero\tCodigo\tNome\tPopulacao\tDimensao\tQuantidade de vizinhos\t\n"
           << "------------------------------------------------------------------------------\n" ;

        for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++ )
        {
            fs << ( *itP ) -> serializarPais() ;

            ( *itP ) -> mandarVizinhosParaArquivo() ;

            fs << "\n------------------------------------------------------------------------------\n" ;
        }
        fs.close() ;
    }
    else
    {
        std :: cout << "\n\n--------------------------------"
                    << "\n\nNao foi possivel abrir o arquivo"
                    << "\n\n--------------------------------\n\n" ;

        system("pause") ;
        system("cls"  ) ;
    }
}

bool Planeta :: veSePaisExiste( std :: string nome )
{
    for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++ )
    {
        if ( ( *itP ) -> getNome() == nome  )
        {
            return true ;
        }
    }
}

void Planeta :: lerArquivo()
{
    std :: ifstream ifs ;
    std :: string linha ;

    ifs.open( "Paises.txt" ) ;

    if ( ifs.is_open() )
    {
        while ( getline( ifs , linha ) )
        {
            std :: cout << linha << std :: endl ;
        }
    }
    else
    {
        std :: cout << "\n\n--------------------------------"
                    << "\n\nNao foi possivel abrir o arquivo"
                    << "\n\n--------------------------------\n" ;
    }
    std :: cout << std :: endl ;

    system("pause") ;
    system("cls"  ) ;

    ifs.close() ;
}

bool Planeta :: fazemFronteira( std :: string nome , std :: string nome2 )
{
    for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++  )
    {
        if ( ( *itP ) -> getNome() == nome )
        {
            ( *itP ) -> varrerVectorVizinhos( nome2 ) ;

            break ;
        }
        else if ( ( *itP ) -> getNome() == nome2 )
        {
            ( *itP ) -> varrerVectorVizinhos( nome ) ;

            break ;
        }
    }
}

void Planeta :: vizinhosEmComum( std :: string nome , std :: string nome2 )
{
    for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++  )
    {
        if ( ( *itP ) -> getNome() == nome )
        {
            for ( itP2 = vectorDePaises.begin() ; itP2 != vectorDePaises.end() ; itP2++  )
            {
                if ( ( *itP2 ) -> getNome() == nome2 )
                {
                    ( *itP ) -> imprimeVizinhosEmComum( ( *itP2 ) ) ;

                    break ;
                }
            }
        }
    }
}
