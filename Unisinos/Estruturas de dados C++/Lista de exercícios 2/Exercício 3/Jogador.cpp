
#include "Jogador.h"

Jogador :: Jogador( std :: string nome , int HP , int colete , int armaAtual )
{
    this -> HP        = HP        ;
    this -> nome      = nome      ;
    this -> colete    = colete    ;
    this -> armaAtual = armaAtual ;
}

int Jogador :: getHP() { return this -> HP ; }

int Jogador :: getColete() { return this -> colete ; }

std :: string Jogador :: getNome() { return this -> nome ; }

void Jogador :: setHP( int HP ) { this -> HP = HP ; }

void Jogador :: setColete( int colete )
{
    this -> colete = colete ;
}

void Jogador :: setArmaAtual( int armaAtual )
{
    this -> armaAtual = armaAtual ;
}

int Jogador :: getArmaAtual()
{
    return this -> armaAtual ;
}

void Jogador :: escolherComoSeCurar( Jogador *j )
{
    int id ;

    if ( j -> getHP() < 100 )
    {
        std :: cout << "\nVida atual: " << getHP() << "/100\n\nItens de cura achados na mochila:\n" ;

        for ( itCura = curaNaMochila.begin() ; itCura != curaNaMochila.end() ; itCura++ )
        {
            std :: cout << "\nID...: " << ( *itCura ) -> getID             ()
                        << "\nItem.: " << ( *itCura ) -> getNome           ()
                        << "\nTotal: " << ( *itCura ) -> getQuantidadeAtual() << '/' << ( *itCura ) -> getQuantidade()
                        << "\nCura.: " << ( *itCura ) -> getRecuperacao    () << "%\n" ;
        }
        std :: cout << "\n\nInforme o ID do item voce quer usar: " ;
        std :: cin >> id ; fflush ( stdin ) ; system("cls") ;

        for ( itCura = curaNaMochila.begin() ; itCura != curaNaMochila.end() ; itCura++ )
        {
            if ( ( *itCura ) -> getID() == id && ( *itCura ) -> getQuantidadeAtual() > 0 )
            {
                ( *itCura ) -> setQuantidadeAtual( ( *itCura ) -> getQuantidadeAtual() - 1 ) ;

                j -> setHP( j -> getHP() + ( *itCura ) -> getRecuperacao() ) ;

                if ( j -> getHP() > 100 )
                {
                    j -> setHP( 100 ) ;
                }
            }
        }
    }
    else
    {
        std :: cout << "HP cheio." ;
    }
}

void Jogador :: porColete( Jogador *j )
{
    for ( itArmaduras = armadurasNaMochila.begin() ; itArmaduras != armadurasNaMochila.end() ; itArmaduras++ )
    {
        if ( ( *itArmaduras ) -> getID() == 1 )
        {
            j -> setColete( ( *itArmaduras ) -> getDefesa() ) ;
        }
    }
}

void Jogador :: escolherArma( Jogador *j )
{
    int id ;

    for ( itArmas = armasNaMochila.begin() , itMunicao = municaoNaMochila.begin() ; itArmas != armasNaMochila.end() , itMunicao != municaoNaMochila.end() ; itArmas++ , itMunicao++ )
    {
        ( *itArmas   ) -> dadosArmas  () ;
        ( *itMunicao ) -> dadosMunicao() ;
    }
    if ( j -> getArmaAtual() == 0 ) { std :: cout << "\n\nInforme o ID da arma que voce quer usar: "   ; }
    if ( j -> getArmaAtual() != 0 ) { std :: cout << "\n\nInforme o ID da arma que voce quer trocar: " ; }

    std :: cin >> id ; fflush ( stdin ) ; system("cls") ;

    for ( itArmas = armasNaMochila.begin() ; itArmas != armasNaMochila.end() ; itArmas++ )
    {
        if ( ( *itArmas ) -> getID() == id )
        {
            j -> setArmaAtual( id ) ;
        }
    }
}

void Jogador :: armaNasMaos( Jogador *j )
{
    for ( itArmas = armasNaMochila.begin() , itMunicao = municaoNaMochila.begin() ; itArmas != armasNaMochila.end() , itMunicao != municaoNaMochila.end() ; itArmas++ , itMunicao++ )
    {
        if ( ( *itArmas ) -> getID() == j -> getArmaAtual() )
        {
            ( *itArmas   ) -> dadosArmas  () ;
            ( *itMunicao ) -> dadosMunicao() ;
        }
    }
}

void Jogador :: atirar( Jogador *j )
{
    for ( itArmas = armasNaMochila.begin() ; itArmas != armasNaMochila.end() ; itArmas++ )
    {
        if ( ( *itArmas ) -> getID() == j -> getArmaAtual() && ( *itArmas ) -> getPenteAtual() > 0 )
        {
            ( *itArmas ) -> setPenteAtual( ( *itArmas ) -> getPenteAtual() - 1 ) ;
        }
    }
}

void Jogador :: recarregar( Jogador *j )
{
    int id ;

    for ( itArmas = armasNaMochila.begin() , itMunicao = municaoNaMochila.begin() ; itArmas != armasNaMochila.end() , itMunicao != municaoNaMochila.end() ; itArmas++ , itMunicao++ )
    {
        ( *itArmas   ) -> dadosArmas  () ;
        ( *itMunicao ) -> dadosMunicao() ;
    }
    std :: cout << "\n\nInforme o ID de qual arma quer recarregar: "   ;

    std :: cin >> id ; fflush ( stdin ) ; system("cls") ;

    for ( itArmas = armasNaMochila.begin() , itMunicao = municaoNaMochila.begin() ; itArmas != armasNaMochila.end() , itMunicao != municaoNaMochila.end() ; itArmas++ , itMunicao++ )
    {
        if ( ( *itArmas ) -> getID() == id )
        {
            if ( ( *itArmas ) -> getPenteAtual() < ( *itArmas ) -> getPente() )
            {
                while ( ( *itArmas ) -> getPenteAtual() != ( *itArmas ) -> getPente() )
                {
                    if ( ( *itMunicao ) -> getQuantidadeAtual() > 0 )
                    {
                        ( *itArmas   ) -> setPenteAtual     ( ( *itArmas   ) -> getPenteAtual     () + 1 ) ;
                        ( *itMunicao ) -> setQuantidadeAtual( ( *itMunicao ) -> getQuantidadeAtual() - 1 ) ;
                    }
                    else
                    {
                        break ;
                    }
                }
            }
        }
    }
}
void Jogador :: addCura    ( Cura      *c ) { this -> curaNaMochila     .push_back( c ) ; }
void Jogador :: addArma    ( Armas     *a ) { this -> armasNaMochila    .push_back( a ) ; }
void Jogador :: addMunicao ( Municao   *m ) { this -> municaoNaMochila  .push_back( m ) ; }
void Jogador :: addArmadura( Armaduras *a ) { this -> armadurasNaMochila.push_back( a ) ; }
