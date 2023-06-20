#include <stdio.h>
// 배열은 하나하나 직접 대입해줘야 한다
// 구초제는 복사가 대입연산자 하나로 가능
struct abc{
    int x,y,z;
};

void main(){
    struct abc a = {100, 200, 300};
    struct abc b;
    
    b = a;

    printf("a.x = %d \t a.y = %d \t a.c = %d\n", a.x, a.y, a.z);
    printf("b.x = %d \t b.y = %d \t b.c = %d", b.x, b.y, b.z);


}
