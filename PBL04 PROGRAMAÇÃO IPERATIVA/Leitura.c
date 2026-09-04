#include <stdio.h>
#include <stdbool.h>
#include "Leitura.h"

void ler_dados_dos_estudantes(struct Estudante estudantes[]) {
    for (int contador = 0; contador < TAM; contador++) {
        printf("Digite a matricula: ");
        scanf("%d", &estudantes[contador].matricula);

        printf("Digite a nota: ");
        scanf("%f", &estudantes[contador].nota);
    }
}