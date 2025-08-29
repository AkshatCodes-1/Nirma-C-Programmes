#include <stdio.h>

int main(){
    int x,t;
    printf("enter value of X:");
    scanf("%d",&x);
    t=x%10;
    if(t==0){
        printf("number is dicisible by 10 in ZERO TURNS");
    }
    else if (t==5){
        printf("number is divisible by 5 in ONE TURN");
    }
    else{
        printf("Number is not divisible by 10");
    }
    

    return 0;
}