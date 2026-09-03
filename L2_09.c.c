#include <stdio.h>

void imprimir(int *v, int tamanho){
    int *p;
    for (p = v; p < v + tamanho; p++) {
        printf("%d ", *p);
    }
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    imprimir(vet, 5);
    return 0;
}
