#include <stdio.h>

// 구조체 : 다양한 타입의 변수들을 가진 사용자 정의 자료형

// 구조체 정의   
struct myclass{
    int number;
    double weight;
    double height;
    char *name;
};

void main(){
    // .(dot)을 이용한 구조체 멤버면수 접근
    struct myclass a;
    struct myclass b;

    a.number = 1;
    a.weight = 45;
    a.height = 155;
    a.name = "Alias";

    printf("Struct a of num    : %d\n", a.number);
    printf("Struct a of weight : %d\n", a.weight);
    printf("Struct a of height : %d\n", a.height);
    printf("Struct a of name   : %s\n", a.name);

    
}
