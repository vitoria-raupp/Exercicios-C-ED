#include <stdio.h>

void somaprod(int a,int b,int *c,int *d){
    // a + b
    *c = a + b;
    // a * b
    *d = a * b;
}
int main(){
    int s, p;
    somaprod(3, 5, &s, &p);
    printf("soma = %d e produto = %d", s, p);

    return 0;
}
