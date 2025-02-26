/*escreva um programa que tenha uma variável iniciada em 10,
diminuindo de 1 por recorrência, verifique se o numero é ímpar, se for imprima na tela*/
#include <stdio.h>

int main(){
    int n = 10;
    while(n<=10 && n>=1){
        if(n%2==1){
            printf(" %d", n);
        }
        n = n - 1;
    }
    return 0;
}