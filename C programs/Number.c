#include <stdio.h>
#include <math.h>

int main(){
    int smallnum;
    float mediumnum;
    double largenum;

    printf("Enter Small number:");
    scanf("%d", &smallnum);

    printf("Enter medium  number:");
    scanf("%f", &mediumnum);

    largenum = smallnum;

    printf("Small to large: %.1f\n", largenum);

    largenum = mediumnum;

    printf("Medium to large: %.1f", largenum);

    return 0;
}
