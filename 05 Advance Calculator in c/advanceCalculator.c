#include <stdio.h>

int main() {

    // Advance calculator

    // Declaring Variables
    int firstNum, secondNum, sum, sub, mul, div, mod;

    // Taking user Input
    printf("Enter first number: \n");
    scanf("%d", &firstNum);

    printf("Enter second number: \n");
    scanf("%d", &secondNum);

    // Logic for calculation
    sum = firstNum + secondNum;
    sub = firstNum - secondNum;
    mul = firstNum * secondNum;
    div = firstNum / secondNum;
    mod = firstNum % secondNum;

    // Printing the output
    printf("The addition of firstNum and secondNum is: %d", sum);
    printf("The subtraction of firstNum and secondNum is: %d", sub);
    printf("The multiplication of firstNum and secondNum is: %d", mul);
    printf("The division of firstNum and secondNum is: %d", div);
    printf("The Modulus of firstNum and secondNum is: %d", mod);

    return 0;
    
}