#include <stdio.h>

int Cel_to_kai(){
    // ���� �µ� --> ȭ�� �µ�
    float celsius;
    printf("===�����µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷�===\n");
    printf("���� �µ��� �Է� :");
    scanf("%f", &celsius);

    float kaisius = celsius * 9 / 5 + 32;

    printf("��ȯ �� : %f ---> ��ȯ �� : %f", celsius, kaisius);
}

int total_scanf(){
    // scanf �� ����
    char ch; 

    short sh ; 
    int i;
    long lo;

    float fl;
    double du;

    printf("char �� ���� �Է� : ");
    scanf("%c", &ch);

    printf("short �� ���� �Է� : ");
    scanf("%hd", &sh);

    printf("int �� ���� �Է� : ");
    scanf("%d", &i);

    printf("long �� ���� �Է� : ");
    scanf("%ld", &lo);

    printf("float �� ���� �Է� : ");
    scanf("%f", &fl);

    printf("double �� ���� �Է� : ");
    scanf("%lf", &du);

    printf("char : %c , short : %d , int : %d ", ch, sh, i);
    printf("long : %ld , float : %f, double : %f \n", lo, fl, du);


}



int main(){
    total_scanfa();
}

