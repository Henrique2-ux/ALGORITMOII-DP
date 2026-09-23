#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias){
    return (anos * 365) + (meses * 30) + dias;
}

int main(){
    int anos, meses, dias;

    printf("Digite sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    printf("Idade em dias: %d\n", idadeEmDias(anos, meses, dias));

    return 0;
}
