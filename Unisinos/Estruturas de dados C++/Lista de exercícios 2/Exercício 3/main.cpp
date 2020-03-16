
/*
    Lista de exercicios 2 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercicio 3.Crie as Atirador , Pistola , Carabina , Rifle , Armadura , Municao para pistola , Municao para carabina , Municao para rifle e kit medico.

            Atributos:

                - Invente atributos que descrevam estas classes.

            Metodos:

                - Curar
                - Atirar
                - Recarregar
                - Usar armadura
                - Escolher uma arma
                - Trocar arma

            Simplifique ao maximo as classes , atributos e metodos e tambem faca-os cooperar entre si
*/

// Bibliotecas usadas

    #include <iostream>

    #include "Cura.h"
    #include "Armas.h"
    #include "Jogador.h"
    #include "Armaduras.h"

int main()
{
    // Armas                         ID , Nome      , Peso   , Pente atual , Pente

        Armas *Rifle    = new Armas( 1 , "Rifle"    ,  3.99  , 26  , 26  ) ;
        Armas *Pistola  = new Armas( 2 , "Pistola"  ,  1.010 , 50  , 9   ) ;
        Armas *Carabina = new Armas( 3 , "Carabina" ,  2.95  , 150 , 150 ) ;

    // Armadura                           ID ,  Nome    , Defesa , Quantidade atual , Quantidade

        Armaduras *Colete = new Armaduras( 1 , "Colete" , 100 , 1 , 1 ) ;

    // Itens de cura               ID , Nome        , Recuperacao , Quantidade atual , Quantidade

        Cura *Bandagens = new Cura( 1 , "Bandagens"  , 20  , 5 , 5 ) ;
        Cura *KitMedico = new Cura( 2 , "Kit medico" , 100 , 1 , 1 ) ;

    // Municoes                                 ID , Nome                 , Calibre , Quantidade atual , Quantidade

        Municao *MunicaoRifle    = new Municao( 1 , "Municao de rifle"    , 0.50 , 300 , 300 ) ;
        Municao *MunicaoPistola  = new Municao( 2 , "Municao de pistola"  , .380 , 10  , 50  ) ;
        Municao *MunicaoCarabina = new Municao( 3 , "Municao de carabina" , 0.22 , 30  , 30  ) ;

    // Jogador                           Nome   , HP , Colete , ID da arma na mao

        Jogador *jogador = new Jogador( "Rambo" , 10 , 0 , 0 ) ;

        jogador -> addArmadura( Colete ) ;

        jogador -> addCura( Bandagens ) ;
        jogador -> addCura( KitMedico ) ;

        jogador -> addArma    ( Rifle    ) ;
        jogador -> addArma    ( Pistola  ) ;
        jogador -> addArma    ( Carabina ) ;

        jogador -> addMunicao ( MunicaoRifle    ) ;
        jogador -> addMunicao ( MunicaoPistola  ) ;
        jogador -> addMunicao ( MunicaoCarabina ) ;

    int opcao ;

    while( 1 )
    {
        std :: cout << "\n\n------------------\n"

                    << "\nJogador: " << jogador -> getNome()
                    << "\nVida...: " << jogador -> getHP  () << " + " << jogador -> getColete() ;

                    jogador -> armaNasMaos( jogador ) ;

        std :: cout << "\n\n----------------\n"

                    << "\n1.Curar."
                    << "\n2.Por colete."
                    << "\n3.Atirar."
                    << "\n4.Recarregar."
                    << "\n5.Escolher arma."
                    << "\n6.Trocar arma."
                    << "\n7.Sair."

                    << "\n\n------------------\n\nOpcao escolhida: " ;

        std :: cin >> opcao ; fflush( stdin ) ; system("cls") ;

        switch ( opcao )
        {
            case 1 : jogador -> escolherComoSeCurar( jogador ) ; break ;
            case 2 : jogador -> porColete          ( jogador ) ; break ;
            case 3 : jogador -> atirar             ( jogador ) ; break ;
            case 4 : jogador -> recarregar         ( jogador ) ; break ;
            case 5 : jogador -> escolherArma       ( jogador ) ; break ;
            case 6 : jogador -> escolherArma       ( jogador ) ; break ;
            case 7 : return 0 ; break ;
        }
    }
    return 0 ;
}
