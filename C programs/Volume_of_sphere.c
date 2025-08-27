#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    double pi, volume;

    printf("Enter Radius: "); 
    scanf("%f", &radius); 
    
    pi = 3.14159;
    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("The volume of a sphere with radius %.2f is %.2f cubic units\n", radius, volume);

    return 0;
}
