#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno alunos[5];
    int melhor = 0;
    float maior_media = -1;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &alunos[i].matricula);
        getchar();
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);

        float media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;

        if (media > maior_media) {
            maior_media = media;
            melhor = i;
        }
    }

    printf("Nome: %s\n", alunos[melhor].nome);
    printf("Notas: %.2f %.2f %.2f\n", alunos[melhor].notas[0], alunos[melhor].notas[1], alunos[melhor].notas[2]);

    return 0;
}
