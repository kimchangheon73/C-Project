#include <stdio.h>

int main(){
    int month;
    printf("���� �Է��ϼ��� : ");
    scanf("%d", &month);

    int days;
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;

    case 4: case 6: case 9: case 11:
        days = 30;
        break; 

    case 2:
        days = 28;
        break;
    }

    if (month >= 1 && month <= 12)
        printf("%d���� %d�ϱ��� �ֽ��ϴ�\n", month, days);
    else
        printf("1���� 12������ ���ڸ� �Է����ּ���\n");
}