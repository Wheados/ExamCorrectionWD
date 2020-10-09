#ifndef PROVA_H
#define PROVA_H

#include <string>
#include <questao.hpp>

struct Prova{
    private:
        int quantidadeAlunos;
        int quantidadeQuestoes;
        std::string gabarito;
        Questao questoes[10]; //if lerProva return quantidadeQuestoes >10, resize.

    public:
        void setGabarito(std::string gabarito);
        std::string getGabarito();

        int getQtdAlunos();
        int getQtdQuestoes();

        void lerProva(std::string path); //Ler arquivo e contar quantos alunos e questões
};

#endif