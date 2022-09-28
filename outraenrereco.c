#include<stdio.h>

int main(){
    int *p;
    int a = 231;
    int b = 7680;

    printf("\n &a vale %p; ", &a);
    printf("\n &b vale %p; ", &b);
    printf("\n &p vale %p; ", &p);

    printf("\n p vale: %p", p);

    p = &a;
    printf("\n p vale: %p",p);
    printf("\n *p vale: %d",*p);

    p = &b;
    printf("\n p vale: %p",p);
    printf("\n *p vale: %d",*p);

    *p = 500;
    printf("\n p vale: %p",p);
    printf("\n *p vale: %d",*p);


}
