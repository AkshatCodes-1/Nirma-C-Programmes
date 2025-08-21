#include <stdio.h>

int main(){
    float net_salary , gross_salary , deduction,da,hra,medical ,pf,insurance,basic_salary;
    printf("enter your basic salary: ", basic_salary);
    scanf("%f",&basic_salary);
    da=0.5*basic_salary;
    hra=0.1*basic_salary;
    medical=0.04*basic_salary;
    gross_salary=basic_salary+da+hra+medical;
    pf=0.05*gross_salary;
    insurance=0.07*gross_salary;
    deduction=insurance+pf;
    net_salary=gross_salary-deduction;
    printf("net payment is : %f", net_salary);
    return 0;
}