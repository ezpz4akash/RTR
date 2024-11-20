#include <stdio.h>

#define MY_PI_AKM 3.1415926535897932

#define AMC_STRING_AKM "AstroMediComp RTR"

//Un-named enums
enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
};

enum {
    JANURAY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

//Name enums
enum Numbers {
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE = 5,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN
};

enum boolean {
    TRUE = 1,
    FALSE = 0
};

int main(void){
    //local constant declarations

    const double epsilon_akm = 0.000001;

    //code
    printf("\n\n");
    printf("Local Constant Epsilon = %lf\n\n", epsilon_akm);

    printf("Sunday Is Dat Number = %d\n", SUNDAY);
    printf("Monday Is Dat Number = %d\n", MONDAY);
    printf("Tuesday Is Dat Number = %d\n", TUESDAY);
    printf("Wednesday Is Dat Number = %d\n", WEDNESDAY);
    printf("Thursday Is Dat Number = %d\n", THURSDAY);
    printf("Friday Is Dat Number = %d\n", FRIDAY);
    printf("Saturday Is Dat Number = %d\n\n", SATURDAY);

    printf("One Is Enum Number = %d\n", ONE);
    printf("Two Is Enum Number = %d\n", TWO);
    printf("Three Is Enum Number = %d\n", THREE);
    printf("Four Is Enum Number = %d\n", FOUR);
    printf("Five Is Enum Number = %d\n", FIVE);
    printf("Six Is Enum Number = %d\n", SIX);
    printf("Seven Is Enum Number = %d\n", SEVEN);
    printf("Eight Is Enum Number = %d\n", EIGHT);
    printf("Nine Is Enum Number = %d\n", NINE);
    printf("Ten Is Enum Number = %d\n\n", TEN);

    printf("January Is The Month Number = %d\n", JANURAY);
    printf("February Is The Month Number = %d\n", FEBRUARY);
    printf("March Is The Month Number = %d\n", MARCH);
    printf("April Is The Month Number = %d\n", APRIL);
    printf("May Is The Month Number = %d\n", MAY);
    printf("June Is The Month Number = %d\n", JUNE);
    printf("July Is The Month Number = %d\n", JULY);
    printf("August Is The Month Number = %d\n", AUGUST);
    printf("September Is The Month Number = %d\n", SEPTEMBER);
    printf("October Is The Month Number = %d\n", OCTOBER);
    printf("November Is The Month Number = %d\n", NOVEMBER);
    printf("December Is The Month Number = %d\n\n", DECEMBER);

    printf("Value Of TRUE Is = %d\n", TRUE);
    printf("Value Of FALSE Is = %d\n\n", FALSE);

    printf("MY_PI_AKM Macro Value  = %.10lf\n\n", MY_PI_AKM);
    printf("Area Of Circle Of Radius 2 units = %f\n\n", (MY_PI_AKM * 2.0f * 2.0f));

    printf("\n\n");

    printf(AMC_STRING_AKM);
    printf("\n\n");

    printf("AMC_STRING_AKM is %s\n", AMC_STRING_AKM);
    printf("\n\n");

    return (0);

}