#include <stdio.h>
#include <math.h>

/*1) Em C, funções retornam apenas um valor. Crie um programa que contorne isso
usando ponteiros.
-Implemente uma função chamada calcular_esfera que receba o raio de uma
esfera e devolva sua área e seu volume.
-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
-Na main, peça ao usuário o raio, chame a função e imprima os resultados.
(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³)*/

void calcularesfera(float raio, float *area, float *volume){
    *area = 4.0f *3.14f * pow(raio, 2.0f);
    *volume = (4.0f/3.0f) * 3.14 * pow(raio, 3.0f);
};

int main(){

    float raio, area, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    calcularesfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f", volume);

    return 0;
}