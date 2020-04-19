
#include <iostream>

class Itens
{
    private :

        ////////////////
        //            //
        // Atributos  //
        //            //
        ////////////////

            int id     ;
            float peso ;

            std :: string tipo ;

    public :

        ////////////////
        //            //
        // Construtor //
        //            //
        ////////////////

            Itens() ;

        /////////////
        //         //
        // Getters //
        //         //
        /////////////

                int   get_id  () ;
                float get_peso() ;

                std :: string get_tipo() ;

        /////////////
        //         //
        // Setters //
        //         //
        /////////////

            void set_id  ( int   id   ) ;
            void set_peso( float peso ) ;

            void set_tipo( std :: string tipo ) ;
} ;

