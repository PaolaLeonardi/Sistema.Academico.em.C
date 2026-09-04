#ifndef LEITURA_H
#define LEITURA_H
#include <stdbool.h>
#define TAM 10

struct Estudante {
    int matricula;
    float nota;
    bool aprovado;
};

void ler_dados_dos_estudantes(struct Estudante estudantes[]);

#endif