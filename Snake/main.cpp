
/*
    Snake para C++ feito por NVitanovic

    Link para o seu canal.....: https://www.youtube.com/channel/UCqXrJmvJAvFnGyLGSBnk45g
    Link para o primeiro vídeo: https://www.youtube.com/watch?v=E_-lMZDi7Uw&list=PLrjEQvEart7dPMSJiVVwTDZIHYq6eEbeL
*/

// Bibliotecas

    #include <conio.h>
    #include <iostream>
    #include <windows.h>

// Variáveis

    int x ;
    int y ;

    int maca_x ;
    int maca_y ;

    int pontuacao = 0 ;

    int tamanho_cauda = 0 ;

    int cauda_x[ 100 ] ;
    int cauda_y[ 100 ] ;

    bool fim_de_jogo ;

    const int altura  = 20 ;
    const int largura = 20 ;

    enum direcao_enum { parar = 0 , esquerda , direita , cima , baixo } ;

         direcao_enum dir ;

// Função para resetar variáveis e começar/reiniciar o jogo

void resetar()
{
    dir = parar ;

    pontuacao = 0 ;

    fim_de_jogo = false ;

    y = altura  / 2 ;
    x = largura / 2 ;

    maca_y = rand() % altura  ;
    maca_x = rand() % largura ;
}

// Função para desenhar a área de jogo , cobra e a maça

void desenhar()
{
    system("cls") ;

    for ( int i = 0 ; i < largura + 2 ; i++ )
    {
        std :: cout << '#' ;
    }
    std :: cout << std :: endl ;

    for ( int i = 0 ; i < altura ; i++ )
    {
        for ( int j = 0 ; j < largura ; j++ )
        {
            if ( j == 0 )
            {
                std :: cout << '#' ;
            }
            if ( i == y && j == x )
            {
                std :: cout << 'O' ;
            }
            else if ( i == maca_y && j == maca_x )
            {
                std :: cout << 'F' ;
            }
            else
            {
                bool print = false ;

                for ( int k = 0 ; k < tamanho_cauda ; k++ )
                {
                    if ( cauda_x[ k ] == j && cauda_y[ k ] == i )
                    {
                        std :: cout << 'o' ;
                        print = true ;
                    }
                }
                if ( ! print )
                {
                    std :: cout << ' ' ;
                }
            }
            if ( j == largura - 1 )
            {
                std :: cout << '#' ;
            }
        }
        std :: cout << std :: endl ;
    }
    for ( int i = 0 ; i < largura + 2 ; i++ )
    {
        std :: cout << '#' ;
    }
    std :: cout << "\npontuacao: " << pontuacao
                << "\n\nDigite x para sair do jogo.";
}

// Função para mover a cobra

void input()
{
    if ( _kbhit() )
    {
        switch( _getch() )
        {
            case 'w' : dir      = cima     ; break ;
            case 's' : dir      = baixo    ; break ;
            case 'd' : dir      = direita  ; break ;
            case 'a' : dir      = esquerda ; break ;
            case 'x' : fim_de_jogo = true     ; break ;
        }
    }
}

// Função para aumentar tamanho , pontuação , matar e mover a cobra

void logica()
{
    int x_anterior_2 ;
    int y_anterior_2 ;

    int x_anterior_1 = cauda_x[ 0 ] ;
    int y_anterior_1 = cauda_y[ 0 ] ;

    cauda_x[ 0 ] = x ;
    cauda_y[ 0 ] = y ;

    for ( int i = 1 ; i < tamanho_cauda ; i++ )
    {
        x_anterior_2 = cauda_x[ i ] ;
        y_anterior_2 = cauda_y[ i ] ;

        cauda_x[ i ] = x_anterior_1 ;
        cauda_y[ i ] = y_anterior_1 ;

        x_anterior_1 = x_anterior_2 ;
        y_anterior_1 = y_anterior_2 ;
    }
    switch( dir )
    {
        case cima     : y-- ; break ;
        case baixo    : y++ ; break ;
        case direita  : x++ ; break ;
        case esquerda : x-- ; break ;
    }
    // if ( x > largura || y > altura || x < 0 || y < 0 ) { fim_de_jogo = true ; }

    if ( y >= altura  ) { y = 0 ; } else if ( y < 0 ) { y = altura  - 1 ; }
    if ( x >= largura ) { x = 0 ; } else if ( x < 0 ) { x = largura - 1 ; }

    for ( int i = 0 ; i < tamanho_cauda ; i++ )
    {
        if ( cauda_x[ i ] == x && cauda_y[ i ] == y )
        {
            fim_de_jogo = true ;
        }
    }
    if ( x == maca_x && y == maca_y )
    {
        tamanho_cauda++ ;

        pontuacao += 10 ;

        maca_y = rand() % altura  ;
        maca_x = rand() % largura ;
    }
}

int main()
{
    resetar() ;

    while ( ! fim_de_jogo )
    {
        desenhar () ;

        // Diminuir velocidade da cobra

        if ( dir == esquerda || dir == direita )
        {
            Sleep( 10 ) ;
        }
        else
        {
            Sleep( 25 ) ;
        }
        input () ;
        logica() ;

        if ( fim_de_jogo )
        {
            std :: cout << "\n\nFim de jogo.\n" ;
        }
    }
    return 0 ;
}
