
#include <iostream>

#include "Guerreiro.h"

int main()
{
    Guerreiro *Leonidas = new Guerreiro() ;

    Leonidas -> setArma  ("Lanca"    ) ;
    Leonidas -> setClasse("Guerreiro") ;

    Leonidas -> setDP    ( 10 ) ;
    Leonidas -> setHP    ( 10 ) ;
    Leonidas -> setMP    ( 10 ) ;

    std :: cout << "\n\n----------------------------\n"
                << "\nClasse: " << Leonidas -> getClasse()
                << "\nArma..: " << Leonidas -> getArma  ()
                << "\nVida..: " << Leonidas -> getDP    ()
                << "\nDano..: " << Leonidas -> getHP    ()
                << "\nMagia.: " << Leonidas -> getMP    () ;

    Leonidas -> afiarEspada() ;
    Leonidas -> treinar    () ;
    Leonidas -> lutar      () ;
    Leonidas -> beber      () ;
    Leonidas -> dormir     () ;

    std :: cout << "\n\n----------------------------\n" ;

    return 0 ;
}
