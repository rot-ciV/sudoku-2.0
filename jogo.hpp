#ifndef JOGO_HPP
#define JOGO_HPP

#include "tabuleiro.hpp"

class Jogo{

    private:

    Tabuleiro tabuleiro;

    public:

    Jogo();
    ~Jogo();
    void IniciaJogo();
};

#endif