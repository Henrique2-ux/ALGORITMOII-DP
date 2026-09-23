#include <stdio.h>

double calcularS(int n){
    double soma = 1.0;
    double fatorial = 1.0;
    int i;

    for (i = 1; i <= n; i++){
        fatorial = fatorial * i;
        soma = soma + 1.0 / fatorial;
    }

    return soma;
}

int main(){
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("S = %.2lf\n", calcularS(n));

    return 0;
}
