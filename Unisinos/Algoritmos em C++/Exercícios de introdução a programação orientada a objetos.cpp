
/*
    Linha , 133 atividade 1.Crie a classe Paralelepipedo com:
                                                                Atributos:
                                                                            Base 
                                                                            Altura
                                                                            Largura
                                                                Metodos:
                                                                            Getter e setter
                                                                            Volume

    Linha , 152 atividade 2.Crie a classe Imposto de renda com:
                                                                Atributos:
                                                                            Nome do contribuinte 
                                                                            Ano de nascimento 
                                                                            Profissão
                                                                            Escolaridade
                                                                            Renda mensal
                                                                            Número de dependentes

                                                                Metodos: 
                                                                            Idade
                                                                            Renda anual
                                                                            Renda per capita mensal
                                                                            Aliquota IR máxima
                                                                            Aliquota IR efetiva
                                                                            Valor IR devido ( respeitar as faixas )
                                                                        
                                                                            Cada dependente reduz a base de calculo de imposto em R$190,00 por mes.
                                                                            Instancie um objeto dinamicamente , receba todos os atributos. 
                                                                            Calcule o IR e imprimir todos os dados.
                                                                        
                                                                            --------------------------------------------------------------
                                                                            Renda Mensal(R$)          Aliquota (%)  R$3.000,00  R$5.000,00
                                                                            --------------------------------------------------------------
                                                                            Ate 1.900,00                0,0           R$0,00      R$0,00
                                                                            De 1.900,01 até 2.820,00    7,5           R$920,00    R$ 920,00
                                                                            De 2.820,01 até 3.740,00    15,0          R$ 180,00   R$ 920,00
                                                                            De 3.740,01 até 4.660,00    22,5          R$ 0,00     R$920,00
                                                                            Acima de 4.660,00           27,5          R$ 0,00     R$ 340,00
                                                                            ---------------------------------------------------------------
*/

#include <cstdio>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

class Paralelepipedo
{
    float base , altura , largura ;

    public :
                void setBase( float base ) { this -> base = base ; }
                float getBase(           ) { return this -> base ; }
    
                void setAltura( float altura ) { this -> altura = altura ; }
                float getAltura(             ) { return this -> altura   ; }
    
                void setLargura( float largura ) { this -> largura = largura ; }
                float getLargura(              ) { return this -> largura    ; }
    
                float area(  ) { return this -> base * this -> altura   ; }
                float volume() { return this -> base * altura * largura ; }
} ;

class ImpostoDeRendaSimplificado
{
    private :
                float renda, valorBase, aliquota ;
                int dia , mes , ano , dependentes , idade ;
                std :: string nome , profissao , escolaridade ;
    public:
                void setNome( std :: string nome ) { this -> nome = nome ; }
                std :: string getNome(           ) { return this->nome   ; }
                
                void setDia( int dia ) { this -> dia = dia  ; }
                int getDia(          ) { return this -> dia ; }

                void setMes( int mes ) { this -> mes = mes ; }
                int getMes(          ){ return this -> mes ; }

                void setAno( int ano ) { this -> ano = ano  ; }
                int getAno(          ) { return this -> ano ; }
                
                void setIdade( int idade ) { this -> idade = idade ; }
                int getIdade(            ) { return this -> idade  ; }
                
                void setProfissao( std :: string profissao ) { this -> profissao = profissao ; }
                std :: string getProfissao(                ) { return this -> profissao      ; }
                
                void setEscolaridade( std :: string escolaridade ) { this -> escolaridade = escolaridade ; }
                std :: string getEscolaridade(                   ) { return this -> escolaridade         ; }
                
                void setRenda( float renda ) { this -> renda = renda ; }
                float getRenda(            ) { return this -> renda  ; }

                float getRendaAnual() { return this -> renda * 12 ; }

                void setDependentes( int dependentes ) { this -> dependentes = dependentes ; }
                int getDependentes(                  ) { return this -> dependentes        ; }
             
                float aliquotaIrMaxima()
                {
                    valorBase = renda - ( 190 * dependentes ) ;

                    if ( valorBase <= 1900                         ) { aliquota = 0    ; return this -> aliquota ; }
                    if ( valorBase >= 1900.01 && valorBase <= 2820 ) { aliquota = 7.5  ; return this -> aliquota ; }
                    if ( valorBase >= 2820.01 && valorBase <= 3740 ) { aliquota = 15   ; return this -> aliquota ; }
                    if ( valorBase >= 3740.01 && valorBase <= 4660 ) { aliquota = 22.5 ; return this -> aliquota ; } 
                    if ( valorBase >= 4660.01                      ) { aliquota = 27.5 ; return this -> aliquota ; }
                }
               
                float aliquotaIrEfetiva() { return this -> aliquota ; }
               
