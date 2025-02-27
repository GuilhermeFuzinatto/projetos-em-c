/*testes com do while*/
#include <stdio.h>

int main(){
    int a;
    int b;
    int soma;
    char d1;
    char d2;
    do{
        printf("abrir menu? (s para sim, n para nao): ");
        scanf(" %c", &d1);
        switch(d1){
            case 's':
                do{
                    printf("digite dois números: ");
                    scanf("%d %d", &a, &b);
                    soma = a + b;
                    printf("a soma dos dois é %d", soma);
                    printf("\ndeseja fazer novamente? (s pra sim, n pra nao): ");
                    scanf(" %c", &d2);
                }while(d2=='s');
        }
    }while(d1=='s');
    printf("fim");

    return 0;
}
