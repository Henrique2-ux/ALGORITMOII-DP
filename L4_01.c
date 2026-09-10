#include <stdio.h>
#include <string.h>

struct Dados{
    char nome[50];
    int idade;
    char endereco[100];
};

int main(){
    struct Dados D;
    struct Dados *pa;
    pa = &D;
    char Informacoes[10][50];

    printf("Digite seus dados: ");
    fgets(Informacoes[0], sizeof(Informacoes[0]), stdin);
    
    return 0;
}