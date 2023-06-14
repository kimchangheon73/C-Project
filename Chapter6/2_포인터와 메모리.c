#include <stdio.h>

int pointer_char_memory(){
    // char 변수를 이용한 다차원 배열 선언
    // 쓰지 않는 메모리를 낭비하고 있음
    char names[3][10] = {"spongebob","Squid","Patric"};
    for(int i=0; i<3; i++){
        printf("names = ");
        for (int j=0; j<10; j++){
            printf("%c", names[i][j]);
        }printf(" --> Memory = %d byte\n", sizeof(names[i]));
    }
}

int pointer_char_memory_2(){
    // 포인터 변수를 이용한 다차원 배열 선언
    char *names[3] = {"spongebob","Squid","Patric"};
    
    printf("Addres of names[0] : %d ------> memory : {%d}byte ------> Values  ------> : {%s}\n", names[0], sizeof(names[0]), names[0]);
    printf("Addres of names[1] : %d ------> memory : {%d}byte ------> Values  ------> : {%s}\n", names[1], sizeof(names[1]), names[1]);
    printf("Addres of names[2] : %d ------> memory : {%d}byte ------> Values  ------> : {%s}\n", names[2], sizeof(names[2]), names[2]);

}



int main(){
    pointer_char_memory_2();
}  