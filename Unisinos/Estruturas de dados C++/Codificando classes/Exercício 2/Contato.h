
#ifndef CONTATO_H
#define CONTATO_H

#include <iostream>

class Contato
{
    protected :

        int telefone , nota , diaUC , mesUC , anoUC ;
        std :: string classificacao , nome , email , endereco , aniversario , tipo , dataUC ;

    public :

        void setTipo( std :: string tipo ) ;

        int getTelefone() ;
        int getNota    () ;

        std :: string getDataUC       () ;
        std :: string getClassificacao() ;
        std :: string getTipo         () ;
        std :: string getNome         () ;
        std :: string getEmail        () ;
        std :: string getEndereco     () ;
        std :: string getAniversario  () ;
} ;

#endif
