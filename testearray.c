//teste sobre arrays

#include <stdio.h>

#define i

int aux = i + 3;
int array[] = {1, 2, 3};

int d;

int main(){
    do{
        //digitar o valor
        printf("\ndigite um n inteiro: ");
        scanf("%d", &array[aux]);
        
        //imprimir os dados
        printf("aux: %d \n", aux);
        printf("valores da array: %d ; %d ; %d; %d \n\n", array[0], array[1], array[2], array[aux]);
        
        //parar o programa
        printf("quer parar? (0 para parar, qlqr numero para continuar): ");
        scanf("%d", &d);
    }while(d!=0);
    
    return 0;
}