#include <stdio.h>
#include <math.h>

float calcular (float RaioEsf){
    return (4/3) * 3,14 * pow(RaioEsf, 3);
}

int main(){
    float RaioEsf, Volume;
    scanf("%f", &RaioEsf);
    Volume = calcular(RaioEsf);

    printf("%.2f", Volume);
    return 0;
}
