#include <stdio.h>

int main(){
    int a,b;
    printf("enter a:",a);
    scanf("%d",&a);
    printf("enter b:",b);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d and b is %d",a,b);
    return 0;
}