
#include "Guerreiro.h"

void Guerreiro :: lutar    ( Guerreiro *l ) { std :: cout << "\n\n"      << l -> getNome() << " lutou."          ; }
void Guerreiro :: beber    ( Guerreiro *l ) { std :: cout << std :: endl << l -> getNome() << " bebeu."          ; }
void Guerreiro :: morrer   ( Guerreiro *l ) { std :: cout << std :: endl << l -> getNome() << " morreu."         ; }
void Guerreiro :: treinar  ( Guerreiro *l ) { std :: cout << std :: endl << l -> getNome() << " treinou."        ; }
void Guerreiro :: afiarArma( Guerreiro *l ) { std :: cout << std :: endl << l -> getNome() << " afiou sua arma." ; }

void Guerreiro :: furia         ( Guerreiro *b ) { std :: cout << "\n\n"      << b -> getNome() << " ficou furioso."                  ; }
void Guerreiro :: matar         ( Guerreiro *b ) { std :: cout << std :: endl << b -> getNome() << " matou."                          ; }
void Guerreiro :: reviver       ( Guerreiro *b ) { std :: cout << std :: endl << b -> getNome() << " reviveu."                        ; }
void Guerreiro :: retaliar      ( Guerreiro *b ) { std :: cout << std :: endl << b -> getNome() << " retaliou."                       ; }
void Guerreiro :: instintoPrimal( Guerreiro *b ) { std :: cout << std :: endl << b -> getNome() << " agarrou seus instintos primais." ; }

void Guerreiro :: rezar      ( Guerreiro *s ) { std :: cout << "\n\n"      << s -> getNome() << " rezou."                    ; }
void Guerreiro :: heroismo   ( Guerreiro *s ) { std :: cout << std :: endl << s -> getNome() << " usou seu heroismo."        ; }
void Guerreiro :: vitalidade ( Guerreiro *s ) { std :: cout << std :: endl << s -> getNome() << " regenerou sua vitalidade." ; }
void Guerreiro :: auraDaVida ( Guerreiro *s ) { std :: cout << std :: endl << s -> getNome() << " recebeu a aura da vida."   ; }
void Guerreiro :: favorDivino( Guerreiro *s ) { std :: cout << std :: endl << s -> getNome() << " recebeu um favor divino.\n\n"  ; }
