#ifndef TABULEIRO_H
#define TABULEIRO_H

class Tabuleiro{

    private:

    int grade [81];

    bool VerificaLinha();
    bool VerificaColuna();
    bool VerificaQuadrante();

    public:

    Tabuleiro();
    ~Tabuleiro();
    void InsereNumGrade(int numero, int posicao);
    void RetiraNumGrade(int posicao);
    bool VerificaGrade();
};

#endif