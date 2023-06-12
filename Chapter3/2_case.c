#include <stdio.h>

int main(){
    int month;
    printf("월을 입력하세요 : ");
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
        printf("%d월은 %d일까지 있습니다\n", month, days);
    else
        printf("1부터 12사이의 숫자를 입력해주세요\n");
}