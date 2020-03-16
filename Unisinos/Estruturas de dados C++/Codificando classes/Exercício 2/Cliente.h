#ifndef CLIENTE_H
#define CLIENTE_H


#include "Contato.h"

class Cliente : public Contato
{
    private :

        int dia , mes , ano ;

    public :

        Cliente( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano , int diaUC , int mesUC , int anoUC , int tpClass ) ;
} ;

#endif
