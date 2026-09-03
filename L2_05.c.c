#include <stdio.h>

int main(){
    int valores[5];
    int *pt[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o M[%d]: ", i);
        scanf("%d", &valores[i]);
    }

    for(i = 0; i < 5; i++){
        pt[i] = &valores[i];
    }

    for(i = 0; i < 5; i++){
        printf("Dobro de M[%d] = %d\n", i, (*pt[i]) * 2);
    }

    return 0;
}
