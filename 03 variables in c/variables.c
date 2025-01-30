#include <stdio.h>



/*

Variables: something in which we stores value;
Constant:  once declared it cannot be changed;


data type var_name = value;
*/


#define PI 3.14

int main() {
    int firstNumber = 10;
    float secondNum = 4.45;
    char mychar = 'P';

    printf("The first number is %d \n", firstNumber);
    printf("The value of pi is %.2f \n", PI);
    printf("The value of secondNum is %.2f \n", secondNum);
    printf("My char is %c", mychar);

    return 0;
}













// #define valueConstant 24.21

// int main() {
//     int firstNum = 2;
//     firstNum = 42;

//     printf("firstnum %d \n", firstNum);
//     printf("valueConstant %f", valueConstant);

//     return 0;
// }