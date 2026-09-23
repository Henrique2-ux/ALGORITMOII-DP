#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto supesq;
    struct Ponto infdir;
};

int main() {
    struct Retangulo r;

    scanf("%f %f", &r.supesq.x, &r.supesq.y);
    scanf("%f %f", &r.infdir.x, &r.infdir.y);

    float largura = fabs(r.infdir.x - r.supesq.x);
    float altura = fabs(r.supesq.y - r.infdir.y);

    float area = largura * altura;
    float perimetro = 2 * (largura + altura);
    float diagonal = sqrt(largura * largura + altura * altura);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
