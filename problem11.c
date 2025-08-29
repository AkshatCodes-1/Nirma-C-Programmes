#include <stdio.h>

int main(){
    int hour,role;
    float salary=0;
    printf("enter your role (1=clerk , 2=teacher, 3=principal):");
    scanf("%d",&role);
    printf("enter hours worked:");
    scanf("%d",&hour);
    if (hour>50){
        hour=50;
    }
    if (role==1){
        salary=(hour<=44)?hour*100:(100*44)+(hour-44)*200;
    }
    else if(role==2){
        salary=(hour<=44)?hour*200:(200*44)+(hour-44)*400;
    }
    else if(role==3){
        salary=(hour<=44)?hour*400:(400*44)+(hour-44)*800;
    }
    else{
        printf("invalid role\n");
    }
    printf("weekly salary is : %.2f\n",salary);


    return 0;
}