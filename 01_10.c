#include <stdio.h>

float calcular(float a, float b, char operacao) {
    switch (operacao) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 0; 
            }
        default:
            printf("Erro: Operação inválida!\n");
            return 0;
    }
}

int main() {
    float num1, num2, resultado;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    resultado = calcular(num1, num2, op);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
