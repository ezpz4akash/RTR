#include <stdio.h>
int main(void){
    //variable declarations
    int num_akm;

    //code
    printf("\n\n");

    printf("Enter Value For 'num' : ");
    scanf("%d", &num_akm);

    if(num_akm < 0){
        printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n");
    }
    else{
        if((num_akm > 0) && (num_akm <= 100)){
            printf("Num = %d Is Between 0 and 100 !!!\n\n", num_akm);
        }
        else{
            if((num_akm > 100) && (num_akm <= 200)){
                printf("Num = %d Is Between 100 And 200 !!!\n\n", num_akm);
            }
            else{
                if((num_akm > 200) && (num_akm <= 300)){
                    printf("Num = %d Is Between 200 And 300 !!!\n\n", num_akm);
                }
                else{
                    if((num_akm > 300) && (num_akm <= 400)){
                        printf("Num = %d Is Between 300 And 400 !!!\n\n", num_akm);
                    }
                    else{
                        if((num_akm > 400) && (num_akm <= 500)){
                            printf("Num = %d Is Between 400 And 500 !!!\n\n", num_akm);
                        }
                        else{
                            printf("Num = %d Is Greater Than 500 !!!\n\n", num_akm);
                        }
                    }
                }
            }
        }
    }

    return (0);
}