#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Horario h[5];
    int maior = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &h[i].hora, &h[i].minuto, &h[i].segundo);

        if (i > 0) {
            int seg_atual = h[i].hora * 3600 + h[i].minuto * 60 + h[i].segundo;
            int seg_maior = h[maior].hora * 3600 + h[maior].minuto * 60 + h[maior].segundo;

            if (seg_atual > seg_maior) {
                maior = i;
            }
        }
    }

    printf("Maior hora: %02d:%02d:%02d\n", h[maior].hora, h[maior].minuto, h[maior].segundo);

    return 0;
}
