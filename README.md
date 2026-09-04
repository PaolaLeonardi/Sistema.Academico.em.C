# Sistema Acadêmico 

Projeto desenvolvido em linguagem C para a disciplina de **Programação Imperativa**, com o objetivo de armazenar, classificar e apresentar informações sobre estudantes.

## Sobre o projeto

O programa permite cadastrar os dados dos estudantes, armazenando:

* Número de matrícula;
* Nota semestral;
* Indicador de aprovação.

Após a entrada dos dados, o sistema verifica automaticamente a situação de cada estudante. O estudante é considerado **aprovado quando sua nota é igual ou superior a 7,0**. Caso contrário, é considerado **reprovado**.

## Estrutura do projeto

O projeto foi dividido em diferentes arquivos de implementação e cabeçalhos:

```text
PBL04/
│
├── Leitura.c
├── Leitura.h
├── Classificacao.c
├── Classificacao.h
├── Relatorio.c
├── Relatorio.h
└── SistemaAcademico.c
```

### Leitura

Responsável pela entrada dos dados dos estudantes através do teclado.

### Classificação

Responsável por verificar a nota de cada estudante e determinar se ele está aprovado ou reprovado.

### Relatório

Responsável por apresentar na tela os dados completos dos estudantes e suas respectivas situações.

### Sistema Acadêmico

Contém a função `main`, responsável por executar as etapas principais do programa:

1. Ler os dados dos estudantes;
2. Classificar cada estudante;
3. Imprimir o relatório final.

## Tecnologias utilizadas

* **Linguagem:** C
* **Biblioteca:** `stdio.h`
* **Biblioteca:** `stdbool.h`

## Conceitos utilizados

Durante o desenvolvimento foram utilizados conceitos fundamentais de programação em C, como:

* `struct`;
* Vetores de estruturas;
* Funções;
* Ponteiros;
* Passagem de parâmetros;
* Estruturas condicionais;
* Laços de repetição;
* Arquivos `.c` e `.h`;
* Modularização do código.

## Como executar

Compile todos os arquivos `.c` juntos utilizando um compilador C. Por exemplo, com o GCC:

```bash
gcc SistemaAcademico.c Leitura.c Classificacao.c Relatorio.c -o SistemaAcademico
```

Depois, execute o programa:

```bash
./SistemaAcademico
```

No Windows, dependendo do ambiente utilizado:

```bash
SistemaAcademico.exe
```

## Objetivo acadêmico

Este projeto foi desenvolvido como atividade prática da disciplina de **Programação Imperativa**, com foco na utilização de estruturas, funções, vetores e modularização em linguagem C.
