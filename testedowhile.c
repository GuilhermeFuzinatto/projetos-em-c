/*testes com do while*/
#include <stdio.h>

int main(){
    int a;
    int b;
    int soma;
    char d;
    do{
        printf("digite dois números: ");
        scanf("%d %d", &a, &b);
        soma = a + b;
        printf("a soma dos dois é %d", soma);
        printf("\ndeseja fazer novamente? (s pra sim, n pra nao): ");
        scanf(" %c", &d);
    }while(d=='s');

    return 0;
}
