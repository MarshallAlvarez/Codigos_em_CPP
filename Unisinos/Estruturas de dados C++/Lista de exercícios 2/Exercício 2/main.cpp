/*
    Lista de exercicios 2 - Algoritmos e estruturas de dados em C++ - Unisinos

            Exercicio 2.Crie as classes:

                - Mago
                - Bardo
                - Ladino
                - Ranger
                - Barbaro
                - Clerigo
                - Paladino
                - Guerreiro
                - Sacerdote da luz
                - Sacerdote das trevas

                    Atributos:

                        - Invente atributos que descrevam estas classes.

                    Metodos:

                        - 5 que descrevam cada classe
*/

// Bibliotecas usadas

    #include <iostream>

    #include "Mago.h"
    #include "Bardo.h"
    #include "Ranger.h"
    #include "Humano.h"
    #include "Ladino.h"
    #include "Guerreiro.h"
    #include "Sacerdote.h"

// Objeto para atributos em comum

    Humano *h = new Humano() ;

int main()
{
    // Declaracao de objetos

    Mago *Merlin = new Mago() ; Merlin -> setNome  ("Merlin") ; Merlin -> setClasse("Mago"   ) ; Merlin -> setArma  ("Cajado") ;
    Mago *Mercy  = new Mago() ; Mercy  -> setNome  ("Mercy" ) ; Mercy  -> setClasse("Clerigo") ; Mercy  -> setArma  ("Cajado") ;

    Ladino *Jack      = new Ladino() ; Jack      -> setNome  ("Jack"     ) ; Jack      -> setClasse("Ladino") ; Jack      -> setArma  ("Adagas"    ) ;
    Bardo  *Dandelion = new Bardo () ; Dandelion -> setNome  ("Dandelion") ; Dandelion -> setClasse("Bardo" ) ; Dandelion -> setArma  ("Seu charme") ;
    Ranger *Emiya     = new Ranger() ; Emiya     -> setNome  ("Emiya"    ) ; Emiya     -> setClasse("Ranger") ; Emiya     -> setArma  ("Arco"      ) ;

    Guerreiro *Seiba    = new Guerreiro() ; Seiba    -> setNome("Seiba"   ) ; Seiba    -> setClasse("Paladino" ) ; Seiba    -> setArma  ("Ekusukariba") ;
    Guerreiro *Hercules = new Guerreiro() ; Hercules -> setNome("Hercules") ; Hercules -> setClasse("Barbaro"  ) ; Hercules -> setArma  ("Espada"     ) ;
    Guerreiro *Lancer   = new Guerreiro() ; Lancer   -> setNome("Lancer" )  ; Lancer   -> setClasse("Guerreiro") ; Lancer   -> setArma  ("Lanca"      ) ;

    Sacerdote *Ainz_Sama = new Sacerdote() ; Ainz_Sama -> setNome("Ainz_Sama") ; Ainz_Sama -> setClasse("Sacerdote das trevas") ; Ainz_Sama -> setArma("Cajado") ;
    Sacerdote *Alexander = new Sacerdote() ; Alexander -> setNome("Alexander") ; Alexander -> setClasse("Sacerdote da luz"    ) ; Alexander -> setArma("Adagas") ;

    // Adicionar objs ao vector

    h -> addJogador( Jack      ) ;
    h -> addJogador( Mercy     ) ;
    h -> addJogador( Emiya     ) ;
    h -> addJogador( Seiba     ) ;
    h -> addJogador( Merlin    ) ;
    h -> addJogador( Lancer    ) ;
    h -> addJogador( Hercules  ) ;
    h -> addJogador( Dandelion ) ;
    h -> addJogador( Ainz_Sama ) ;
    h -> addJogador( Alexander ) ;

    // Imprimir dados

        h -> settar      () ;
        h -> imprimeDados() ;

    // Objs usando seus metodos propios

    Merlin -> trovoada     ( Merlin ) ;
    Merlin -> chuvaAcida   ( Merlin ) ;
    Merlin -> raioDeGelo   ( Merlin ) ;
    Merlin -> bolaDeFogo   ( Merlin ) ;
    Merlin -> rajadaDeVento( Merlin ) ;

    Mercy -> rezar    ( Mercy ) ;
    Mercy -> curar    ( Mercy ) ;
    Mercy -> reviver  ( Mercy ) ;
    Mercy -> exorcizar( Mercy ) ;
    Mercy -> regenerar( Mercy ) ;

    Emiya -> cacar       ( Emiya ) ;
    Emiya -> mirar       ( Emiya ) ;
    Emiya -> atirar      ( Emiya ) ;
    Emiya -> recarregar  ( Emiya ) ;
    Emiya -> porArmadilha( Emiya ) ;

    Dandelion -> tocar      ( Dandelion ) ;
    Dandelion -> cantar     ( Dandelion ) ;
    Dandelion -> seduzir    ( Dandelion ) ;
    Dandelion -> acharMagia ( Dandelion ) ;
    Dandelion -> seDisfarcar( Dandelion ) ;

    Jack -> assltar    ( Jack ) ;
    Jack -> acrobacia  ( Jack ) ;
    Jack -> investigar ( Jack ) ;
    Jack -> assassinar ( Jack ) ;
    Jack -> seDispersar( Jack ) ;

    Alexander -> rezar          ( Alexander ) ;
    Alexander -> purificar      ( Alexander ) ;
    Alexander -> projecaoAstral ( Alexander ) ;
    Alexander -> armaEspiritual ( Alexander ) ;
    Alexander -> removerMaldicao( Alexander ) ;

    Ainz_Sama -> reviver        ( Ainz_Sama ) ;
    Ainz_Sama -> drenarVida     ( Ainz_Sama ) ;
    Ainz_Sama -> toqueDaMorte   ( Ainz_Sama ) ;
    Ainz_Sama -> ergam_seMortos ( Ainz_Sama ) ;
    Ainz_Sama -> controlarMortos( Ainz_Sama ) ;

    Hercules -> furia         ( Hercules ) ;
    Hercules -> matar         ( Hercules ) ;
    Hercules -> reviver       ( Hercules ) ;
    Hercules -> retaliar      ( Hercules ) ;
    Hercules -> instintoPrimal( Hercules ) ;

    Lancer -> lutar    ( Lancer ) ;
    Lancer -> beber    ( Lancer ) ;
    Lancer -> morrer   ( Lancer ) ;
    Lancer -> treinar  ( Lancer ) ;
    Lancer -> afiarArma( Lancer ) ;

    Seiba -> rezar      ( Seiba ) ;
    Seiba -> heroismo   ( Seiba ) ;
    Seiba -> vitalidade ( Seiba ) ;
    Seiba -> auraDaVida ( Seiba ) ;
    Seiba -> favorDivino( Seiba ) ;

    return 0 ;
}

