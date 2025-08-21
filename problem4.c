#include <stdio.h>

int main(){
    float principal , rate , time , si;
    printf("principal:\n",principal);
    scanf("%f",&principal);
    printf("rate:\n",rate);
    scanf("%f",&rate);
    printf("time:\n",time);
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    printf("simple interest is : %f",si);
    return 0;
}