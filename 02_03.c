#include <stdio.h>

int main(){
    float elemento[10];

    for(int i = 0; i < 10; i++){
        printf("%p", elemento + 1);
        printf("\n");
    }
    return 0;
}
