#include <stdio.h>
#include "Relatorio.h"

void imprimir_relatorio(struct Estudante estudantes[]) {
    for (int contador = 0; contador < TAM; contador++) {
        printf("\nMatricula: %d\n", estudantes[contador].matricula);
        printf("Nota: %.2f\n", estudantes[contador].nota);

        if (estudantes[contador].aprovado) {
            printf("Classificacao: Aprovado\n");
        } else {
            printf("Classificacao: Reprovado\n");
        }
    }
}