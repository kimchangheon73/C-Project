# include <stdio.h>

void basic_calc(int a, int b){
    // 기본 사칙 연산 
    int a_frime = a;
    int b_frime = b;

    printf("a + b = %d\n", (a_frime+b_frime));
    printf("a - b = %d\n", (a_frime-b_frime));
    printf("a x b = %d\n", (a_frime*b_frime));
    printf("a / b = %d\n", (a_frime/b_frime));
}

void int_cal_int(int a, int b){
    // 정수형 연산 --> 정수형 연산은 언제나 정수형 
    int a_frime = a;
    int b_frime = b;

    printf("a + b = %d\n", (a_frime+b_frime));
}

void float_cal_int(float a, int b){
    // 산술변환 --> 두 다른 자료형을 연산 시 더 큰 자료형으로 변환하는 작업
    float a_frime = a;
    int b_frime = b;

    printf("a + b = %f\n", (a_frime+b_frime));
}

int main(){
    int_cal_int(4, 5);
    float_cal_int(4, 5);
}