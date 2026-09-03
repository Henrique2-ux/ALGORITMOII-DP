#include <stdio.h>

void ponteiro(int valorA, int valorB){
    int *A, *B;

    printf("insira os valores \n");
    scanf("%d %d", &valorA, &valorB);

    A = &valorA;
    B = &valorB;

    if(&A > &B){
        printf("O maior endereco: %p \n", A);
        printf("O conteudo: %d", *A);
    }if(&B > &A){
        printf("o maior endereco: %p \n", B);
        printf("O conteudo: %d", *A);
    }

}

int main (){
    int valorA, valorB;
    ponteiro(valorA,valorB);
    return 0;
}
