#include <stdio.h>

void converterTempo(int segundos){
    int horas, minutos;
  
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}

int main(){
    int tempo;
  
    printf("Digite o tempo de duracao da fabrica em segundos: ");
    scanf("%d", &tempo);
  
    converterTempo(tempo);
    return 0;
}
