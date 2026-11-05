#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

int main() {
    printf("%lu\n", sizeof(struct Aluno));
    return 0;
}