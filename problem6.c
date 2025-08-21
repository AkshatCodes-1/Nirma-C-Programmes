#include <stdio.h>

int main()
{
    float total;
    printf("enter value of money:\n", total);
    scanf("%f", &total);
    int rupees;
    rupees=total;
    printf("rupees: %d\n", rupees);
    int paisa;
    paisa=(total-rupees)*100;
    printf("paisa: %d",paisa);



    return 0;
}
// rupees aur pesa ko alag alag karna hai
