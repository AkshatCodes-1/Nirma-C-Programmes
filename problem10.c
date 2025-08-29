#include <stdio.h>

int main(){
    float a , b  ;
    char operator;
    printf("enter 1st number:");
    scanf("%f",&a);
    printf("enter 2nd number:");
    scanf("%f",&b);
    printf("enter operator (+,-,*,/):");
    scanf(" %c ",&operator);
    if (operator=='+'){
        printf("addition=%f",a+b);
    }
    else if (operator=='-'){
        printf("subration=%f",a-b);

    }
    
    else if (operator == '*'){
        printf("multiplication=%f",a*b);

    }
    else if (operator=='/'){
        printf("division=%f",a/b);

    }
    else{
        printf("Error");
    }


    return 0;
}