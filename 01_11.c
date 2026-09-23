#include <stdio.h>

void verificar_triangulo(double x, double y, double z) {
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Os valores formam um triângulo Equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os valores formam um triângulo Isósceles.\n");
        } else {
            printf("Os valores formam um triângulo Escaleno.\n");
        }
    } else {
        printf("Os valores não podem formar um triângulo.\n");
    }
}

int main() {
    double x, y, z;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);
    printf("Digite o valor de Z: ");
    scanf("%lf", &z);

    verificar_triangulo(x, y, z);

    return 0;
}
