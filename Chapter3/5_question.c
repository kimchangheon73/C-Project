#include <stdio.h>

// Question1 : 숫자 N을 입력받아 해당 숫자만큼의 1부터 시작하는 홀수개의 *를 찍어라
int Question_one(){
    int N;
    printf("Enter the Number : ");
    scanf("%d", &N);

    for (int i=0 ; i<N ; i++){
        for (int j=0 ; j<1+(2*i) ; j++){
            printf("*");
        }printf(" ");
    }
}

// Question2 : Question1과 동일한 형태이되, 역방향으로
int Question_two(){
    int N;
    printf("Enter the Number : ");
    scanf("%d", &N);

    for (int i=N ; i>0 ; i--){
        for (int j=0 ; j<1+(2*(i-1)) ; j++){
            printf("*");
        }printf(" ");
    }
}

// Question3 : 1000이하의 3혹은 5의 배수인 자연수들의 합을 구하라
int Question_thr(){
    int sum = 0;
    for (int i=1 ; i<=1000 ; i++){
        if (i%3 ==0 || i%5 ==0){
            sum += i;
        }
    }
    printf("total = %d\n", sum);
}

// Question4 : 1,000,000이하의 파보나치 수열의 짝수 항들의 합을 구하라
int Question_four(){
    
}

// Question5 : N값을 입력받고 1부터 N까지의 곱을 출력하라
int Question_fiv(){

}

// Question6 : 다음식을 만족하는 자연수 a,b,c를 모두 구하라
// a+b+c = 2000 (단, a>b>c이며 모두 자연수)
int Question_six(){

}

// Question7 : 임의의 자연수 N을 입력받아 N을 소인수 분해한 결과를 출력하라
// if N == 18 --> 2 * 3 * 3
int Question_sev(){

}

// Question8 : 프로그램 7번의 스피드를 향상할 수 있는 방법을 찾아라
int Question_eig(){
    
}


int main(){
    Question_thr();
}