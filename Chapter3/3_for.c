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
        printf("���ڸ� �������� : ");
        scanf("%d", &score);

        if (score == 3){
            printf("�����Դϴ�!!!");
            break;
        }
        else{
            printf("Ʋ�Ƚ��ϴ�. ---> ������ȸ : %d\n", i);
        }

        
    }

    if (i == 0){
        printf("���� ��ȸ�� ��� �����Ͽ����ϴ�.");
    }
}

int main(){
    match_think();
    

}