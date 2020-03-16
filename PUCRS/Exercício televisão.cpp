
/*
    Crie a classe Televisao.

        Atributos:

            Volume , aumenta ou diminui de 1 em 1.
            Canal  , troca de 1 em 1 , mas pode ser selecionado tambem.

        Metodos:

            Setters e getters.
*/

#include <iostream>

void chamar_TV  () ;
void desligar_TV() ;

class Televisao
{
    private :

        int volume , canal , i ;

    public :

        void set_volume( int volume ) { this -> volume = volume ; }
        int  get_volume(            ) { return this ->   volume ; }

        void set_canal( int canal ) { this -> canal = canal ; }
        int  get_canal(           ) { return this ->  canal ; }

        void proximo_canal()  {                  canal++ ; }
        void canal_anterior() { if ( canal > 0 ) canal-- ; }

        void aumentar_volume() { if ( volume < 100 ) { volume++ ; } }
        void diminuir_volume() { if ( volume > 0   ) { volume-- ; } }

        void trocar_canal()
        {
            std :: cout << "Canal: " ;
            std :: cin >> i ;

            if ( i >= 0 ) { canal = i ; }

            system("cls") ;
        }

        void controle_remoto()
        {
            std :: cout << "\nControle remoto:"
                        << "\n\n> Proximo  canal."
                        << "\n< Canal    anterior."
                        << "\n+ Aumentar volume."
                        << "\n- Abaixar  volume."
                        << "\n? Trocar canal."
                        << "\n* Desligar TV."
                        << "\n\nOpcao escolhida: " ;
        }

        void imprime_dados()
        {
            if      ( volume < 10 )                { std :: cout << "|  | - volume: " << volume << " -                |   ______   |\n" ; }
            else if ( volume > 9 && volume < 100 ) { std :: cout << "|  | - volume: " << volume << " -               |   ______   |\n"  ; }
            else                                   { std :: cout << "|  | - volume: " << volume << " -              |   ______   |\n"   ; }

            if      ( canal < 10 )               { std :: cout << "|  | - canal:  " << canal << " -                |  |      |  |\n" ; }
            else if ( canal > 9 && canal < 100 ) { std :: cout << "|  | - canal:  " << canal << " -               |  |      |  |\n"  ; }
            else                                 { std :: cout << "|  | - canal:  " << canal << " -              |  |      |  |\n"   ; }
        }
} ;

Televisao *TV = new Televisao() ;

int main( )
{
    TV -> set_volume( 100 ) ;
    TV -> set_canal ( 0 ) ;

    while ( 1 )
    {
        chamar_TV() ;
    }

    return 0 ;
}

void chamar_TV( )
{
    int i ;
    char opcao , contra_barra = 92 ;

    std :: cout << "\n                          " << contra_barra << "              /\n"
                << "                           " << contra_barra << "            /\n"
                << "                            " << contra_barra << "          /\n"
                << "                             " << contra_barra << "        /\n"
                << "                              " << contra_barra << "      /\n"
                << "                               " << contra_barra << "    /\n"
                << "                                " << contra_barra << "  /\n"
                << " ________________________________" << contra_barra << "/____________\n"
                << "|   ______________________________             |\n"
                << "|  |                              |            |\n" ;

                TV -> imprime_dados() ;

    std :: cout << "|  |                              |  |      |  |\n"
                << "|  |                              |  |      |  |\n"
                << "|  |                              |   ------   |\n"
                << "|  |                              |   ______   |\n"
                << "|  |                              |  |      |  |\n"
                << "|  |                              |  |      |  |\n"
                << "|  |                              |  |      |  |\n"
                << "|  |                              |   ------   |\n"
                << "|  |______________________________|          O |\n"
                << "|__ ________________________________________ __|\n"
                << "   " << contra_barra << "________________________________________/\n" ;

    TV -> controle_remoto() ;

    std :: cin >> opcao ;

    system ( "cls" ) ;

    switch( opcao )
    {
        case '>' : TV -> proximo_canal  () ; break ;
        case '<' : TV -> canal_anterior () ; break ;
        case '+' : TV -> aumentar_volume() ; break ;
        case '-' : TV -> diminuir_volume() ; break ;
        case '?' : TV -> trocar_canal   () ; break ;
        case '*' : desligar_TV()           ; break ;
    }
}

void desligar_TV()
{
    std :: cout << "-------------------\n\n"
                << "Voce desligou a TV.\n\n"
                << "-------------------\n\n" ;

    delete TV ;
}
