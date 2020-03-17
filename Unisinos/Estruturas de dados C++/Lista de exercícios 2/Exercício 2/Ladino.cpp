
#include "Ladino.h"

void Ladino :: assltar    ( Ladino *l ) { std :: cout << "\n\n"      << l -> getNome() << " assaltou."      ; }
void Ladino :: acrobacia  ( Ladino *l ) { std :: cout << std :: endl << l -> getNome() << " fez acrobacia." ; }
void Ladino :: investigar ( Ladino *l ) { std :: cout << std :: endl << l -> getNome() << " investigou."    ; }
void Ladino :: assassinar ( Ladino *l ) { std :: cout << std :: endl << l -> getNome() << " assassinou."    ; }
void Ladino :: seDispersar( Ladino *l ) { std :: cout << std :: endl << l -> getNome() << " se dispersou."  ; }
