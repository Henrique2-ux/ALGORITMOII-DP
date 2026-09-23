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
        if((*pt[i] % 2) == 0){
            printf("O endereco de M[%d] = %p\n", i, (void *)pt[i]);
        }
    }

    return 0;
}
