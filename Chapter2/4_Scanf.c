#include <stdio.h>

int Cel_to_kai(){
    // 섭씨 온도 --> 화씨 온도
    float celsius;
    printf("===섭씨온도를 화씨 온도로 바꿔주는 프로그램===\n");
    printf("섭씨 온도를 입력 :");
    scanf("%f", &celsius);

    float kaisius = celsius * 9 / 5 + 32;

    printf("변환 전 : %f ---> 변환 후 : %f", celsius, kaisius);
}

int total_scanf(){
    // scanf 총 정리
    char ch; 

    short sh ; 
    int i;
    long lo;

    float fl;
    double du;

    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);

    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);

    printf("int 형 변수 입력 : ");
    scanf("%d", &i);

    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);

    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);

    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);

    printf("char : %c , short : %d , int : %d ", ch, sh, i);
    printf("long : %ld , float : %f, double : %f \n", lo, fl, du);


}



int main(){
    total_scanfa();
}

