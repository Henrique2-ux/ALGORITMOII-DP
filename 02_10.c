#include <stdio.h>

int main() {
    int a, *b, **c, ***d;

    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    int dobro = (*b) * 2;
    int triplo = (**c) * 3;
    int quadruplo = (***d) * 4;

    printf("%d\n", dobro);
    printf("%d\n", triplo);
    printf("%d\n", quadruplo);

    return 0;
}
