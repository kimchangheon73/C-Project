#include <stdio.h>

void select_7(){
    int i;
    printf("�����Ͻô� ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &i);

    if (i == 7){
        printf("����� ���� 7�� �����Ͻô� ����!\n");
    }
    else{
        printf("������ �ʴ� ���ڸ� �����Ͻô±���?\n");
    }
}

void grade_score(){
    int a;
    char grade;
    printf("������ �Է��ϼ��� : ");
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
        printf("����� ������ %c �Դϴ�. �����ϼ̽��ϴ�\n", grade);
    else
        printf("���� �Դϴ�. �л���� �����ֽñ� �ٶ��ϴ�.\n");

}   


int main(){
    grade_score();
}