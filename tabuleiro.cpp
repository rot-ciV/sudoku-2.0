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

bool Tabuleiro::VerificaColuna(){

    for(int coluna = 0; coluna < 9; coluna++){
        
        int aux[10] = {0};
        int inicio = coluna;

        for(int i = inicio; i < 81; i += 9){

            aux[grade[i]]++;

            if(aux[grade[i]] > 1 && grade[i] != 0){

                return false;
            }
        }
    }

    return true;
}

bool Tabuleiro::VerificaQuadrante(){

    for(int quadrante = 0; quadrante < 9; quadrante++){

        int aux[10] = {0};
        int inicio = 27 * (quadrante / 3) + (quadrante % 3) * 3;
        int gradeAtual = inicio;
        
        for(int i = 0; i < 9; i++){

            gradeAtual = inicio + (i / 3) * 9 + (i % 3);
            aux[grade[gradeAtual]]++;

            if(aux[grade[gradeAtual]] > 1 && grade[gradeAtual] != 0){

                return false;   
            }
        }
    }

    return true;
}