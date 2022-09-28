#include <stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;

    printf("O endereco de x eh: %p\n", ptr);
    printf("O endereco de x eh: %x\n", ptr);
}
