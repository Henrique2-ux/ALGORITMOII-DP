#include <stdio.h>
#include <math.h>

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
