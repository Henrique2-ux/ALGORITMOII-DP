#include <stdint.h>

int string(char *str1, char *str2) {
    for (char *p1 = str1; *p1 != 0; p1++) {
        char *temp = p1;
        char *p2 = str2;

        for (; *temp == *p2 && *p2 != 0; temp++, p2++) {
        }

        if (*p2 == 0) {
            return 1;
        }
    }
    return 0;
}

int main(){
    
    char *str1, *str2;

    int resultado = string(str1, str2);

    if(resultado){
        printf("os caracteres sao:'%s''%s' \n", str2, str1);
    } else {
        printf("os carracteres nao foram acessados:'%s''%s' \n", str2, str1);
    }

    return 0;
}
