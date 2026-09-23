#include <stdio.h>

int calcular_media() {
    int valor;
    int soma = 0;
    int contador = 0;

    printf("Digite valores positivos (digite um número negativo para parar):\n");
    
    for (;;) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;
        }
        soma += valor;
        contador++;
    }

    if (contador == 0) {
        return 0;
    }

    return soma / contador;
}

int main() {
    int media = calcular_media();
    
    if (media > 0) {
        printf("A média aritmética é: %d\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}
