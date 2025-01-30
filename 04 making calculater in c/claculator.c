#include <stdio.h>

int main() {
    // Our first calculator in C

    int firstNum = 36;
    int secondNum = 4; 

    // Declaring variables 
    int add, sub, mul, div, mod;

    // Adding logic for calculator
    add = firstNum + secondNum;
    sub = firstNum - secondNum;
    mul = firstNum * secondNum;
    div = firstNum / secondNum;
    mod = firstNum % secondNum;
 
    // Printing the output
    printf("The addition of firstNum and secondNum is: %d \n", add);
    printf("The subtraction of firstNum and secondNum is: %d \n", sub);
    printf("The multiplication of firstNum and secondNum is: %d \n", mul);
    printf("The division of firstNum and secondNum is: %d \n", div);
    printf("The modulus of firstNum and secondNum is: %d \n", mod);

    return 0;
}