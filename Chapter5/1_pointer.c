#include <stdio.h>

// 포인터 : 주소를 저장하는 변수
// 변수 선언 --> int *b;
// 변수 초기화 --> int *b = &a;

// 포인터 변수 선언시 *사용 (int *b;)
// 역참조 수행시 *사용 (*b = 35;)

void pointer1(){
    int a;
    int *b;

    b = &a;

    printf("Address of a = %d\n", &a);
    printf("Address of b = %d", b);
}

void pointer2(){
    int a = 10;
    printf("Value a = %d\n", a);

    int *b;     // 포인터 변수 선언
    b = &a;     // 포인터 변수에 a주소 초기화
    *b = 15;    // 포인터 변수에 역 참조 
    printf("Value a = %d\n", a);
}

void pointer3(){
    int x;
    int *y = &x;

    *y = 15;
    printf("Value of x = %d\n", x);
}

void pointer4(){
    char a = 'A';
    printf("Value of a = %c\n", a);

    char *b;
    b = &a;
    *b = 'B';
    printf("Value of a = %c\n", a);
}

void main(){
    pointer4();
}