
#include "Paises.h"

void Paises :: setPopulacao       ( int populacao           ) { this -> populacao        = populacao        ; }
void Paises :: setDimensao        ( int dimensao            ) { this -> dimensao         = dimensao         ; }
void Paises :: setContVizinhos    ( int contVizinhos        ) { this -> contVizinhos     = contVizinhos     ; }
void Paises :: setNumero          ( int numero              ) { this -> numero           = numero           ; }
void Paises :: setNome            ( std :: string nome      ) { this -> nome             = nome             ; }
void Paises :: setCodigoISO       ( std :: string CodigoISO ) { this -> CodigoISO        = CodigoISO        ; }

int Paises :: getPopulacao          () { return this -> populacao        ; }
int Paises :: getDimensao           () { return this -> dimensao         ; }
int Paises :: getContVizinhos       () { return this -> contVizinhos     ; }
int Paises :: getNumero             () { return this -> numero           ; }
std :: string Paises :: getNome     () { return this -> nome             ; }
std :: string Paises :: getCodigoISO() { return this -> CodigoISO        ; }

std :: string Paises :: serializarPais()
{
    std :: stringstream ss ;

    ss << this -> numero       << '\t'
       << this -> CodigoISO    << '\t'
       << this -> nome         << '\t'
       << this -> populacao    << '\t'
       << this -> dimensao     << '\t'
       << this -> contVizinhos << '\t' ;

    return ss.str() ;
}

void Paises :: addVizinho( Paises* pv ) { this -> vectorDeVizinhos.push_back( pv ) ; }

void Paises :: imprimirVizinhos( Paises *p )
{
    for ( itPV = vectorDeVizinhos.begin() ; itPV != vectorDeVizinhos.end() ; itPV++ )
    {
        std :: cout << ( *itPV ) -> getNome() << std :: endl ;
    }
    std :: cout << "\n--------------------------\n\n" ;
}

void Paises :: mandarVizinhosParaArquivo()
{
    std :: fstream fs ;

    for ( itPV = vectorDeVizinhos.begin() ; itPV != vectorDeVizinhos.end() ; itPV++ )
    {
        fs << ( *itPV ) -> getNome() << '\t' ;
    }
}

bool Paises :: varrerVectorVizinhos( std :: string nome )
{
    for ( itPV = vectorDeVizinhos.begin() ; itPV != vectorDeVizinhos.end() ; itPV++ )
    {
        if ( ( *itPV ) -> getNome() == nome )
        {
            return true ;
        }
    }
}

void imprimeVizinhosEmComum( Paises *p )
{
    for ( itPV = vectorDeVizinhos.begin() ; itPV != vectorDeVizinhos.end() ; itPV++ )
    {
        for ( itPV2 = vectorDeVizinhos.begin() ; itPV2 != vectorDeVizinhos.end() ; itPV2++ )
        {
            if ( ( *itPV ) -> getNome() == ( *itPV2 ) -> getNome() )
            {
                std :: cout << ( *itPV ) -> getNome() ;
            }
        }
    }
}
