#include <stdio.h>

int main(){
    float class_test,grade,tutorial,se,lpw,see;
    printf("enter marks of class test:\n");
    scanf("%f",&class_test);
    printf("enter marks of tutorial:\n");
    scanf("%f",&tutorial);
    printf("enter marks of se:\n");
    scanf("%f",&se);
    printf("enter marks of lpw:\n");
    scanf("%f",&lpw);
    printf("enter marks of see:\n");
    scanf("%f",&see);
    grade=(0.12*class_test)+(tutorial*0.12)+(se*0.16)+(lpw*0.20)+(see*0.40);
    if(grade>=91){
        printf("your grade is :A+");
    }
    else if(grade>=81 && grade<=90){
        printf("your grade is :A");
    }
    else if(grade>=71 && grade<=80){
        printf("your grade is :B+");
    }
    else if(grade>=61 && grade<=70){
        printf("your grade is :B");
    }
    else if(grade>=51 && grade<=60){
        printf("your grade is :C+");
    }
    else if(grade>=40 && grade<=50){
        printf("your grade is :C");
    }
    else{
        printf("You have failed the test");
    }
    return 0;
}
