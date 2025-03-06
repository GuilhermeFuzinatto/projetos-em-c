/* */
#include <stdio.h>

void kur(int n){
    printf(" %d kur", n);
}

void abu(int n){
    printf(" %d abu", n);
    n = n + 10;
    kur(n);
}


int main(){
    int n;
    scanf(" %d", &n);
    abu(n);
    printf(" %d main", n);

    return 0;
}
