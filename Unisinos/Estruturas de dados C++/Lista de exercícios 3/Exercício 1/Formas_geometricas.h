
#ifndef FORMAS_GEOMETRICAS_H
#define FORMAS_GEOMETRICAS_H

#include <iostream>

class Formas_geometricas
{
    private :

        float base   ;
        float altura ;

        std :: string tipo ;

    public :

        void imprimir_dados() ;

        float get_base  () const ;
        float get_altura() const ;

        std :: string get_tipo() ;

        void set_tipo( std :: string tipo ) ;

        virtual float calcular_area     () const = 0 ;
        virtual float calcular_perimetro() const = 0 ;

        void set_base_e_altura( float base , float altura ) ;
} ;

#endif
