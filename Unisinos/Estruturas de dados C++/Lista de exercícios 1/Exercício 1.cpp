
/*
    Lista de exercicios 1 - Algoritmos e estruturas de dados em C++ - Unisinos

        Exercicio 1.Crie a classe Data , instanciando um obj data que chame todos os metodos:

            Construtor: Cria uma data apartir de atributos dia , mes e ano - ex: 01/07/2014( DD/MM/AAAA ).

            Verifica..: Ve se a data eh valida , se nao estiver a data passa a ser 01/01/0001.

            isBissexto: Retorna true se o ano for bissexto , false do contrario.

            Compara...: Recebe outro obj Data e compara as 2 datas e retorna:

                        0  - Se as datas forem iguais.
                        1  - Se a data que chamou o metodo vier depois da passada como parametro.
                        -1 - Se a data que chamou o metodo vier antes  da passada como parametro.

            Getters e setters ( 1 para retornar o mes em extenso ).
*/

// Bibliotecas usadas no codigo:

#include <iostream>

// Classes usadas no codigo:

class Data
{
    // Atributos e metodos privados da classe:

    private : int dia , mes , ano ; std :: string mesEmExtenso ;

    // Atributos e metodos publicos da classe:

    public :

        bool mesInvalido ;

        Data( int dia , int mes , int ano )
        {
            this -> dia = dia ;
            this -> mes = mes ;
            this -> ano = ano ;
        }

