#include <stdio.h>
#define pie 3.14159

int main() {
    
    float radius, areaOfCircle;
    printf("Enter radius:");
    scanf("%f", &radius);

    areaOfCircle = (pie * (radius * radius));

    printf("area of circle is: %f", areaOfCircle);


    return 0;
}