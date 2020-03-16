
#ifndef AGENDADECONTATOS_H
#define AGENDADECONTATOS_H

#include <vector>
#include <iostream>

#include "Contato.h"

class AgendaDeContatos
{
    private :

        std :: vector < Contato* > :: iterator it ;
        std :: vector < Contato* > listaDeContatos ;

    public :

        void listarContatos() ;

        void criarContato( Contato *p ) ;

        void apagarContato   ( std :: string nome ) ;
        void ConsultarContato( std :: string nome ) ;
} ;

#endif
