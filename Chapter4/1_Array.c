#include <stdio.h>

// 변수 : 특정한 자료형 변수들의 집합
// int age[5] = {1,2,3,4,5};

// 기본 배열
void array_basic(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Array 3 = %d", arr[2]);
}


// 인덱스, 배열, 메모리크기, 메모리 주소
void array_value_memory_point(){
    int arr[5] = {1,5,10,65,98};

    for(int i=0 ; i <5 ; i++){
        printf("idx = %d \t value = %d \t memory_size = %d \t address = %p\n", i, arr[i], sizeof(arr[i]), &arr[i]);
    }
}

// 각 배열의 정수 입력
void array_scanf(){
    int arr[5];

    for (int i=0; i<5; i++){
        printf("Enter the %d-idx value : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<5; i++){
        printf("the %d-idx value : %d\t", i, arr[i]);
    }
}

// 배열의 연산
void array_calc(){
    int arr[] = {1,2,3,4,5};
    int sum = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);  
    arr[5] = sum;
    for (int i=0; i<6; i++){
        printf("the %d-idx value : %d\n", i, arr[i]);
    }

}

// 문제1 : 입력받은 5명의 학생들의 성적을 높은 순으로 정렬하는 프로그램
// ex)
// Initialize array = [65][74][95][12][24]
// Sorting array = [95][74][65][24][12]
void Question_one(){
    int a[5];
    for (int i=0; i<5 ; i++){
        printf("%d-idx score = ", i);
        scanf("%d", &a[i]);
    }

    printf("Initialize array = ");
    for (int i=0; i<5 ; i++){
        printf("[%d]", a[i]);
    }printf("\n");
    
    int b[5];
    for (int i=0; i<5 ; i++){
        int upper_idx = 0;
        for (int j=0; j<5; j++){
            if (a[i] < a[j])
                upper_idx++;
        }
        b[upper_idx] = a[i];
    }

    printf("Sorting array = ");
    for (int i=0; i<5 ; i++){
        printf("[%d]", b[i]);
    }printf("\n");
}

// 문제2 : 입력받은 학생의 성적을 막대 그래프로 표현하는 프로그램
// ex)
// 0 Number (65 score)==> |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// 1 Number (98 score)==> ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// 2 Number (74 score)==> ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// 3 Number (12 score)==> ||||||||||||
// 4 Number (35 score)==> |||||||||||||||||||||||||||||||||||
void Question_two(){
    int a[5];
    for (int i=0; i<5 ; i++){
        printf("%d-idx score = ", i);
        scanf("%d", &a[i]);
    }

    for (int i=0; i<5 ; i++){
        printf("%d Number (%d score)==> ", i, a[i]);
        for(int j=0; j<a[i]; j++){
            printf("|");
        }printf("\n");
    }
}



int main(){
    Question_one();
}