        void verificaData( int dia , int mes , int ano )
        {
            mesInvalido = 0 ;

            switch( mes )
            {
                case 1  : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 2  : if ( dia < 1 || dia > 29 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 3  : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 4  : if ( dia < 1 || dia > 30 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 5  : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 6  : if ( dia < 1 || dia > 30 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 7  : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 8  : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 9  : if ( dia < 1 || dia > 30 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 10 : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 11 : if ( dia < 1 || dia > 30 || ano < 1 ) { mesInvalido = 1 ; } break ;
                case 12 : if ( dia < 1 || dia > 31 || ano < 1 ) { mesInvalido = 1 ; } break ;
                default : mesInvalido = 1 ;
            }
            if ( mesInvalido == 1 ) { setDia( 1 ) ; setMes( 1 ) ; setAno( 1 ) ; }
        }

        void setDia( int dia ) { this -> dia = dia ; } ;
        void setMes( int mes ) { this -> mes = mes ; } ;
        void setAno( int ano ) { this -> ano = ano ; } ;

        int getDia() { return this -> dia ; }
        int getMes() { return this -> mes ; }
        int getAno() { return this -> ano ; }

        void getMesEmExtenso( int mes )
        {
            switch( mes )
            {
                case 1  : mesEmExtenso = "Janeiro"   ; break ;
                case 2  : mesEmExtenso = "Fevereiro" ; break ;
                case 3  : mesEmExtenso = "Marco"     ; break ;
                case 4  : mesEmExtenso = "Abril"     ; break ;
                case 5  : mesEmExtenso = "Maio"      ; break ;
                case 6  : mesEmExtenso = "Junho"     ; break ;
                case 7  : mesEmExtenso = "Julho"     ; break ;
                case 8  : mesEmExtenso = "Agosto"    ; break ;
                case 9  : mesEmExtenso = "Setembro"  ; break ;
                case 10 : mesEmExtenso = "Outubro"   ; break ;
                case 11 : mesEmExtenso = "Novembro"  ; break ;
                case 12 : mesEmExtenso = "Dezembro"  ; break ;
            }
            std :: cout << mesEmExtenso ;
        }

        int compara( Data D )
        {
            if ( dia == D.getDia() && mes == D.getMes() && ano == D.getAno() )
            {
                return 0 ;
            }
            else if ( ( ano == D.getAno() && mes == D.getMes() && dia > D.getDia() )
                   || ( ano == D.getAno() && mes > D.getMes() )
                   || ( ano >  D.getAno() ) )
            {
                return 1 ;
            }
            else { return -1 ; }
        }

        bool isBissexto( int ano )
        {
            if ( ano % 4 == 0 )
            {
                if ( ano % 100 == 0 )
                {
                    if ( ano % 400 == 0 )
                    {
                        return 1 ;
                    }
                }
            }
            else { return 0 ; }
        }
} ;

int main()
{
    // Variaveis do main:

    int dia , mes , ano ;

    std :: cout << "\nExercicio 1.Informe uma data.\nDia: " ;
    std :: cin >> dia ;
    std :: cout << "Mes: " ;
    std :: cin >> mes ;
    std :: cout << "Ano: " ;
    std :: cin >> ano ;
    Data D1        ( dia , mes , ano ) ;
    D1.verificaData( dia , mes , ano ) ;

    std :: cout << "\nInforme outra data.\nDia: " ;
    std :: cin >> dia ;
    std :: cout << "Mes: " ;
    std :: cin >> mes ;
    std :: cout << "Ano: " ;
    std :: cin >> ano ;
    Data D2        ( dia , mes , ano ) ;
    D2.verificaData( dia , mes , ano ) ;

    std :: cout << "\nMes 1: " ; D1.getMesEmExtenso( D1.getMes() ) ;
    std :: cout << "\nMes 2: " ; D2.getMesEmExtenso( D2.getMes() ) ;

    // Imprimir data 1:

        std :: cout << "\n\nData 1: " ;

        if ( D1.getDia() < 10 ) { std :: cout << '0' ; } std :: cout << D1.getDia() << '/' ;
        if ( D1.getMes() < 10 ) { std :: cout << '0' ; } std :: cout << D1.getMes() << '/' ;

        if      ( D1.getAno() < 10                         ) { std :: cout << "000" ; }
        else if ( D1.getAno() >= 10  && D1.getAno() < 100  ) { std :: cout << "00"  ; }
        else if ( D1.getAno() >= 100 && D1.getAno() < 1000 ) { std :: cout << "0"   ; } std :: cout << D1.getAno() ;

    // Imprimir data 2:

        std :: cout << "\nData 2: " ;

        if ( D2.getDia() < 10 ) { std :: cout << '0' ; } std :: cout << D2.getDia() << '/' ;
        if ( D2.getMes() < 10 ) { std :: cout << '0' ; } std :: cout << D2.getMes() << '/' ;

        if      ( D2.getAno() < 10                         ) { std :: cout << "000" ; }
        else if ( D2.getAno() >= 10  && D2.getAno() < 100  ) { std :: cout << "00"  ; }
        else if ( D2.getAno() >= 100 && D2.getAno() < 1000 ) { std :: cout << "0"   ; } std :: cout << D2.getAno() ;

    // Metodo comparar:

        std :: cout << "\n\nResultado da comparacao entre data 1 e 2: " ;

        switch ( D1.compara( D2 ) )
        {
            case -1 : std :: cout << D1.compara( D2 ) << " , data 1 vem antes  de data 2." ; break ;
            case 1  : std :: cout << D1.compara( D2 ) << " , data 1 vem depois de data 2." ; break ;
            default : std :: cout << D1.compara( D2 ) << " , data 1 e data 2 sao iguais." ;
        }

    // Metodo isBissexto:

        if ( D1.isBissexto( D1.getAno() ) ) { std :: cout << "\n\nO ano da data 1 ( " << D1.getAno() << " ) eh bissexto"     ; }
        else                                { std :: cout << "\n\nO ano da data 1 ( " << D1.getAno() << " ) nao eh bissexto" ; }


        if ( D2.isBissexto( D2.getAno() ) ) { std :: cout << "\nO ano da data 2 ( " << D2.getAno() << " ) eh bissexto.\n"     ; }
        else                                { std :: cout << "\nO ano da data 2 ( " << D2.getAno() << " ) nao eh bissexto.\n" ; }

    return 0 ;
}
