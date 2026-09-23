#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho){

    int *inicio = vetor;
    int *final = vetor + tamanho - 1;
    int temp;

    while( inicio < final){
        temp = *inicio;
        *inicio = *final;
        *final = temp;

        inicio++;
        final--;
    }

    if(inicio == final){
        printf("Ponteiro se encontraram \n");
    }
};

int main(){

    int vetor[] = {1,2,3,4,5,};
    int tamanho = 5;

    inverte_vetor(vetor, tamanho);

    for (int *p = vetor; p < vetor + tamanho; p++) {
        printf("%d ", *p);
    }

    return 0;
}
