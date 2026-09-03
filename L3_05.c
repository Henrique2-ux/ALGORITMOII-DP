#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media){
    int soma = 0;
    *min = *vetor;
    *max = *vetor; 

    for(int i = 0; i <= (tamanho - 1); i++){
        if( *(vetor + i) < *min){
            *min =  *(vetor + i);
        }

        if( *(vetor + i) > *max){
            *max =  *(vetor + i);
        }
        soma = soma +  *(vetor + i);
    }
    *media = (float)soma / tamanho;
};

int main(){

    int inteiros[20] = {5, 12, 8, 20, 3, 15, 7, 10, 2, 18, 6, 14, 9, 1, 16, 11, 4, 19, 13, 17};
    int tamanho = 20, min, max;
    float media;

    extrair_estatisticas(inteiros, tamanho, &min, &max, &media);
    printf("Menor valor: %d \n", min);
    printf("Maior valor: %d\n", max);
    printf("Media: %.2f\n", media);
    return 0;
}