#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
    if(idade<12){
        printf("chora");
    }else if (idade<18){
        printf("espia");
    }else if (idade<65){
        printf("entra");
    }else{
        printf("vai pro boteco");
    }
    printf("\nvai pra casa dormir");

    return 0;
}