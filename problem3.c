#include <stdio.h>

int main(){
    float ahmedabad_temp,mumbai_temp_c,diff,mumbai_temp_f;
    printf("enter temp in ahmedabad (in celcius):", ahmedabad_temp);
    scanf("%f", &ahmedabad_temp);
    printf("enter temp in mumbai (in farenheit): ", mumbai_temp_f);
    scanf("%f", &mumbai_temp_f);
mumbai_temp_c=(mumbai_temp_f-32)/1.8;
printf("the temp difference is %f", ahmedabad_temp-mumbai_temp_c);

    return 0;
}