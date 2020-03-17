
#include "Humano.h"

void Humano :: setHP( int HP ) { this -> HP = HP ; }
void Humano :: setDP( int DP ) { this -> DP = DP ; }
void Humano :: setMP( int MP ) { this -> MP = MP ; }

void Humano :: setLevel( int level ) { this -> level = level ; }

void Humano :: setArma  ( std :: string arma   ) { this -> arma   = arma   ; }
void Humano :: setClasse( std :: string classe ) { this -> classe = classe ; }
void Humano :: setNome  ( std :: string nome   ) { this -> nome   = nome   ; }

int Humano :: getHP() { return this -> HP ; }
int Humano :: getDP() { return this -> DP ; }
int Humano :: getMP() { return this -> MP ; }

int Humano :: getLevel() { return this -> level ; }

std :: string Humano :: getNome  () { return this -> nome   ; }
std :: string Humano :: getArma  () { return this -> arma   ; }
std :: string Humano :: getClasse() { return this -> classe ; }

void Humano :: addJogador( Humano *h ) { this -> listaDeJogadores.push_back( h ) ; }

void Humano :: imprimeDados()
{
    std :: cout << "\n--------------------------------\n" ;

    for ( it = listaDeJogadores.begin() ; it != listaDeJogadores.end() ; it++ )
    {
        std :: cout << "\nNome..: " << ( *it ) -> getNome  ()
                    << "\nClasse: " << ( *it ) -> getClasse()
                    << "\nArma..: " << ( *it ) -> getArma  ()
                    << "\nNivel.: " << ( *it ) -> getLevel ()
                    << "\nVida..: " << ( *it ) -> getHP    ()
                    << "\nDano..: " << ( *it ) -> getDP    ()
                    << "\nMagia.: " << ( *it ) -> getMP    ()

                    << "\n\n--------------------------------\n" ;
    }
}

void Humano :: settar()
{
    for ( it = listaDeJogadores.begin() ; it != listaDeJogadores.end() ; it++ )
    {
        ( *it ) -> setHP( 10 ) ;
        ( *it ) -> setDP( 10 ) ;
        ( *it ) -> setMP( 10 ) ;

        ( *it ) -> setLevel ( 100 ) ;
    }
}
