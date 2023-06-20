#include <stdlib.h>
#include <stdio.h>

void main(){
    char *a; // 1바이트 포인터 변수 선언
    a = malloc(4); // 4바이트 메모리 할당 후 주소를 a에 저장
    *a = 100;

    printf("Address of a = %d\n", a);
    printf("Value of a = %d", *a);

    free(a); // 메모리 해제
}