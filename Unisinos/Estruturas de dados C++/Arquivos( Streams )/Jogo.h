
#include <fstream>
#include <iostream>

#include "Itens.h"

class Jogo
{
    private :

        ///////////////
        //           //
        // Atributos //
        //           //
        ///////////////

            int capacidade_atual ;

        ////////////////
        //            //
        // Inventário //
        //            //
        ////////////////

            Itens inventario [ 10 ] ;
            Itens inventario2[ 10 ] ;

    public :

        ////////////////
        //            //
        // Construtor //
        //            //
        ////////////////

            Jogo( int capacidade_atual ) ;

        /////////////
        //         //
        // Getters //
        //         //
        /////////////

                int get_capacidade_atual() ;

        /////////////
        //         //
        // Setters //
        //         //
        /////////////

                void set_capacidade_atual( int capacidade_atual ) ;

        ////////////////////////////////////
        //                                //
        // Método pra settar o inventario //
        //                                //
        ////////////////////////////////////

                void settar_inventario() ;

        //////////////////////////////////////////
        //                                      //
        // Método pra por um item no inventario //
        //                                      //
        //////////////////////////////////////////

            void add_ao_inventario() ;

        /////////////////////////////////////////
        //                                     //
        // Método pra tirar item do inventario //
        //                                     //
        /////////////////////////////////////////

                void usar_item() ;

        /////////////////////////////////////////////
        //                                         //
        // Método pra consultar item do inventario //
        //                                         //
        /////////////////////////////////////////////

            void consultar_item() ;

        ///////////////////////////////////////////////////////////////////
        //                                                               //
        // Métodos pra salvar e carregar o inventário em arquivo binário //
        //                                                               //
        ///////////////////////////////////////////////////////////////////

            void salvar_inventario  () ;
            void carregar_inventario() ;

        //////////////////////////////////////////////////////////
        //                                                      //
        // Método pra imprimir atributos dum item do inventário //
        //                                                      //
        //////////////////////////////////////////////////////////

            void imprime_dados( int i ) ;
} ;
