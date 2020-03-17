
#include "Bardo.h"

void Bardo :: tocar      ( Bardo *b ) { std :: cout << "\n\n"      << b -> getNome() << " tocou musica." ; }
void Bardo :: cantar     ( Bardo *b ) { std :: cout << std :: endl << b -> getNome() << " cantou."       ; }
void Bardo :: seduzir    ( Bardo *b ) { std :: cout << std :: endl << b -> getNome() << " seduziu."      ; }
void Bardo :: acharMagia ( Bardo *b ) { std :: cout << std :: endl << b -> getNome() << " achou magia."  ; }
void Bardo :: seDisfarcar( Bardo *b ) { std :: cout << std :: endl << b -> getNome() << " se disfarcou." ; }
