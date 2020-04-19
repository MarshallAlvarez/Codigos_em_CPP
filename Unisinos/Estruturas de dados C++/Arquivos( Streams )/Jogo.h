
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
        // Invent�rio //
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
        // M�todo pra settar o inventario //
        //                                //
        ////////////////////////////////////

                void settar_inventario() ;

        //////////////////////////////////////////
        //                                      //
        // M�todo pra por um item no inventario //
        //                                      //
        //////////////////////////////////////////

            void add_ao_inventario() ;

        /////////////////////////////////////////
        //                                     //
        // M�todo pra tirar item do inventario //
        //                                     //
        /////////////////////////////////////////

                void usar_item() ;

        /////////////////////////////////////////////
        //                                         //
        // M�todo pra consultar item do inventario //
        //                                         //
        /////////////////////////////////////////////

            void consultar_item() ;

        ///////////////////////////////////////////////////////////////////
        //                                                               //
        // M�todos pra salvar e carregar o invent�rio em arquivo bin�rio //
        //                                                               //
        ///////////////////////////////////////////////////////////////////

            void salvar_inventario  () ;
            void carregar_inventario() ;

        //////////////////////////////////////////////////////////
        //                                                      //
        // M�todo pra imprimir atributos dum item do invent�rio //
        //                                                      //
        //////////////////////////////////////////////////////////

            void imprime_dados( int i ) ;
} ;
