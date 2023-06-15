#include <stdio.h>
#include <string.h>

// 2차원 배열과 주소
int Array2D_pointer(){
    // Ads of A       = 6422264
    // Ads of A[0]    = 6422264
    // Ads of A[0][0] = 6422264
    // Ads of A[1]    = 6422276
    // Ads of A[1][0] = 6422276

    // Memory of A    = 24
    // Memory of A[0] = 12
    // Memory of A[1] = 12

    int a[][3] = {{1,2,3},{4,5,6}};
    printf("Ads of A       = %d\n", &a);
    printf("Ads of A[0]    = %d\n", &a[0]);
    printf("Ads of A[0][0] = %d\n", &a[0][0]);
    printf("Ads of A[1]    = %d\n", &a[1]);
    printf("Ads of A[1][0] = %d\n\n", &a[1][0]);

    printf("Memory of A    = %d\n", sizeof(a));
    printf("Memory of A[0] = %d\n", sizeof(a[0]));
    printf("Memory of A[1] = %d\n", sizeof(a[1]));
}

// 2차원 배열의 주소 연산 
int Array2D_pointer_calc(){
    // Ads of First   A[0]    = 6422264
    // Ads of First   A[0][0] = 6422264
    // Ads of Second  A[0][1] = 6422268
    // Ads of Third   A[0][2] = 6422272

    // Ads of Second  A[1]    = 6422276
    // Ads of First   A[1][0] = 6422276
    // Ads of Second  A[1][1] = 6422280

    int a[][3] = {{1,2,3},{4,5,6}};
    printf("Ads of First   A[0]    = %d\n",  a[0]);
    printf("Ads of First   A[0][0] = %d\n",  a[0]+0);
    printf("Ads of Second  A[0][1] = %d\n",  a[0]+1);
    printf("Ads of Third   A[0][2] = %d\n\n",a[0]+2);

    printf("Ads of Second  A[1]    = %d\n",  a[1]);
    printf("Ads of First   A[1][0] = %d\n",  a[1]+0);
    printf("Ads of Second  A[1][1] = %d\n",  a[1]+1);
    printf("Ads of Third   A[1][2] = %d\n",  a[1]+2);    
}

// %s를 이용한 문자열 출력
int Array2D_pointer_char(){
    char name[4][10] = {"Python","Java","Clang","Obj-C"};

    printf("Memory size = %d\n", sizeof(name));
    for(int i=0; i<4; i++){
        printf("Ads = %d / Value = %s\n",name[i], name[i]);
    }

    char *names[4] = {"Python","Java","Clang","Obj-C"};

    printf("Memory size = %d\n", sizeof(names));
    for(int i=0; i<4; i++){
        printf("Ads = %d / Value = %s\n",names[i], names[i]);
    }

}

// mission30 : 이름을 포인터 변수로 접근하여 한자씩 출력하는 프로그램을 작성
int mission30(){
    char *names = "kimchangheon";
    
    for(int i=0; i<strlen(names); i++){
        printf("Ads = %d \t value = %c\n", (names+i), *(names+i));
    }
}

// mission31 : 10크기의 배열 a에 1~10을 할당 후 포인터변수 b를 이용해 각 요소에 접근 후 2가지 방법으로 값을 출력하는 프로그램을 작성 
int mission31(){
    int a[10];
    int *b = a;

    for(int i=0; i<10; i++){
        a[i] = i+1;
    }

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }printf("\n");

    for(int i=0; i<10; i++){    // 역참조를 이용한 접근
        printf("%d ", *(b+i));  
    }printf("\n");

    for(int i=0; i<10; i++){    // 배열 idx를 이용한 접근
        printf("%d ", b[i]);
    }printf("\n");
}

int mission32(){
    int a[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){    // 역참조를 이용한 접근
        printf("%d ", a[i]);  
    }printf("\n");


    int *b = a;
    for (int i=0; i<5; i++){
        *(b+i) = *(b+i) + 2;   // 각 요소에 접근하여 2씩 증가
    }

    for(int i=0; i<5; i++){    // 배열 idx를 이용한 접근
        printf("%d ", b[i]);
    }printf("\n");

    for(int i=0; i<5; i++){    // 배열 idx를 이용한 접근
        printf("%d ", a[i]);
    }printf("\n");
}

int mission33(){
    int a[5] = {1, 2, 3, 4, 5};
    int *b = &a[4];
    int total = 0;

    for (int i=0; i<5; i++){
        *(b-i) = (5-i);
    }

    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }printf("\n");

    for(int i=0; i<5; i++){
        printf("%d ", *(b-i));
        total += *(b-i);
    }printf("\n");

    printf("sum = %d", total);
}

int mission34(){
    int a[] = {1, 2, 3, 4, 5};
    int *b = &a[0];

    printf("=============== Before ===============\n");
    for(int i=0; i<5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    for(int i=0; i<5; i++){
        *(b+i) = *(b+i) * 10; 
    }
    printf("=============== After ===============\n");
    for(int i=0; i<5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int mission35(){
    int a[] = {1,2,3,4,5,6};
    int *b = &a[0];
    int *c = &a[5];

    printf("=============== Origin A ===============\n");
    for(int i=0; i<6; i++){
        printf("%d ", i, a[i]);
    }

    for(int i=0; i<3; i++){
        int temp = *(b+i);
        *(b+i) = *(c-i);
        *(c-i) = temp;
    }
    printf("\n=============== After A ===============\n");
    for(int i=0; i<6; i++){
        printf("%d ",a[i]);
    }
}

int main(){
    mission35();
}