#include "Classificacao.h"

void classificar(struct Estudante *estudante) {
    if (estudante->nota >= 7) {
        estudante->aprovado = true;
    } else {
        estudante->aprovado = false;
    }
}