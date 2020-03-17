
#include "Sacerdote.h"

void Sacerdote :: rezar          ( Sacerdote *s ) { std :: cout << "\n\n"      << s -> getNome() << " rezou."                   ; }
void Sacerdote :: purificar      ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " purificou."               ; }
void Sacerdote :: projecaoAstral ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " fez uma projecao astral." ; }
void Sacerdote :: armaEspiritual ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " fez uma arma astral."     ; }
void Sacerdote :: removerMaldicao( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " removeu uma maldicao."    ; }

void Sacerdote :: reviver        ( Sacerdote *s ) { std :: cout << "\n\n"      << s -> getNome() << " reviveu."             ; }
void Sacerdote :: drenarVida     ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " drenou vida."         ; }
void Sacerdote :: toqueDaMorte   ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " usou toque da morte." ; }
void Sacerdote :: ergam_seMortos ( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " ergue os mortos."     ; }
void Sacerdote :: controlarMortos( Sacerdote *s ) { std :: cout << std :: endl << s -> getNome() << " controlou mortos."    ; }
