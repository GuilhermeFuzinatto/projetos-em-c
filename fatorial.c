//fatorial legal bilau meupau renal retal fatal com recursao
#include <stdio.h>

int fatorial(int x){
    int r;
    if(x == 0){
        return 1;
    }
    return x * fatorial(x-1);
}

int main(){
    int n, r;
    printf("Digite um número para calcular fatorial: ");
    scanf("%d", &n);
    r = fatorial(n);
    printf("Resultado: %d", r);
    
    return 0;
}