#include <stdio.h>

int main(){
    int a,b,max;
    printf("enter the two integers:\n");
    scanf("%d %d",&a ,&b);
    max=(a>b)?a:b;
    printf("greatest of %d and %d is %d",a,b,max);
    return 0;
}