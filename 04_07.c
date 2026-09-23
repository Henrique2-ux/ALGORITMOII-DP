#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main() {
    struct Atleta atletas[5];

    for (int i = 0; i < 5; i++) {
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';

        scanf("%d %f", &atletas[i].idade, &atletas[i].altura);
        getchar();
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (atletas[j].idade < atletas[j + 1].idade) {
                struct Atleta temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s - %d anos\n", atletas[i].nome, atletas[i].idade);
    }

    return 0;
}
