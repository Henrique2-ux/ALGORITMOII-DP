#include <stdio.h>

void preencher(int *ptr, int valor, int tamanho){
    int *p;
    for (p = ptr; p < ptr + tamanho; p++) {
        *p = valor;
    }
}

int main() {
    int v[5];
    preencher(v, 7, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