                float valorIrDevido()
                {
                    valorBase = renda - ( 190 * dependentes ) ;
                    
                    if ( valorBase <= 1900                         ) { aliquota = 0                           ; return this -> aliquota ; }
                    if ( valorBase >= 1900.01 && valorBase <= 2820 ) { aliquota = 920 - valorBase * 7.5 / 100 ; return this -> aliquota ; }
                    if ( valorBase >= 2820.01 && valorBase <= 3740 ) { aliquota = 180 - valorBase * 15 / 100  ; return this -> aliquota ; }
                    if ( valorBase >= 3740.01 && valorBase <= 4660 ) { aliquota = valorBase * 22.5 / 100      ; return this -> aliquota ; }
                    if ( valorBase >= 4660.01                      ) { aliquota = valorBase * 27.5 / 100      ; return this -> aliquota ; }
                }
} ;

int main()
{
    Paralelepipedo r1 ;
    Paralelepipedo *r2 = new Paralelepipedo() ;

    // Atividade 1.

    r1.setBase( 10.0   ) ;
    r1.setAltura( 8.5  ) ;
    r1.setLargura( 7.0 ) ;

    r2 -> setBase ( 12.2  ) ;
    r2 -> setAltura( 6.8  ) ;
    r2 -> setLargura( 1.2 ) ;

    std :: cout << "Area: " <<     r1.getBase() << " x " << r1.getAltura() << " = " << r1.area() << " cm2" 
                << "\nVolume: " << r1.getBase() << " x " << r1.getAltura() << " x " << r1.getLargura() << " = " << r1.volume() << " cm3" ;

    std :: cout << "\n\nArea: " << r2 -> getBase() << " x " << r2 -> getAltura() << " = " << r2 -> area() << " cm2"
                << "\nVolume: " << r2 -> getBase() << " x " << r2 -> getAltura() << " x " << r2-> getLargura() << " = " << r2 -> volume() << " cm3\n\n" ;
    
    system("pause") ;
    system("cls") ;

    // Atividade 2.

    ImpostoDeRendaSimplificado *pessoa = new ImpostoDeRendaSimplificado() ;

    float renda ;
    int dia , mes , ano , dependentes , idade ;
    std :: string nome , profissao , escolaridade ;

    std :: cout << "----------Calculo do imposto de renda simplificado----------" 
                << "\n\nInforme o seu nome: " ;
    std :: getline( std :: cin , nome ) ;
  
    system("pause") ;
    system("cls") ;

    pessoa -> setNome( nome ) ;

    std :: cout << "Informe a sua profissao: " ;
    std :: getline( std :: cin , profissao ) ;

    system("pause") ;
    system("cls") ;

    pessoa -> setProfissao( profissao ) ;

    std :: cout << "Informe o seu nivel de escolaridade: " ;
    std :: getline( std :: cin , escolaridade ) ;

    system("pause") ;
    system("cls") ;

    pessoa -> setEscolaridade( escolaridade ) ;

    std :: cout << "Informe seu dia de nascimento: " ;
    std :: cin >> dia >> mes >> ano ;
    
    system("pause") ;
    system("cls") ;

    pessoa -> setDia( dia ) ;
    pessoa -> setMes( mes ) ;
    pessoa -> setAno( ano ) ;

    std :: cout << "Informe a sua idade: " ;
    std :: cin >> idade ;
   
    system("pause") ;
    system("cls") ;

    pessoa -> setIdade( idade ) ;
   
    std :: cout << "Informe o numero de dependentes: " ;
    std :: cin >> dependentes ;

    system("pause") ;
    system("cls") ;

    pessoa -> setDependentes( dependentes ) ;

    std :: cout << "Informe a sua renda mensal: " ;
    std :: cin >> renda ;

    system("pause") ;
    system("cls") ;
    
    pessoa -> setRenda( renda ) ;

    std :: cout << "\n----------------------Dados completos----------------------" 
                << "\n\nNome completo: "         << pessoa -> getNome()
                << "\nData de nascimento: "      << pessoa -> getDia() << "/" << pessoa -> getMes() << "/" << pessoa -> getAno()
                << "\nIdade atual: "             << pessoa -> getIdade()
                << "\nProfissao atual: "         << pessoa -> getProfissao()
                << "\nNivel de escolaridade: "   << pessoa -> getEscolaridade()
                << "\nRenda per capita mensal: " << std :: fixed << std :: setprecision( 2 ) << pessoa -> getRenda()
                << "\nRenda per capita anual: "  << std :: fixed << std :: setprecision( 2 ) << pessoa -> getRendaAnual()
                << "\nNumero de dependentes: "   << pessoa -> getDependentes()
                << "\nAliquota maxima: "         << pessoa -> aliquotaIrMaxima() 
                << "%\nAliquota efetiva: "       << pessoa -> aliquotaIrEfetiva() 
                << "\nAliquota maxima devida: " <<  pessoa -> valorIrDevido() ;
    
    delete r2 ;
    delete pessoa ;

    return 0 ;
}
