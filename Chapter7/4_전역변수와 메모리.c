#include <stdio.h>

char name[15];
char* names(void); // 전역 변수 선언

void main(){
    char *name1;
    char *name2;

    name1 = names();  // 전역변수에 입력
    name2 = names();  // 전역변수에 재 입력
    
    printf("%s\n", name1); 
    printf("%s\n", name2);
}

char* names(){
    printf("Enter the your name : ");
    gets(name);

    return name;
}
