#include <stdio.h>
#include <stdbool.h>

/*2) Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X
(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para
a primeira posição de memória onde X foi encontrado.
-Se X não estiver no vetor, a função deve retornar NULL.
-Apresente o resultado na main.
*/


int *vetorinteiro(int *vetor, int tamanho, int num){
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == num) {
            return &vetor[i];
        }
    }

    return NULL;
};


int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int *encontrado = vetorinteiro(vetor, tamanho, num);
  
    if (encontrado != NULL) {
        printf("O valor %d pertence ao vetor.\n", num);
    } else {
        printf("O valor %d NAO pertence ao vetor.\n", num);
    }


    return 0;
}