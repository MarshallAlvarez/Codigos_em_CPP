#include <iostream>

/*
    Crie a classe Elevador.

        Atributos:

            Andar atual( 0 = terreo )
            Andares totais no predio , excluindo o térreo
            Capacidade do elevador
            Pessoas abordo no momento

     Metodos publicos:

        Inicializar: Recebe capacidade e andares totais de parametros e cria um elevador no terreo vazio.
        Entrar: Entra 1 pessoa no elevador se nao ultrapassar a capacidade.
        Sair: Sai 1 pessoa do elevador , so se ainda houver alguem nele.
        Subir: Sobe 1 andar se nao esta no ultimo.
        Descer: Desce 1 andar se nao esta no terreo.
        Getters e setters para cada atributo.
*/

void chamarElevador( ) ;
void sairDoPrograma( ) ;

int andaresTotais , capacidadeMaxima ;

class Elevador
{
    private :
                int andarAtual , andaresTotais , capacidadeMaxima , capacidadeAtual ;
    public :

        Elevador( int andaresTotais , int capacidadeMaxima )
        {
            this -> andaresTotais = andaresTotais       ;
            this -> capacidadeMaxima = capacidadeMaxima ;
        }

        void setAndarAtual( int andarAtual ) { this -> andarAtual = andarAtual ; }
        int getAndarAtual(                 ) { return this -> andarAtual       ; }

        void setAndaresTotais( int andaresTotais ) { this -> andaresTotais = andaresTotais ; }
        int getAndarTotais(                      ) { return this -> andaresTotais          ; }

        void setCapacidadeAtual( int capacidadeAtual ) { this -> capacidadeAtual = capacidadeAtual ; }
        int getCapacidadeAtual(                      ) { return this -> capacidadeAtual            ; }

        void setCapacidadeMaxima( int capacidadeMaxima ) { this -> capacidadeMaxima = capacidadeMaxima ; }
        int getCapacidadeMaxima(                       ) { return this -> capacidadeMaxima             ; }

        void entrar( )
        {
            if ( capacidadeAtual < capacidadeMaxima ) { capacidadeAtual++ ; }

            else
            {
                std :: cout << "---------------------------------------------------\n\n"
                            << "Capacidade maxima de pessoas no elevador alcancada.\n\n"
                            << "---------------------------------------------------\n\n" ;

                system ( "pause" ) ;
                system ( "cls" ) ;

            }
        }

        void sair( )
        {
            if ( capacidadeAtual > 0 ) { capacidadeAtual-- ; }

            else
            {
                std :: cout << "---------------------------------------------------\n\n"
                            << "Capacidade minima de pessoas no elevador alcancada.\n\n"
                            << "---------------------------------------------------\n\n" ;

                system ( "pause" ) ;
                system ( "cls" ) ;

            }
        }

        void subir( )
        {
            if ( andarAtual < andaresTotais ) { andarAtual++ ; }

            else
            {
                std :: cout << "-----------------------------------------------------------------------\n\n"
                            << "Elevador esta no ultimo andar , nao eh possivel subir mais do que isso.\n\n"
                            << "-----------------------------------------------------------------------\n\n" ;

                system ( "pause" ) ;
                system ( "cls" ) ;

            }
        }

        void descer( )
        {
            if ( andarAtual > 1 ) { andarAtual-- ; }

            else
            {
                std :: cout << "------------------------------------------------------------------\n\n"
                            << "Elevador esta no terreo , nao eh possivel descer mais do que isso.\n\n"
                            << "------------------------------------------------------------------\n\n" ;

                system ( "pause" ) ;
                system ( "cls" ) ;

            }
        }

        int imprimirDados( )
        {
            std :: cout << "\n------------------------------\n\nAndares no predio: " << getAndarTotais() ;

            if ( getAndarAtual() == 0 )
            {
                std :: cout << ".\nAndar atual: terreo." ;
            }

            else
            {
                std :: cout << ".\nAndar atual: " << getAndarAtual() << "." ;
            }

            std :: cout << "\nPessoas no elevador: " << getCapacidadeAtual() << "/" << getCapacidadeMaxima()
                        << ".\n\n------------------------------\n"
                        << "Escolha uma das opcoes abaixo."
                        << "\n------------------------------"
                        << "\n\n1.Entrar 1 pessoa."
                        << "\n2.sair   1 pessoa."
                        << "\n3.Subir  1 andar."
                        << "\n4.Descer 1 andar."
                        << "\n5.Sair do programa."
                        << "\n\n------------------------------\n\n"
                        << "Opcao escolhida: " ;
        }
} ;

Elevador *elevador = new Elevador( andaresTotais , capacidadeMaxima ) ;

int main( )
{
    std :: cout << "Informe a quantidade de andares no predio: " ;
    std :: cin >> andaresTotais ;

    std :: cout << "\nInforme quantas pessoas o elevador suporta por vez: " ;
    std :: cin >> capacidadeMaxima ;

    elevador -> setAndarAtual( 1 )      ;
    elevador -> setCapacidadeAtual( 0 ) ;

    elevador -> setAndaresTotais( andaresTotais )       ;
    elevador -> setCapacidadeMaxima( capacidadeMaxima ) ;

    system ( "cls" ) ;

    while ( 1 )
    {
        chamarElevador() ;
    }

    return 0 ;
}

void chamarElevador( )
{
    int i , opcao ;

    for ( i = andaresTotais ; i > 0 ; i-- )
    {
        if ( i == elevador -> getAndarAtual() && elevador -> getAndarAtual() != 0 && elevador -> getAndarAtual() != 1 )
        {
            std :: cout << " ----------------\n"
                        << " |  _ _    _ _  |\n"
                        << " | | | |  | | | | <- Voce esta no andar " << elevador -> getAndarAtual() << " agora\n"
                        << " |  - -    - -  |\n"
                        << " |              |\n" ;
        }

        else if ( i == 0 || i == 1 && elevador -> getAndarAtual() == 1 )
        {
            std :: cout << " ----------------\n"
                        << " |  _ _    _ _  |\n"
                        << " | | | |  | | | | <- Voce esta no terreo agora\n"
                        << " |  - -    - -  |\n"
                        << " |              |\n" ;
        }

        else
        {
            std :: cout << " ----------------\n"
                        << " |  _ _    _ _  |\n"
                        << " | | | |  | | | |\n"
                        << " |  - -    - -  |\n"
                        << " |              |\n" ;
        }
    }

    std :: cout << " |      __      |\n"
                << " |     |  |     |\n"
                << "_|_____|**|_____|_\n" ;

    elevador -> imprimirDados() ;

    std :: cin >> opcao ;

    system ( "pause" ) ;
    system ( "cls" ) ;

    switch( opcao )
    {
        case 1 : elevador -> entrar() ; break ;
        case 2 : elevador -> sair()   ; break ;
        case 3 : elevador -> subir()  ; break ;
        case 4 : elevador -> descer() ; break ;
        case 5 : sairDoPrograma()     ; break ;
    }
}

void sairDoPrograma()
{
    std :: cout << "----------------------------------\n\n"
                << "Voce saiu do programa de elevador.\n\n"
                << "----------------------------------\n\n" ;

    delete elevador ;
}
