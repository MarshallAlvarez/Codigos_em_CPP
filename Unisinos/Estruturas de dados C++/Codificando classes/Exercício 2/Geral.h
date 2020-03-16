#ifndef GERAL_H
#define GERAL_H

#include "Contato.h"

class Geral : public Contato
{
    public :

        Geral( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano ) ;
} ;

#endif
