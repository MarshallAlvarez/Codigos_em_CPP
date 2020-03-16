
#include "Geral.h"

Geral :: Geral( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano )
{
    this -> nome        = nome                        ;
    this -> email       = email                       ;
    this -> telefone    = telefone                    ;
    this -> endereco    = endereco                    ;
    this -> aniversario = dia + '/' + mes + '/' + ano ;
}
