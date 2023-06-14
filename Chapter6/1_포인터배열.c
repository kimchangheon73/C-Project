#include <stdio.h>

int Pointer_array(){
    int *a[2];

    int b = 20, c = 30;

    a[0] = &b;
    a[1] = &c;

    printf("Address of a[0] = %d --> value = %d\n", a[0], *a[0]);
    printf("Address of a[1] = %d --> value = %d", a[1], *a[1]);

}
// 정수형 변수 *abc를 선언하고, 포인터 배열 x를 이용해 *ab의 합을 c에 저장 후 출력
int mission29(){
    int a;
    int b;
    int c;

    int *x[3];

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    x[0] = &a;  // 주소 선언
    x[1] = &b;
    x[2] = &c;
    *x[2] = a+b; // 역참조

    printf("Address of x[0] = %d --> Value = %d\n", x, *x[0]);
    printf("Address of x[1] = %d --> Value = %d\n", x[1], *x[1]);
    printf("Address of x[2] = %d --> Value = %d\n", x[2], *x[2]);
    

}

int main(){
    mission29();
}