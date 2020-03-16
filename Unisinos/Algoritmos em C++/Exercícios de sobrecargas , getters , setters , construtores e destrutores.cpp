
/*
    Crie a classe Pessoa com o diagrama:
                                            Classe: 
                                                    Pessoa 
 
                                            Atributos: 
                                                        std :: string nome ;
                                                        char sexo , corOlhos ;
                                                        Pessoa *pai ;
                                                        Pessoa *mae ;
                                    
                                            Metodos:
                                                        Pessoa( stringnome , char sexo , char corOlhos )
                                                        Pessoa( stringnome , char sexo , char corOlhos , Pessoa *pai , Pessoa *mae )
                                                        Pessoa* geraPessoa( stringnome , char sexo , Pessoa *pai ) ;
                                                        voidsetSexo( char sexo ) ;
                                                        voidsetCorOlhos( char corOlhos ) ;
                                                        stringgetNome() ;
                                                        stringgetSexoStr() ;
                                                        stringgetCorOlhosStr() ;
                                                        voidimprimeDados() ;

    Metodo construtor deve ser sobrecarregado com e sem os parametros.
    setSexo() e setCorOlhos() so podem permitir parametros M/F e C/V/A , respectivamente. 
    getSexoStr() e getCorOlhosStr() devem retornar strings correspondentes.
    geraPessoa() so pode ser usado por objs femininos e ter como parametro 1 pai e retornar 1 filho , se nao retornar NULL.
    Cor dos olhos do filho respeita cores dominantes/recessivas dos pais , Castanho > verde e azul , verde > azul.
    imprimeDados() mostra o nome , sexo ( extenso ) , cor dos olhos ( extenso ) , nome do pai da mae da pessoa , se existirem
    Instanciar dinamicamente no main as pessoas pai , mae e filho e imprimir seus dados.
*/

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>

class Pessoa
{
    private :
                Pessoa* pai , * mae ; 
                 char sexo , corOlhos ;
                std :: string nome , sexoStr , corOlhosStr ;
    public : 
                void setNome( std :: string nome ) { this -> nome = nome ; }
                std :: string getNome() { return this -> nome            ; }

                void setSexo( char sexo ) { this -> sexo = sexo ; }
                std :: string getSexoStr()
                {
                    if ( sexo == 'M' ) { sexoStr = "Masculino" ; return this -> sexoStr ; }
                    if ( sexo == 'F' ) { sexoStr = "Feminino" ; return this -> sexoStr  ; }
                }

                void setCorOlhos( char corOlhos ) { this -> corOlhos = corOlhos ; }
                std :: string getCorOlhosStr()
                {
                    if ( corOlhos == 'C' ) { corOlhosStr = "Castanho" ; return this -> corOlhosStr ; }
                    if ( corOlhos == 'V' ) { corOlhosStr = "Verde" ; return this -> corOlhosStr    ; }
                    if ( corOlhos == 'A' ) { corOlhosStr = "Azul" ; return this -> corOlhosStr     ; }
                }
                
                Pessoa( std :: string nome , char sexo , char corOlhos , Pessoa* pai , Pessoa* mae )
                {
                    this -> nome = nome         ;
                    this -> sexo = sexo         ;
                    this -> corOlhos = corOlhos ;
                    this -> pai = pai           ;
                    this -> mae = mae           ;
                }

                Pessoa* geraPessoa( std :: string nome , char sexo , Pessoa* pai , Pessoa* mae )
                {
                    char corOlhos;
                    Pessoa* filho;

                    if ( pai -> corOlhos == 'C' || mae -> corOlhos == 'C' ) {      corOlhos = 'C' ; }
                    else if ( pai -> corOlhos == 'V' || mae -> corOlhos == 'V' ) { corOlhos = 'V' ; }
                    else {                                                         corOlhos = 'A' ; }

                    filho = new Pessoa( nome , sexo , corOlhos , pai , mae ) ;

                    return filho ;
                }

                void imprimeDados()
                {
                    std :: cout << "Nome: " << getNome() 
                                << "\nSexo: " << getSexoStr() 
                                 << "\nCor dos olhos: " << getCorOlhosStr() ;
                }

} ;

int main()
{
    int geraFilho ;
    bool continua = 0 ;
    std :: string nome ; 
    char sexo , corOlhos ;

    std :: cout << "Informe o nome do pai: " ; 
    getline( std :: cin , nome ) ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Informe a cor dos olhos do pai: " ;
    std :: cin >> corOlhos ;

    if ( corOlhos != 'C' && corOlhos != 'V' && corOlhos != 'A' )
    {
        std :: cout << "Olhos invalidos" ;
        continua = 1 ;
    }
    
    system("pause") ;
    system("cls") ;

    Pessoa* pai = new Pessoa( nome , sexo , corOlhos , NULL , NULL ) ;

    pai -> setNome( nome )         ;
    pai -> setSexo( 'M' )          ; 
    pai -> setCorOlhos( corOlhos ) ;

    if ( continua == 0 )
    {
        std :: cout << "Informe o nome da sua mae: " ;
        getline( std :: cin , nome ) ;
        
        system("pause") ;
        system("cls") ;

        std :: cout << "Informe a cor dos olhos da sua mae: " ;
        std :: cin >> corOlhos ;
       
        if ( corOlhos != 'C' && corOlhos != 'V' && corOlhos != 'A' )
        {
            std :: cout << "Olhos invalidos" ;
   
            continua = 1 ;
        }
         
        system("pause") ;
        system("cls") ;
    }

    Pessoa* mae = new Pessoa( nome , sexo , corOlhos , NULL , NULL ) ;
    
    mae -> setNome( nome )         ;
    mae -> setSexo( 'F' )          ;
    mae -> setCorOlhos( corOlhos ) ;
    
    Pessoa* filho ;

    if ( continua == 0 )
    {
        std :: cout << "Dados pai:\n" ;
        pai -> imprimeDados() ;
        
        std :: cout << "\n\nDados mae:\n" ;
        mae -> imprimeDados() ;
    }
    std :: cout << "\n\n1 -> Gerar um filho.\nOutra tecla -> Sair.\n\nOpcao escolhida:  " ;
    std :: cin >> geraFilho ;
    
    system("pause") ;
    system("cls") ;
    
    if ( geraFilho == 1 )
    {
        std :: cout << "\nInforme o nome do filho: " ;
        getline( std :: cin , nome ) ;
        
        system("pause") ;
        system("cls");
       
        std :: cout << "Informe o sexo do filho , M ou F: " ; 
        std :: cin >> sexo ;
      
        filho = mae -> geraPessoa( nome , sexo , pai , mae ) ;

        std :: cout << std :: endl ;

        system("pause") ;
        system("cls") ;

        std :: cout << "Dados pai:\n" ;
        pai -> imprimeDados() ;

        std :: cout << "\n\nDados mae:\n" ;
        mae -> imprimeDados() ;

        std :: cout << "\n\nDados filho:\n" ;
        filho -> imprimeDados() ;
        std :: cout << std :: endl ; 
    }

    else
    {
        std :: cout << "\nVoce saiu do programa" ;
    }

    delete pai   ;
    delete mae   ;
    delete filho ;

    return 0 ;
}
