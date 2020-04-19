
#include "Itens.h"

////////////////
//            //
// Construtor //
//            //
////////////////

    Itens :: Itens() { }

/////////////
//         //
// Getters //
//         //
/////////////

    int   Itens :: get_id  () { return this -> id   ; }
    float Itens :: get_peso() { return this -> peso ; }

    std :: string Itens :: get_tipo() { return this -> tipo ; }

/////////////
//         //
// Setters //
//         //
/////////////

    void Itens :: set_id  ( int   id   ) { this -> id   = id   ; }
    void Itens :: set_peso( float peso ) { this -> peso = peso ; }

    void Itens :: set_tipo( std :: string tipo ) { this -> tipo = tipo ; }

