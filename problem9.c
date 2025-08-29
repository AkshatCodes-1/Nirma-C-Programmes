#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,e,f,g;
    printf("enter the value of a ,b and c:");
    scanf("%d %d %d",&a , &b,&c);
    d=(b*b)-4*a*c;
    if(d>0){
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        printf("roots of the equation are %f and %f",e,f);

    }
    else if (d==0){
        g=-b/(2*a);
        printf("roots of the equation are %f",g);

    }
    else {
        printf("no real roots");
    }
    return 0;
}