#include <stdio.h>
int main(void){
    //variable declarations
    int i_num_akm, num_akm, i_akm;

    //code
    printf("\n\n");

    printf("Enter An Integer Value From Which Iteration Must Begin : ");
    scanf("%d", &i_num_akm);

    printf("How Many Digits Do You Want To Print From %d Onwards ? : ", i_num_akm);
    scanf("%d", &num_akm);

    printf("Printing Digits %d to %d : \n\n", i_num_akm, (i_num_akm + num_akm));

    i_akm = i_num_akm;
    do{
        printf("\t%d\n", i_akm);
        i_akm++;
    }while(i_akm <= (i_num_akm + num_akm));

    printf("\n\n");

    return (0);
}