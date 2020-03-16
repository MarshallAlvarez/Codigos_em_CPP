
#include "Contato.h"

void Contato :: setTipo( std :: string tipo ) { this -> tipo = tipo ; }

int Contato :: getTelefone() { return this -> telefone ; }
int Contato :: getNota    () { return this -> nota     ; }

std :: string Contato :: getNome         () { return this -> nome        ; }
std :: string Contato :: getTipo         () { return this -> tipo        ; }
std :: string Contato :: getEmail        () { return this -> email       ; }
std :: string Contato :: getEndereco     () { return this -> endereco    ; }
std :: string Contato :: getAniversario  () { return this -> aniversario ; }
std :: string Contato :: getDataUC       () { return this -> dataUC        ; }
std :: string Contato :: getClassificacao() { return this -> classificacao ; }
