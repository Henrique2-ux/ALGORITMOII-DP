#include <stdio.h>
#include <stdlib.h>
    
int main(){

    int *inte;
    float *fl;
    char *str;
    double *dou;

    int num = 1;

    inte = (int *) calloc(num, sizeof(int));
    fl = (float *) calloc(num, sizeof(float));
    str = (char *) calloc(num, sizeof(char));
    dou = (double *) calloc(num, sizeof(double));

    if(inte == NULL || fl == NULL || str == NULL || dou == NULL ){
        printf("Erro de alocacao \n");
        return 1;
    }

    printf("Memoria alocada para int: %zu bytes\n", num * sizeof(int));
    printf("Memoria alocada para um caracter: %zu bytes\n", num * sizeof(char));
    printf("Memoria alocada para float: %zu bytes\n", num * sizeof(float));
    printf("Memoria alocada para double: %zu bytes\n", num * sizeof(double));


    free(inte);
    free(fl);
    free(str);
    free(dou);

    return 0;
};