
#include "Fornecedor.h"

Fornecedor :: Fornecedor( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano , int nota )
{
    this -> nota        = nota                        ;
    this -> nome        = nome                        ;
    this -> email       = email                       ;
    this -> telefone    = telefone                    ;
    this -> endereco    = endereco                    ;
    this -> aniversario = dia + '/' + mes + '/' + ano ;
}
