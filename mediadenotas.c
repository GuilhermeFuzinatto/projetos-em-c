#include <stdio.h>

int main(){
    int n = 3;
    int i = 0;
    int nota;
    int soma = 0;
    int media;
    while(i<n){
        printf("digite uma nota: ");
        scanf("%d", &nota);
        while(nota<0 || nota>100){
            printf("nota inválida, digite novamente: ");
            scanf("%d", &nota);
        }
        soma = soma + nota;
        i = i + 1;
    }
    media = soma / n;
    printf("%d", media);
    if(media<40){
        printf("\nreprovado");
    }else if(media<60){
        printf("\nrecuperação");
    }else{
        printf("\naprovado");
    }

    return 0;
}
