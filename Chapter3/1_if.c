#include <stdio.h>

void select_7(){
    int i;
    printf("좋아하시는 숫자를 입력하세요 : ");
    scanf("%d", &i);

    if (i == 7){
        printf("행운의 숫자 7을 좋아하시는 군요!\n");
    }
    else{
        printf("흔하지 않는 숫자를 좋아하시는군요?\n");
    }
}

void grade_score(){
    int a;
    char grade;
    printf("성적을 입력하세요 : ");
    scanf("%d", &a);

    if (a >= 90)
        grade = 'A';
    else if (a >= 80)
        grade = 'B';
    else if (a >= 70)
        grade = 'C';
    else if (a >= 60)
        grade = 'D';
    else
        grade = 'F';

    if (grade != 'F')
        printf("당신의 성적은 %c 입니다. 수고하셨습니다\n", grade);
    else
        printf("낙제 입니다. 학사과에 문의주시기 바랍니다.\n");

}   


int main(){
    grade_score();
}