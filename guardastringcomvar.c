//atribuindo string com variavel inbutida a uma variavel string

#include <stdio.h>

int main(){
    int n = 8;
    char str[10];

    sprintf(str, "peido%d", n);
    printf("%s", str);

    return 0;
}