#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("digite um número: ");
    scanf(" %d", &n);
    while(i<=n){
        if(i*i==n){
            printf(" %d é a raiz quadrada de %d", i, n);
            break;
        }else if(i==n){
            printf(" %d não tem raiz quadrada exata", n);
            break;
        }else{
            i = i + 1;
        }
    }
    return 0;
}
