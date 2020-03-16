
#include "Mago.h"
#include "Guerreiro.h"

void Guerreiro :: setForca     ( int forca          ) { this -> forca      = forca      ; }
void Guerreiro :: setIdade     ( int idade          ) { this -> idade      = idade      ; }
void Guerreiro :: setTipoAtaque( int escolaMagia    ) { this -> tipoAtaque = tipoAtaque ; }
void Guerreiro :: setNome      ( std :: string nome ) { this -> nome       = nome       ; }

int Guerreiro :: getForca         () { return this -> forca      ; }
int Guerreiro :: getIdade         () { return this -> idade      ; }
int Guerreiro :: getTipoAtaque    () { return this -> tipoAtaque ; }
std :: string Guerreiro :: getNome() { return this -> nome       ; }

void Guerreiro :: andar()
{
    std :: cout << "\n\nO mago-guerreiro " << getNome() << " andou." ;
}

void Guerreiro :: atacar()
{
    std :: cout << "\nO mago-guerreiro " << getNome() << " atacou." ;
}
