#include <stdio.h>
int main(void){
    //variable declarations
    int num_month_akm;

    //code
    printf("\n\n");

    printf("Enter Number Of Month (1 to 12) : ");
    scanf("%d", &num_month_akm);

    printf("\n\n");

    if(num_month_akm == 1)
        printf("Month Number %d Is JANURAY !!!\n\n", num_month_akm);
    else if(num_month_akm == 2)
        printf("Month Number %d Is FEBRUARY !!!\n\n", num_month_akm);
    else if(num_month_akm == 3)
        printf("Month Number %d Is MARCH !!!\n\n", num_month_akm);
    else if(num_month_akm == 4)
        printf("Month Number %d Is APRIL !!!\n\n", num_month_akm);
    else if(num_month_akm == 5)
        printf("Month Number %d Is MAY !!!\n\n", num_month_akm);
    else if(num_month_akm == 6)
        printf("Month Number %d Is JUNE !!!\n\n", num_month_akm);
    else if(num_month_akm == 7)
        printf("Month Number %d Is JULY !!!\n\n", num_month_akm);
    else if(num_month_akm == 8)
        printf("Month Number %d Is AUGUST !!!\n\n", num_month_akm);
    else if(num_month_akm == 9)
        printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month_akm);
    else if(num_month_akm == 10)
        printf("Month Number %d Is OCTOBER !!!\n\n", num_month_akm);
    else if(num_month_akm == 11)
        printf("Month Number %d Is NOVEMBER !!!\n\n", num_month_akm);
    else if(num_month_akm == 12)
        printf("Month Number %d Is DECEMBER !!!\n\n", num_month_akm);
    else 
        printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month_akm);

    printf("If - Else If - Else Ladder Complete!!\n");
    return (0);
}