
#include "Mago.h"

void Mago :: trovoada     ( Mago *m ) { std :: cout << std :: endl << m -> getNome() << " usou trovoada."        ; }
void Mago :: chuvaAcida   ( Mago *m ) { std :: cout << std :: endl << m -> getNome() << " usou chuva acida."     ; }
void Mago :: raioDeGelo   ( Mago *m ) { std :: cout << std :: endl << m -> getNome() << " usou raio de gelo."    ; }
void Mago :: bolaDeFogo   ( Mago *m ) { std :: cout << std :: endl << m -> getNome() << " usou bola de fogo."    ; }
void Mago :: rajadaDeVento( Mago *m ) { std :: cout << std :: endl << m -> getNome() << " usou rajada de vento." ; }


void Mago :: rezar    ( Mago *c ) { std :: cout << "\n\n"      << c -> getNome() << " rezou."; }
void Mago :: curar    ( Mago *c ) { std :: cout << std :: endl << c -> getNome() << " curou."; }
void Mago :: reviver  ( Mago *c ) { std :: cout << std :: endl << c -> getNome() << " reviveu."; }
void Mago :: exorcizar( Mago *c ) { std :: cout << std :: endl << c -> getNome() << " exorcizou."; }
void Mago :: regenerar( Mago *c ) { std :: cout << std :: endl << c -> getNome() << " regenerou."; }
