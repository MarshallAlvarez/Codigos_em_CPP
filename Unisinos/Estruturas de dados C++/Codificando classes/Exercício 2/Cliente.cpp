
#include "Cliente.h"

Cliente :: Cliente( std :: string nome , std :: string email , int telefone , std :: string endereco , int dia , int mes , int ano , int diaUC , int mesUC , int anoUC , int tpClass )
{
    this -> nome     = nome     ;
    this -> email    = email    ;
    this -> telefone = telefone ;
    this -> endereco = endereco ;

    this -> dataUC      = diaUC + '/' + mesUC + '/' + anoUC ;
    this -> aniversario = dia   + '/' + mes   + '/' + ano   ;

    switch( tpClass )
    {
        case 1  : classificacao = "Fiel"            ; break ;
        case 2  : classificacao = "Frequente"       ; break ;
        case 3  : classificacao = "Pouco frequente" ; break ;
        case 4  : classificacao = "Apenas uma vez"  ; break ;
        default : classificacao = "Apenas uma vez"  ;
    }
}
