#ifndef FORNECEDOR_H
#define FORNECEDOR_H


#include "Contato.h"

class Fornecedor : public Contato
{
    public :

        Fornecedor( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano , int nota ) ;
} ;

#endif
