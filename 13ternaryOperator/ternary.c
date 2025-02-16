#include <stdio.h>

int main() {
    printf("enter your age: \n");
    int age;
    scanf("%d", &age);

    age < 18 ? printf("you cannot vote") : printf("you can vote");
    return 0;
}