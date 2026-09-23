#include <stdio.h>

void tabuada(int valor, int n, int result){
    for(int i = 0; i < 10; i++){
        n = n + 1;
        result = valor * n;
        printf("%d * %d = %d \n", valor, n, result);
    }
}

int main(){
    int valor, n = 0, result;
    scanf("%d", &valor);
    tabuada(valor,n,result);
    return 0;
}

