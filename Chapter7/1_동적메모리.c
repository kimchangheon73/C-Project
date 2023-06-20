#include <stdio.h>

// dynamic = 상황에 따라 변경가능한 경우, 입력이 정적으로 정해지지 않고 동적으로 결정된다

void dynamic_1(){
    char a[10] = "Hello";
    char *b = "Hello";

    printf("a = %s", a);
    printf("\nSize of a = %d", sizeof(a));

    printf("\nb = %s", b);
    printf("\nSize of b = %d", sizeof(b));
}

void dynamic_2(){
    // 10 길이 이상의 문자열 입력시 에러 발생 
    char *a;
    char b[10];

    printf("Enter the string -> ");
    scanf("%s", b);

    a = b;
    printf("str = %s", a);

}

int main(){
    dynamic_2();
}