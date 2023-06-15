#include <stdio.h>

int main(){
    int a = 30;
    int *b = &a;
    int **c = &b;

    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", *b);
    printf("Value of c = %d\n", **c);

    printf("Address of a = %d\n", &a);
    printf("Address of b = %d\n", b);
    printf("Address of c = %d\n", *c);


}