#include <stdio.h>

char* WhatIsYourName(void); // 함수의 출력이 문자형 변수의 주소

void main(){
    char *name1;
    char *name2;

    name1 = WhatIsYourName();   // 해당함수의 지역변수는 함수 수행과 동시에 메모리를 해제한다
    name2 = WhatIsYourName();
    
    printf("%s\n", name1); 
    printf("%s\n", name2);
}

char* WhatIsYourName(){
    char name[15]; // 지역변수
    printf("Enter the your name -->");
    scanf_s("%s", name);

    return name;
}