#include <stdio.h>

struct myclass {
    int number;
    char *name;
};

// 미션 31 : 3D 좌표를 구체로 표기 
//         : x,y,z를 멤버변수로 사용하는 구체를 선언후 각 100,200,300을 선후 값을 출력하시오
struct Three_D{
    int x,y,z;
};

int main(){
    struct myclass a = {1, "kimchangheon"};
    struct myclass b = {2, "kimcoco"};

    printf("a -> number : %d \t name : %s\n", a.number, a.name);
    printf("b -> number : %d \t name : %s\n", b.number, b.name);

    struct Three_D points = {100,200,300};
    printf("X point = %d\n", points.x);
    printf("Y point = %d\n", points.y);
    printf("Z point = %d\n", points.z);




}