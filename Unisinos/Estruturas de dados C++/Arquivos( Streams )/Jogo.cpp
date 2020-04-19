
#include "Jogo.h"

////////////////
//            //
// Construtor //
//            //
////////////////

    Jogo :: Jogo( int capacidade_atual ) { this -> capacidade_atual = capacidade_atual ; }

/////////////
//         //
// Getters //
//         //
/////////////

    int Jogo :: get_capacidade_atual() { return this -> capacidade_atual ; }

/////////////
//         //
// Setters //
//         //
/////////////

    void Jogo :: set_capacidade_atual( int capacidade_atual ) { this -> capacidade_atual = capacidade_atual ; }

////////////////////////////////////
//                                //
// Método pra settar o inventario //
//                                //
////////////////////////////////////

void Jogo :: settar_inventario()
{
    for ( int i = 0 ; i < 10 ; i++ )
    {
        Itens item ;

        item.set_id  ( 0 ) ;
        item.set_peso( 0 ) ;

        item.set_tipo( "Nenhum" ) ;

        inventario[ i ] = item ;
    }
}

//////////////////////////////////////////
//                                      //
// Método pra por um item no inventario //
//                                      //
//////////////////////////////////////////

void Jogo :: add_ao_inventario()
{
    if ( get_capacidade_atual() == 10 )
    {
        std :: cout << "Inventario cheio\n\n" ; system("pause") ;
    }
    else
    {
        for ( int i = 0 ; i < 10 ; i++ )
        {
            if ( inventario[ i ].get_tipo() == "Nenhum" )
            {
                int   tp   = rand() % ( 3 + 1 ) + 1 ;
                float peso = rand() % ( 9 + 1 ) + 1 ;

                std :: string tipo ;

                switch ( tp )
                {
                    case 1 : tipo = "Arma"       ; break ;
                    case 2 : tipo = "Pocao"      ; break ;
                    case 3 : tipo = "Artefato"   ; break ;
                    case 4 : tipo = "Vestimenta" ; break ;
                }
                Itens item ;

                item.set_id  ( i + 1 ) ;
                item.set_peso( peso  ) ;
                item.set_tipo( tipo  ) ;

                inventario[ i ] = item ;

                set_capacidade_atual( get_capacidade_atual() + 1 ) ;

                salvar_inventario() ;

                break ;
            }
        }
    }
}

/////////////////////////////////////////
//                                     //
// Método pra tirar item do inventario //
//                                     //
/////////////////////////////////////////

void Jogo :: usar_item()
{
    for ( int i = 0 ; i < 10 ; i++ )
    {
        if ( inventario[ i ].get_tipo() != "Nenhum"  )
        {
            inventario[ i ].set_id  ( 0 ) ;
            inventario[ i ].set_peso( 0 ) ;

            inventario[ i ].set_tipo( "Nenhum" ) ;

            set_capacidade_atual( get_capacidade_atual() - 1 ) ;

            salvar_inventario() ;

            break ;
        }
    }
}


/////////////////////////////////////////////
//                                         //
// Método pra consultar item do inventario //
//                                         //
/////////////////////////////////////////////

void Jogo :: consultar_item()
{
    int i_d ;

    std :: cout << "\n\nID: " ;
    std :: cin  >> i_d ; fflush( stdin ) ;

    for ( int i = 0 ; i < 10 ; i++ )
    {
        if ( inventario[ i ].get_id() == i_d )
        {
            std :: cout << "\n\nID..: " << inventario[ i ].get_id  ()
                        << "\nPeso: "   << inventario[ i ].get_peso()
                        << "\nTipo: "   << inventario[ i ].get_tipo() << "\n\n" ;

            system("pause") ;
        }
    }
}

///////////////////////////////////////////////////////////////////
//                                                               //
// Métodos pra salvar e carregar o inventário em arquivo binário //
//                                                               //
///////////////////////////////////////////////////////////////////

void Jogo :: salvar_inventario()
{
    std :: ofstream arquivo( "teste.bin" , std :: iostream :: out | std :: iostream :: trunc | std :: ios :: binary ) ;

    for ( int i = 0 ; i < 10 ; i++ )
    {
        arquivo.write( reinterpret_cast < const char* >( &inventario[ i ] ) , sizeof( inventario[ i ] ) ) ;
    }
    arquivo.close() ;
}

void Jogo :: carregar_inventario()
{
    std :: ifstream arquivo( "teste.bin" , std :: ios :: binary ) ;

    for ( int i = 0 ; i < 10 ; i++ )
    {
        arquivo.read( reinterpret_cast < char* > ( &inventario2[ i ] ) , sizeof( inventario2[ i ] ) ) ;

        imprime_dados( i ) ;
    }
    arquivo.close() ;
}

void Jogo :: imprime_dados( int i )
{
    std :: cout << "\n\nID..: " << inventario2[ i ].get_id  ()
                << "\nPeso: "   << inventario2[ i ].get_peso()
                << "\nTipo: "   << inventario2[ i ].get_tipo() ;
}
