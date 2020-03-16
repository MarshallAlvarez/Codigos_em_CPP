
#include "Continente.h"

void Continente :: privatizarVector( Continente *c , Paises *p ) { c -> vectorDePaises.push_back( p ) ; }

void Continente :: setMaPo( int maPo ) { this -> maPo = maPo ; }
void Continente :: setMePo( int mePo ) { this -> mePo = mePo ; }
void Continente :: setMaDi( int maDi ) { this -> maDi = maDi ; }
void Continente :: setMeDi( int meDi ) { this -> meDi = meDi ; }

int Continente :: getMaPo() { return this -> maPo ; }
int Continente :: getMePo() { return this -> mePo ; }
int Continente :: getMaDi() { return this -> maDi ; }
int Continente :: getMeDi() { return this -> meDi ; }

void Continente :: setMaPoNome( std :: string maPoNome ) { this -> maPoNome = maPoNome ; }
void Continente :: setMePoNome( std :: string mePoNome ) { this -> mePoNome = mePoNome ; }
void Continente :: setMaDiNome( std :: string maDiNome ) { this -> maDiNome = maDiNome ; }
void Continente :: setMeDiNome( std :: string meDiNome ) { this -> meDiNome = meDiNome ; }

std :: string Continente :: getMaPoNome() { return this -> maPoNome ; }
std :: string Continente :: getMePoNome() { return this -> mePoNome ; }
std :: string Continente :: getMaDiNome() { return this -> maDiNome ; }
std :: string Continente :: getMeDiNome() { return this -> meDiNome ; }
std :: string Continente :: getNomeC   () { return this -> nomeC    ; }

void Continente :: setDensidade       ( float densidade      ) { this -> densidade        = densidade        ; }
void Continente :: setPopulacao       ( int populacao        ) { this -> populacao        = populacao        ; }
void Continente :: setDimensao        ( int dimensao         ) { this -> dimensao         = dimensao         ; }
void Continente :: setRazaoTerritorial( int razaoTerritorial ) { this -> razaoTerritorial = razaoTerritorial ; }

int   Continente :: getPopulacao       () { return this -> populacao        ; }
int   Continente :: getDimensao        () { return this -> dimensao         ; }
int   Continente :: getRazaoTerritorial() { return this -> razaoTerritorial ; }
float Continente :: getDensidade       () { return this -> densidade        ; }

Continente :: Continente( std :: string nomeC ) { this -> nomeC = nomeC ; }

void Continente :: estatizarVector( Continente *c , Paises *p ) { return this -> privatizarVector( c , p ) ; }

int Continente :: retornaMaiorOuMenorDado( Continente *c , int i )
{
    int j = 0 ;

    for ( itP = vectorDePaises.begin() ; itP != vectorDePaises.end() ; itP++ )
    {
        if ( j == 0 )
        {
            c -> setMaPo( ( *itP ) -> getPopulacao() ) ;
            c -> setMePo( ( *itP ) -> getPopulacao() ) ;
            c -> setMaDi( ( *itP ) -> getDimensao () ) ;
            c -> setMeDi( ( *itP ) -> getDimensao () ) ;

            c -> setMaPoNome( ( *itP ) -> getNome() ) ;
            c -> setMePoNome( ( *itP ) -> getNome() ) ;
            c -> setMaDiNome( ( *itP ) -> getNome() ) ;
            c -> setMeDiNome( ( *itP ) -> getNome() ) ;

            c -> setRazaoTerritorial( 0 ) ;
        }
        if ( ( *itP ) -> getPopulacao() > c -> getMaPo() )
        {
            c -> setMaPo    ( ( *itP ) -> getPopulacao() ) ;
            c -> setMaPoNome( ( *itP ) -> getNome     () ) ;
        }
        if ( ( *itP ) -> getPopulacao() < c -> getMePo() )
        {
            c -> setMePo    ( ( *itP ) -> getPopulacao() ) ;
            c -> setMePoNome( ( *itP ) -> getNome     () ) ;
        }
        if ( ( *itP ) -> getDimensao() > c -> getMaDi() )
        {
            c -> setMaDi    ( ( *itP ) -> getDimensao() ) ;
            c -> setMaDiNome( ( *itP ) -> getNome    () ) ;
        }
        if ( ( *itP ) -> getDimensao() < c -> getMeDi() )
        {
            c -> setMeDi    ( ( *itP ) -> getDimensao() ) ;
            c -> setMeDiNome( ( *itP ) -> getNome    () ) ;
        }
        c -> setRazaoTerritorial( c -> getMaDi() - c -> getMeDi() ) ;

        j++ ;
    }
    switch ( i )
    {
        case 1  : std :: cout << c -> getMaPoNome()         ; break ;
        case 2  : std :: cout << c -> getMePoNome()         ; break ;
        case 3  : std :: cout << c -> getMaDiNome()         ; break ;
        case 4  : std :: cout << c -> getMeDiNome()         ; break ;
        case 5  :                c -> getRazaoTerritorial() ; break ;
    }
}
