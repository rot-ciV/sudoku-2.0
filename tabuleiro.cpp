#include "tabuleiro.hpp"
#include <iostream>


Tabuleiro::Tabuleiro() {

    for(int i = 0; i < 81; i++){

        grade[i] = 0;
    }
}

void Tabuleiro::InsereNumGrade(int numero, int posicao){

    if(posicao >=0 && < 81){
        if(numero >= 0 && numero <= 9){

            grade[posicao] = numero;
        }
    }
}
    

void Tabuleiro::RetiraNumGrade(int posicao){

    if(posicao >=0 && posicao < 81){

        InsereNumGrade(0, posicao);
    }
}

bool Tabuleiro::VerificaGrade(){

    return VerificaLinha() && VerificaColuna() && VerificaQuadrante();
}

bool Tabuleiro::VerificaLinha(){

    for(int linha = 0; linha < 9; linha++){

        int aux[10] = {0};
        int comeco = 9 * linha;
        int fim = 9 * (1 + linha);

        for(int i = comeco; i < fim; i++){

            aux[grade[i]]++;

            if(aux[grade[i]] > 1 && grade[i] != 0){

                return false;
            }
        }
    }

    return true;
}

bool Tabuleiro:: VerificaColuna(){

    for(int coluna = 0; coluna < 9; coluna++){
        
        
    }
}