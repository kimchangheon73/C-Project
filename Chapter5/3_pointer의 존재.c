#include <stdio.h>

// 값에 의한 참조의 한계 --> 함수간에는 메모리 영역이 아예 다름
void swap(int x, int y){
    int a = x;
    int b = y;

    int temp;

    temp = a;
    a = b;
    b = temp;
}

// 주소에 의한 참초
// --> 서로 다른 함수 간에 포인터를 이용한 동일 메모리에 접근이 가능하다
void swap_2(int *a, int *b){ // 포인터 매개변수 
    int temp;  // 일반 변수
    temp = *a; // 일반 변수에 *a주소값이 가지는 값을 역참조하여 대입
    *a = *b;   // *a값에 *b값을 역참조
    *b = temp; // *b주소에 저장된 값에 temp값을 역참조
}

int main(){
    int a = 7;
    int b = 5;

    printf("a = %d \t b = %d\n\n", a, b);
    swap(a,b);

    printf("a = %d \t b = %d\n\n", a, b);
    swap_2(&a, &b);

    printf("a = %d \t b = %d\n\n", a, b);

}