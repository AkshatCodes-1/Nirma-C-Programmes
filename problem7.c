#include <stdio.h>

int main(){
    int a,b,temp;
    printf("enter a:\n",a);
    scanf("%d",&a);
    printf("enter b:\n",b);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the value of a is %d and b is %d",a,b);

    return 0;
}
/*
temp = a;   // store a in temp
a = b;      // assign b to a
b = temp;   // assign temp (original a) to b


*/