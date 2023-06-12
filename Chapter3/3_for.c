#include <stdio.h>

void gugudan(){
    for(int i = 1; i<=9 ; i++){
        for (int j = 2; j<=9 ; j++){
            printf("%d x %d = %d\t", j, i ,i*j);
        }printf("\n");
    }
}

void match_think(){
    int i;
    int score;
    for( i = 9; i>0 ; i--){
        printf("숫자를 적으세요 : ");
        scanf("%d", &score);

        if (score == 3){
            printf("정답입니다!!!");
            break;
        }
        else{
            printf("틀렸습니다. ---> 남은기회 : %d\n", i);
        }

        
    }

    if (i == 0){
        printf("남은 기회를 모두 소진하였습니다.");
    }
}

int main(){
    match_think();
    

}