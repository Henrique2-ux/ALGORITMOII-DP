#include <stdio.h>
#include <stdbool.h>

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
