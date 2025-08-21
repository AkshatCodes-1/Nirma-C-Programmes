#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("enter three integers:\n");
        scanf("%d %d %d", &a ,&b, &c);
        max=(a>b)?(a>c?a:c):(b>c?b:c);
        printf("the greatest of %d , %d and %d is %d", a,b,c,max);
    return 0;
}