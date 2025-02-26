/*faça um programa que imprima na tela de 10 até 1*/
#include <stdio.h>

int main(){
    int n = 10;
    while(n<=10 && n>=1){
        printf(" %d", n);
        n = n - 1;
    }
    return 0;
}
