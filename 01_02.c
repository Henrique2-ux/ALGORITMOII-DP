#include <stdio.h>
#include <math.h>

double delta(float A, float B, float C){
    return pow(B, 2) - 4 * A * C;
}

float X1(float A, float B){
    int D = delta;
    return (-B + sqrt(D))/2 * A; 
}

float X2(float A, float B){
    int D = delta;
    return (-B - sqrt(D))/2 * A; 
}

int Verificar(float A){
    if (delta > 0){
        return printf("Possui 2 raizes");
    }
    if (delta == 0){
        return printf("Uma raiz real ou duas iguais");
    }
    if (delta < 0){
        return printf("Nao possui raiz real");
        return 0;
    }
    if (A == 0){
        return printf("A tem que ser diferente de 0");
    }
}

int main(){
    float A, B, C, resultX1, resultX2;

    printf("Digite os valores de A B C");
    scanf("%.2f %.2f %.2f", &A, &B, &C);
    delta;
    Verificar(A);
    resultX1 = X1(A, B);
    resultX2 = X2(A, B);

    printf("X1: %.2f \n X2: %2.f", resultX1, resultX2);

    return 0;
}
