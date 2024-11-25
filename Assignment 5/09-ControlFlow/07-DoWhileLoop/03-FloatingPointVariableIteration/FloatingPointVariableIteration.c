#include <stdio.h>
int main(void){
    //variable declarations
    float f_akm;
    float f_num_akm = 1.7f;

    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", f_num_akm, (f_num_akm * 10.0f));

    f_akm = f_num_akm;
    do{
        printf("\t%f\n", f_akm);
        f_akm = f_akm + f_num_akm;
    }while(f_akm <= (f_num_akm * 10.0f));

    printf("\n\n");

    return (0);
}