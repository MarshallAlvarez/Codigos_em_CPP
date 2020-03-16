
#include "Guerreiro.h"

void Guerreiro :: setHP ( int HP ) { this -> HP = HP ; }
void Guerreiro :: setDP ( int DP ) { this -> DP = DP ; }
void Guerreiro :: setMP ( int MP ) { this -> MP = MP ; }

int Guerreiro :: getHP() { return this -> HP ; }
int Guerreiro :: getDP() { return this -> DP ; }
int Guerreiro :: getMP() { return this -> MP ; }

void Guerreiro :: setArma  ( std :: string arma   ) { this -> arma   = arma   ; }
void Guerreiro :: setClasse( std :: string classe ) { this -> classe = classe ; }

std :: string Guerreiro :: getArma  () { return this -> arma   ; }
std :: string Guerreiro :: getClasse() { return this -> classe ; }

void Guerreiro :: afiarEspada() { std :: cout << "\n\nO " << getClasse() << " afiou sua lanca." ; }
void Guerreiro :: lutar      () { std :: cout <<   "\nO " << getClasse() << " lutou."           ; }
void Guerreiro :: treinar    () { std :: cout <<   "\nO " << getClasse() << " treinou."         ; }
void Guerreiro :: beber      () { std :: cout <<   "\nO " << getClasse() << " bebeu."           ; }
void Guerreiro :: dormir     () { std :: cout <<   "\nO " << getClasse() << " dormiu."          ; }
