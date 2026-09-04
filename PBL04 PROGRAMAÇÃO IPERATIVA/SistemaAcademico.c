#include "Leitura.h"
#include "Classificacao.h"
#include "Relatorio.h"

int main() {
    struct Estudante estudantes[TAM];

    ler_dados_dos_estudantes(estudantes);

    for (int contador = 0; contador < TAM; contador++) {
        classificar(&estudantes[contador]);
    }

    imprimir_relatorio(estudantes);

    return 0;
}