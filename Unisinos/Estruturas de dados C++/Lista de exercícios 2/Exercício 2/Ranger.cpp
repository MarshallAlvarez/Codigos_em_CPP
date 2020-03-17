
#include "Ranger.h"


void Ranger :: cacar       ( Ranger *r ) { std :: cout << "\n\n"      << r -> getNome() << " cacou."                ; }
void Ranger :: mirar       ( Ranger *r ) { std :: cout << std :: endl << r -> getNome() << " mirou."                ; }
void Ranger :: atirar      ( Ranger *r ) { std :: cout << std :: endl << r -> getNome() << " atirou."               ; }
void Ranger :: recarregar  ( Ranger *r ) { std :: cout << std :: endl << r -> getNome() << " recarregou."           ; }
void Ranger :: porArmadilha( Ranger *r ) { std :: cout << std :: endl << r -> getNome() << " armou uma armadilha."  ; }
