#include <stdio.h>

// 물리적 주소 : 주소에 해당하는 실질적 숫자
// 상징적 주소 : 주소에 해당하는 변수로 표현하는 것

// 배열의 이름은 주소!
// 배열의 이름은 곧 배열의 첫번째 요소의 주소와동일 (a = &a[0])


int pointer_address(){
    int a[5] = {1,2,3,4,5};

    for (int i = 0; i<5; i++){        
        printf("Array a[%d] of Address = %d\n", i, &a[i]);    
        }
}


int pointer_9(){
    int a[5] = {1,2,3,4,5};

    for (int i = 0; i<5; i++){
        printf("Array a[%d] of Address = %d\n", i, &a[i]);
    }
    printf("Array a of Address = %d\n", a);
}

int pointer_first(){
    int a[5] = {1,2,3,4,5};
    int *b = a;

    for (int i = 0; i<5; i++){
        printf("Array a[%d] of Address = %d\n", i, &a[i]);
    }

    printf("b = %d\n", b);
    printf("*b = %d\n", *b);
}

// 포인터를 이용한 배열의 주소 및 값 접근
int pointer_10(){
    int a[] = {1,2,3,4,5};

    int *b = a;

    printf("Address of a = %d\n", b);
    printf("Values  of a = %d\n", *b);

}

// 포인터 변수에 1을 더함으로써 4바이트 크기만큼 추가된 주소로 접근이 가능
int pointer_address_calc(){
    int a[5] = {1,2,3,4,5};
    int *b = a;

    printf("Address of a[0] = %d\n", &a[0]);
    printf("Address of b+0  = %d\n\n", b+0);

    printf("Address of a[1] = %d\n", &a[1]);
    printf("Address of b+1  = %d\n\n", b+1);

    printf("Address of a[2] = %d\n", &a[2]);
    printf("Address of b+2  = %d\n\n", b+2);

    printf("Address of a[3] = %d\n", &a[3]);
    printf("Address of b+3  = %d\n\n", b+3);

    printf("Address of a[4] = %d\n", &a[4]);
    printf("Address of b+4  = %d\n\n", b+4);

}

// 미션 28 : 배열을 갖고 포인터 연산을 통해 접근하고 변경하기
int mission28(){
    int a[] = {1,2,3,4,5};
    int *b = a;

    *(b+0) = 11;
    *(b+1) = 12;
    *(b+2) = 13;
    *(b+3) = 14;
    *(b+4) = 15;

    for (int i=0 ; i<5 ; i++){
        printf("Addres of a[%d] = %d\n", i, &a[i]);
        printf("Addres of b+%d  = %d\n\n", i, b+i);
    }

    for (int i=0 ; i<5 ; i++){
        printf("Value of a[%d] = %d\n", i, a[i]);
        printf("Value of b+%d  = %d\n\n", i, *(b+i));
    }
}

// 미션 29 : char 배열 a에 포인터 변수 b를 이용해 각 요소에 접근하고 출력하기
int mission29(){
    char name[] = "kimchangheon";

    for(int i=0; i<12; i++){
        printf("%c",name[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<12; i++){
        printf("Address of name[%d] = {%d} \t Value = {%c}\n", i, &name[i], name[i]);
    }

    char *b = name;

    for(int i=0; i<12; i++){
        printf("%c",*(b+i));
    }

    printf("\n");

    for(int i=0; i<12; i++){
        printf("Address of b+%d = {%d} \t Value = {%c}\n", i, (b+i), *(b+i));
    }

}

int main(){
    mission29();

}