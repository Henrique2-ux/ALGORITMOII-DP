#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ehBissexto(ano)) {
        return 29;
    }
    return diasPorMes[mes];
}

long int dataParaDias(struct Data d) {
    long int totalDias = d.dia;

    for (int y = 0; y < d.ano; y++) {
        totalDias += ehBissexto(y) ? 366 : 365;
    }

    for (int m = 1; m < d.mes; m++) {
        totalDias += diasNoMes(m, d.ano);
    }

    return totalDias;
}

int main() {
    struct Data d1, d2;

    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    long int dias1 = dataParaDias(d1);
    long int dias2 = dataParaDias(d2);

    long int diferenca = dias2 - dias1;
    if (diferenca < 0) {
        diferenca = -diferenca;
    }

    printf("Dias decorridos: %ld\n", diferenca);

    return 0;
}
