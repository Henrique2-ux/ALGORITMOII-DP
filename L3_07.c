#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *vetor, int tamanho) {
    int *p, *q;

    for (p = vetor; p < vetor + tamanho - 1; p++) {
        for (q = vetor; q < vetor + tamanho - 1 - (p - vetor); q++) {
            if (*q > *(q + 1)) {
                swap(q, q + 1);
            }
        }
    }
}

int main() {
    int vetor[] = {5, 2, 9, 1, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    bubbleSort(vetor, tamanho);

    printf("Vetor ordenado: ");

    for (int *p = vetor; p < vetor + tamanho; p++) {
        printf("%d ", *p);
    }

    printf("\n");

    return 0;
}
