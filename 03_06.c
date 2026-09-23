#include <stdio.h>

int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s) {

    for (int i = 0; i <= tam_v - tam_s; i++) {

        int encontrou = 1;

        for (int j = 0; j < tam_s; j++) {

            if (*(vetor + i + j) != *(sub + j)) {
                encontrou = 0;
                break;
            }
        }

        if (encontrou) {
            return vetor + i;
        }
    }

    return NULL;
}

int main() {

    int vetor[] = {10, 20, 30, 40, 50, 60};
    int sub[] = {30, 40, 50};

    int tam_v = 6;
    int tam_s = 3;

    int *resultado = busca_subvetor(vetor, tam_v, sub, tam_s);

    if (resultado != NULL) {
        printf("Subvetor encontrado!\n");
        printf("Primeiro elemento: %d\n", *resultado);
    } else {
        printf("Subvetor nao encontrado!\n");
    }

    return 0;
}
