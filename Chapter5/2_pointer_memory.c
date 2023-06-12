# include <stdio.h>

// 핵심 = 포인터 변수는 자료형에 상관없이 메모리 크기가 동일하다

void pointer_memory(){
    float *a;
    double *b;
    int *c;
    long *d;
    char *e;

    printf("Memory size of Float Pointer = %d bytes\n", sizeof(a));
    printf("Memory size of double Pointer = %d bytes\n", sizeof(b));
    printf("Memory size of int Pointer = %d bytes\n", sizeof(c));
    printf("Memory size of long Pointer = %d bytes\n", sizeof(d));
    printf("Memory size of Char Pointer = %d bytes\n", sizeof(e));
}

int main(){
    pointer_memory();
}