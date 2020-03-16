/*
    Crie a super classe Veiculo e subclasses Terrestre , Aereo e Aquatico com o diagrama:
    
    Super classe Veiculo:
                            Atributos:   
                                        int ano , peso ;
                                        float tanque ;
                                        string modelo ;
                            Metodos: 
                                        std :: string info() ;

    Subclasse Terrestre:
                            Atributos:
                                        int qtroda , qtporta ;
                            Metodos: 
                                        float consumo() ;
                                        float autonomia() ;
                                        std :: string info() ;
    Subclasse Aereo: 
                        Atributos:   
                                    int qtasa , qtmotor ;
                        Metodos:
                                    float consumo() ;
                                    float autonomia() ;
                                    std :: string info() ;
    Subclasse Aquatico:
                            Atributos:
                            
                                        int qtmotor , qtconves ;
                            Metodos:
                                        float consumo() ;
                                        float autonomia() ;
                                        std :: string info() ;
    
    Construtor das subclasses deve chamar o construtor da superclasse e passar os parametros necessarios.

    Consumo de “Terrestre” eh dado pela equação : 1 / ( ( peso * 0.00005 ) + ( qtRoda  * 0.005 ) ) , em km / l
    Consumo de “Aereo”     eh dado pela equação : 1 / ( ( peso * 0.00003 ) + ( qtMotor * 0.01  ) ) , em km / l
    Consumo de "Aquatico”  eh dado pela equação : 1 / ( ( peso * 0.00002 ) + ( qtMotor * 0.02  ) ) , em km / l

    Autonomia eh proporcional ao volume do tanque e consumo calculado.
    Info() das subclasses lista caracteristicas da superclasse e depois da subclasse
    Crie objetos das subclasses e chame info().
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>


class Veiculo
{
    private :
                float tanque ;
                std :: string modelo , tanqueStr ;
                int ano , peso , qtRoda , qtPorta , qtAsa , qtMotor , qtConves ;
    public :
                void setPeso( int peso ) { this -> peso = peso ; }
                int getPeso(           ) { return this -> peso ; }

                void setTanque( float tanque ) { this -> tanque = tanque ; }
                int getTanque(                 ) { return this -> tanque ; }

                void setModelo( std :: string modelo ) { this -> modelo = modelo ; }
                std :: string getModelo(               ) { return this -> modelo ; }

                void setAno( int ano ) { this -> ano = ano ; }
                int getAno(         ) { return this -> ano ; }

                void setTanqueStr( std :: string tanqueStr ) { this -> tanqueStr = tanqueStr ; }
                std :: string getTanqueStr(                     ) { return this -> tanqueStr ; }

                void setQtRoda( int qtRoda ) { this -> qtRoda = qtRoda ; }
                int getQtRoda(               ) { return this -> qtRoda ; }

                void setQtPorta( int qtPorta ) { this -> qtPorta = qtPorta ; }
                int getQtPorta(                 ) { return this -> qtPorta ; }

                void setQtAsa( int qtAsa ) { this -> qtAsa = qtAsa ; }
                int getQtAsa(             ) { return this -> qtAsa ; }

                void setQtMotor( int qtMotor ) { this -> qtMotor = qtMotor ; }
                int getQtMotor(                 ) { return this -> qtMotor ; }

                void setQtConves( int qtConves ) { this -> qtConves = qtConves ; }
                int getQtConves(                   ) { return this -> qtConves ; }
} ;

class Terrestre : public Veiculo
{
    public :
                float consumo() { return ( 1 / ( ( getPeso() * 0.00005 ) + ( getQtRoda() * 0.005 ) ) ) ; }

                float autonomia() { return getTanque() / consumo() ; }

                void info()
                {
                    std :: cout << "Modelo: "     << getModelo()
                                << "\nAno: "       << getAno()
                                << "\nPeso: "      << getPeso() << " kg\n"
                                << "Tanque: "      << std :: fixed << std :: setprecision( 2 ) << getTanque() << " L\n"
                                << "Consumo: "     << consumo()
                                << "\nAutonomia: " << (getTanque() * consumo())
                                << "\nQtRoda: "    << getQtRoda()
                                << "\nQtPorta: "   << getQtPorta()
                                << "\nAutonomia: " << autonomia() ;
                }
} ;

class Aereo : public Veiculo
{
    public:
                float consumo() { return ( 1 / ( ( getPeso() * 0.00003 ) + ( getQtMotor() * 0.01 ) ) ) ; }

                float autonomia() { return getTanque() / consumo() ; }

                void info()
                {
                    std :: cout << "Modelo: "      << getModelo()
                                << "\nAno: "       << getAno()
                                << "\nPeso: "      << getPeso() << " kg\n"
                                << "Tanque: "      << std :: fixed << std :: setprecision( 2 ) << getTanque() << " L\n"
                                << "Consumo: "     << consumo()
                                << "\nAutonomia: " << (getTanque() * consumo())
                                << "\nQtAsa: "     << getQtAsa()
                                << "\nQtMotor: "   << getQtMotor()
                                << "\nAutonomia: " << autonomia() ;
                }
};

class Aquatico : public Veiculo
{
    public :
                float consumo() { return (1 / ((getPeso() * 0.00002) + (getQtMotor() * 0.02))); }

                float autonomia() { return getTanque() / consumo() ; }

                void info()
                {
                    std :: cout << "Modelo: "      << getModelo()
                                << "\nAno: "       << getAno()
                                << "\nPeso: "      << getPeso() << " kg\n"
                                << "Tanque: "      << std :: fixed << std :: setprecision( 2 ) << getTanque() << " L\n"
                                << "Consumo: "     << consumo()
                                << "\nAutonomia: " << (getTanque() * consumo())
                                << "\nQtMotor: "   << getQtMotor()
                                << "\nQtConves: "  << getQtConves()
                                << "\nAutonomia: " << autonomia();
                }
};

int main()
{
    float tanque ;
    std :: stringstream ss ;
    std :: string modelo , tanqueStr ;
    int ano , peso , qtRoda , qtPorta , qtAsa , qtMotor , qtConves ;

    Aereo*     jatinhoParticular  = new Aereo()     ;
    Aquatico*  submarinoAmarelo   = new Aquatico()  ;
    Terrestre* carrinhoDeControle = new Terrestre() ;

    std :: cout << "Carro\nInforme o ano do carro: " ;
    std :: cin >> ano ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Carro\nInforme o peso do carro: " ;
    std :: cin >> peso ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Carro\nInforme o tanque do carro: " ; 
    std :: cin >> tanque ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Carro\nInforme o modelo do carro: " ;
    getline( std :: cin , modelo ) ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Carro\nInforme a quantidade de rodas do carro: " ;
    std :: cin >> qtRoda ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Carro\nInforme a quantidade de portas do carro: " ;
    std :: cin >> qtPorta ;
    
    system("pause") ;
    system("cls") ;

    tanqueStr = to_string( tanque ) ;

    carrinhoDeControle -> setAno( ano         ) ;
    carrinhoDeControle -> setPeso( peso       ) ;
    carrinhoDeControle -> setTanque( tanque   ) ;
    carrinhoDeControle -> setModelo( modelo   ) ;
    carrinhoDeControle -> setQtRoda( qtRoda   ) ;
    carrinhoDeControle -> setQtPorta (qtPorta ) ;

    std :: cout << "Aviao\nInforme o ano do aviao: " ;
    std :: cin >> ano ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Aviao\nInforme o peso do aviao: " ;
    std :: cin >> peso ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Aviao\nInforme o tanque do aviao: " ;
    std :: cin >> tanque ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Aviao\nInforme o modelo do aviao: " ;
    getline( std :: cin , modelo ) ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Aviao\nInforme a quantidade de asas do Aviao: " ;
    std :: cin >> qtAsa ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Aviao\nInforme a quantidade de motores do aviao: " ;
    std :: cin >> qtMotor ;
    
    system("pause") ;
    system("cls") ;

    tanqueStr = to_string( tanque ) ;

    jatinhoParticular -> setAno( ano         ) ;
    jatinhoParticular -> setPeso( peso       ) ;
    jatinhoParticular -> setTanque( tanque   ) ;
    jatinhoParticular -> setModelo( modelo   ) ;
    jatinhoParticular -> setQtAsa( qtAsa     ) ;
    jatinhoParticular -> setQtMotor( qtMotor ) ;

    std :: cout << "Navio\nInforme o ano do navio: " ;
    std :: cin >> ano ;
    
    system("pause") ;
    system("cls") ;

    std :: cout << "Navio\nInforme o peso do navio: " ;
    std :: cin >> peso ;

    system("pause") ;
    system("cls") ;

    std :: cout << "Navio\nInforme o tanque do navio: " ;
    std :: cin >> tanque ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Navio\nInforme o modelo do navio: " ;
    getline( std :: cin , modelo ) ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Navio\nInforme a quantidade de motores do navio: " ;
    std :: cin >> qtMotor ;
   
    system("pause") ;
    system("cls") ;

    std :: cout << "Navio\nInforme a quantidade de conves do navio: " ;
    std :: cin >> qtConves ;
    
    system("pause") ;
    system("cls") ;

    tanqueStr = to_string( tanque ) ;

    submarinoAmarelo -> setAno( ano           ) ;
    submarinoAmarelo -> setPeso( peso         ) ;
    submarinoAmarelo -> setTanque( tanque     ) ; 
    submarinoAmarelo -> setModelo( modelo     ) ;
    submarinoAmarelo -> setQtMotor( qtMotor   ) ;
    submarinoAmarelo -> setQtConves( qtConves ) ;

    std :: cout << "-------------\n"
                << "Carro:\n"
                << "-------------\n" ;
    
    carrinhoDeControle -> info() ;

    std :: cout << "\n-------------\n"
                << "Aviao:\n"
                << "-------------\n" ;
  
    jatinhoParticular -> info() ;

    std :: cout << "\n-------------\n"
                << "Navio:\n"
                  << "-------------\n" ;
    submarinoAmarelo -> info() ;
    
    cout << "\n-------------\n" ;

    return 0 ;
}
