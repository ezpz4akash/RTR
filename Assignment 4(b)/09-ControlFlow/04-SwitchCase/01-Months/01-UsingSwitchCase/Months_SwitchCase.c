#include <stdio.h>
int main(void){
    //variable declarations
    int num_month_akm;

    //code
    printf("\n\n");

    printf("Enter Number Of Month (1 to 12) : ");
    scanf("%d", &num_month_akm);

    printf("\n\n");

    switch(num_month_akm){
        case 1 : 
        printf("Month Number %d Is JANURAY !!!\n\n", num_month_akm);
        break;

        case 2 : 
        printf("Month Number %d Is FEBRUARY !!!\n\n", num_month_akm);
        break;
        
        case 3 : 
        printf("Month Number %d Is MARCH !!!\n\n", num_month_akm);
        break;
        
        case 4 : 
        printf("Month Number %d Is APRIL !!!\n\n", num_month_akm);
        break;
        
        case 5 : 
        printf("Month Number %d Is MAY !!!\n\n", num_month_akm);
        break;
        
        case 6 : 
        printf("Month Number %d Is JUNE !!!\n\n", num_month_akm);
        break;
        
        case 7 : 
        printf("Month Number %d Is JULY !!!\n\n", num_month_akm);
        break;
        
        case 8 : 
        printf("Month Number %d Is AUGUST !!!\n\n", num_month_akm);
        break;
        
        case 9 : 
        printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month_akm);
        break;
        
        case 10 : 
        printf("Month Number %d Is OCTOBER !!!\n\n", num_month_akm);
        break;
        
        case 11 : 
        printf("Month Number %d Is NOVEMBER !!!\n\n", num_month_akm);
        break;
        
        case 12 : 
        printf("Month Number %d Is DECEMBER !!!\n\n", num_month_akm);
        break;

        default:
            printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month_akm);
            break;
    }

    printf("Switch Case Block Complete !!!\n");

    return (0);
}