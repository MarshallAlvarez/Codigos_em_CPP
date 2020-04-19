
/*
    Unisinos - 2020/01 - Algoritmos e estruturas de dados em C++ - Exercício arquivos( Streams )

        Exercício: Crie a classe inventário.

            - Atributos:

                - ID
                - Peso
                - Tipo:

                    - Arma
                    - Poção
                    - Artefato
                    - Vestimenta

            - Métodos:

                - Adicionar , remover e consultar item.
                - Settar quantidade e peso máximo dos itens.

            Ao iniciar o programa guarde alguns itens no inventário e num arquivo.

            Ao iniciar de novo carregue o inventário se tiver algum salvo no arquivo.
*/

#include <ctime>
#include <iostream>

#include "Jogo.h"

int main()
{
	srand( ( unsigned )time( 0 ) ) ;

    Jogo *jogo = new Jogo( 0 ) ;

    jogo -> settar_inventario() ;

    jogo -> salvar_inventario() ;

    int opcao ;

    while ( 1 )
    {
        std :: cout << "Inventario:\n" ; jogo -> carregar_inventario() ;

        std :: cout << "\n\n1.Remover   item do iventario."
                    << "  \n2.Adicionar item no iventario."
                    << "  \n3.Consultar item do iventario."

                    << "\n\nOpcao: " ;

        std :: cin >> opcao ; fflush( stdin ) ; system("cls") ;

        switch ( opcao )
        {
            case 1 : jogo -> usar_item        () ; break ;
            case 2 : jogo -> add_ao_inventario() ; break ;
            case 3 : jogo -> consultar_item   () ; break ;
        }
        system("cls") ;

    }
    return 0 ;
}
