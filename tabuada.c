/*peça ao usuário um número inteiro e imprima na tela a tabuada*/
#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int r;
    printf("digite um número: ");
    scanf(" %d", &n);
    while(i<=10){
        r = n * i;
        printf(" %d * %d = %d\n", n, i, r);
        i = i + 1;
    }
    return 0;
}