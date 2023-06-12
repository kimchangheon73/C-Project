#include <stdio.h>

void array_2d(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("=====Show 2D array=====\n");
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("[%d]",a[i][j]);
        }printf("\n");
    }
}

void array_2d_classes(){
    int score[3][2];
    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            if (j==0)
                printf("%d class student Korean Score = ", i);
            else
                printf("%d class student Math Score = ", i);
            scanf("%d",&score[i][j]);
        }
    }

    printf("=====Show class array=====\n");
    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            printf("[%d]",score[i][j]);
        }printf("\n");
    }
}

// * 다차원 배열의 경우 맨 앞의 크기를 제외한 나머지 크기들을 정확히 지정해줘야 오류가 x  *//
void array_2d_compile(){
    int a[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("[%d]",a[i][j]);
        }printf("\n");
    }
}

// 3칸이 들어갈 공간에 7만 할달해서 에러가 발생 x -> 다른 원소가 들어갈 자리를 비워놓게 된다
void array_2d_compile2(){
    int a[][3] = {{1,2,3}, {4,5,6}, {7,}};

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("[%d]",a[i][j]);
        }printf("\n");
    }
}

// void array_2d_error(){
//     int a[3][] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
//     for(int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("[%d]",a[i][j]);
//         }printf("\n");
//     }
// }

int main(){
    array_2d_compile2();
}