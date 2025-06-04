//potencia com recursao
#include <stdio.h>

int potencia(int x, int y){
    while(y>1){
        y--;
        return x * potencia(x, y);
    }
}

int main(){
    int n, p, r;
    printf("\033[1m\033[41m---POTENCINATOR 2000---\033[0m \n");
    printf("\033[31mDigite base: \033[0m");
    scanf("%d", &n);
    printf("\033[31mDigite expoente: \033[0m");
    scanf("%d", &p);
    r = potencia(n, p);
    printf("\033[95m\033[7mResultado: %d\033[0m", r);
    
    return 0;
}