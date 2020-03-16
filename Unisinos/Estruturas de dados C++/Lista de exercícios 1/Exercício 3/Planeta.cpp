
#include "Paises.h"
#include "Planeta.h"

void Planeta :: addContinenteNoVector ( Continente *c ) { this -> vectorDeContinentes.push_back( c ) ; }

void Planeta :: imprimirDados()
{
    for ( itC = vectorDeContinentes.begin() ; itC != vectorDeContinentes.end() ; itC++ )
    {
        std :: cout <<    "\n\n-----------------------------------------"
                    <<    "\n\nContinente....................: " << ( *itC ) -> getNomeC    ()
                    <<    "\nPopulacao.....................: "   << ( *itC ) -> getPopulacao()
                    <<    "\nDimensoes.....................: "   << ( *itC ) -> getDimensao ()

                    << " km2\nDensidade.....................: " << std :: fixed << std :: setprecision( 6 ) << ( *itC ) -> getDensidade() ;

        std :: cout << " km2\nPais de maior populacao.......: " ;  ( *itC ) -> retornaMaiorOuMenorDado( ( *itC ) , 1 ) ;
        std :: cout <<     "\nPais de menor populacao.......: " ;  ( *itC ) -> retornaMaiorOuMenorDado( ( *itC ) , 2 ) ;
        std :: cout <<     "\nPais de maior dimensao........: " ;  ( *itC ) -> retornaMaiorOuMenorDado( ( *itC ) , 3 ) ;
        std :: cout <<     "\nPais de menor dimensao........: " ;  ( *itC ) -> retornaMaiorOuMenorDado( ( *itC ) , 4 ) ;
        std :: cout <<     "\nRazao entre maior e menor pais: " << ( *itC ) -> retornaMaiorOuMenorDado( ( *itC ) , 5 ) ;
    }
    std :: cout << "\n\n-----------------------------------------\n\n" ;

    system("pause") ;
    system("cls"  ) ;
}

void Planeta :: addPaisNoVector( Paises *p , std :: string nomeC )
{
    for ( itC = vectorDeContinentes.begin() ; itC != vectorDeContinentes.end() ; itC++ )
    {
        if ( ( *itC ) -> getNomeC() == nomeC )
        {
            ( *itC ) -> estatizarVector( ( *itC ) , p ) ;
        }
    }
}

bool Planeta :: continenteExiste( std :: string nome )
{
    for ( itC = vectorDeContinentes.begin() ; itC != vectorDeContinentes.end() ; itC++ )
    {
        if ( ( *itC ) -> getNomeC() == nome )
        {
            return true ;
        }
    }
}

void Planeta :: aumentaPopulacao( int populacao , std :: string nome )
{
    for ( itC = vectorDeContinentes.begin() ; itC != vectorDeContinentes.end() ; itC++ )
    {
        if ( ( *itC ) -> getNomeC() == nome )
        {
            ( *itC ) -> setPopulacao( ( *itC ) -> getPopulacao() + populacao ) ;
        }
    }
}

void Planeta :: aumentaDensidade( std :: string nomeC )
{
    for ( itC = vectorDeContinentes.begin() ; itC != vectorDeContinentes.end() ; itC++ )
    {
        if ( ( *itC ) -> getNomeC() == nomeC )
        {
            ( *itC ) -> setDensidade( ( *itC ) -> getPopulacao() / ( *itC ) -> getDimensao() ) ;
        }
    }
}
