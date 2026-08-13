#include <stdio.h>

int media (float nota){
    printf("insira a nota");
    scanf("%f", &nota);

    if(nota == 0 && nota <= 4.9){
        printf("Conceito: D");
    }
    if(nota == 5 && nota <= 6.9){
        printf("Conceito: C");
    }
    if(nota == 7 && nota <= 8.9){
        printf("Conceito: B");
    }
    if(nota == 9 && nota <= 10){
        printf("Conceito: A");
    }
}

int main(){
    float nota;
    media(nota);
    return 0;

}
