#include <stdio.h>

void origin_while(){
    int i = 1; 
    int sum = 0;

    while (i<=100){
        sum += i;
        i++;
    }

    printf("total sum 1 ~ 100 = %d\n", sum);
}

void origin_do_while(){
    int i = 0;
    int sum = 0;
    
    do
    {
        sum += i;
        i+=1000;
    } while (i<=100);

    printf("total sum 1 ~ 100 = %d\n", sum);
}

int main(){
     origin_do_while();
    
}