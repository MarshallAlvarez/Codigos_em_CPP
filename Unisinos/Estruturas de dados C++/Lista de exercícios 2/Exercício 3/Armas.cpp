
#include "Armas.h"

Armas :: Armas( int ID , std :: string nome , float peso , int penteAtual , int pente )
{
    this -> ID    = ID    ;
    this -> nome  = nome  ;
    this -> peso  = peso  ;
    this -> pente = pente ;

    this -> penteAtual = penteAtual ;
}

void Armas :: setPenteAtual( int penteAtual ) { this -> penteAtual = penteAtual ; }

int Armas :: getPeso      () { return this -> peso       ; }
int Armas :: getPente     () { return this -> pente      ; }
int Armas :: getPenteAtual() { return this -> penteAtual ; }

void Armas :: dadosArmas()
{
    std :: cout << "\n\nID.....: " << getID   ()
                <<   "\nArma...: " << getNome ()
                <<   "\nCura...: " << getPeso () << "kg"
                <<   "\nPente..: " << getPenteAtual() << '/' << getPente() ;
}
