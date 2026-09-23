#include <stdio.h>

int perfeito(int valor){
    int soma = 0;
    int i;

    for (i = 1; i < valor; i++){
        if (valor % i == 0){
            soma = soma + i;
        }
    }

    if (soma == valor){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (perfeito(valor) == 1){
        printf("O valor e perfeito.\n");
    }
    else{
        printf("O valor nao e perfeito.\n");
    }

    return 0;
}
