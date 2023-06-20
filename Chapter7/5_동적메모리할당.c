#include <stdio.h>
#include <stdlib.h>

char* names(void); //전역 변수 선언

void main(){
    char *name1;
    char *name2;

    name1 = names();  // 전역변수에 입력
    name2 = names();  // 전역변수에 재 입력
    
    printf("%s (ads : %d)\n", name1, name1); 
    printf("%s (ads : %d)\n", name2, name2);
}

char* names(){
    char *name = (char *)malloc(sizeof(char) * 15);
    // malloc(sizeof(char) * 15) : char 데이터 크기 1바이트의 15를 곱한 크기의 메모리를 할당 
    // (char *) : 전달하고자 하는 값이 메모리의 문자형 주소라서 
    printf("Enter the name -->");
    gets(name);

    return name;
}
