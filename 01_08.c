#include <stdio.h>

int somatorio(int n){
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++){
        soma = soma + i;
    }

    return soma;
}

int main(){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Somatorio: %d\n", somatorio(n));

    return 0;
}
