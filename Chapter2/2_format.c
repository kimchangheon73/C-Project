// %d = 정수형 데이터 포멧팅 
// %f = 실수형 데이터 포멧팅( %.nf로 n 자리만큼 표시 가능)
#include <stdio.h>

int main(){
    float_format();
}

void int_foramt(){    
    int a, b;
    
    a = 5; 
    b = 7;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void float_format(){
    int a = 10;
    float b = 10.5;

    printf("a = %d ----> memory = %dbytes\n", a, sizeof(a));
    printf("b = %.2f----> memory = %dbytesq\n", b, sizeof(b));


}

