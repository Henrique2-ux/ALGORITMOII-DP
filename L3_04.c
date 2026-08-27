#include <stdio.h>

/* Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos
elementos de um vetor original.
-Você deve criar dois ponteiros locais dentro da função: um inicio apontando
para o primeiro elemento e um fim apontando para o último.
Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de
lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis
inteiras como índice.
*/

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