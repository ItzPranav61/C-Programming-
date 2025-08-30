#include <stdio.h>

int main() {
    int first, second;

    printf("Enter First number:");
    scanf("%d", &first);

    printf("Enter Second number:");
    scanf("%d", &second);


    int remainder = first % second;
    int sum = first + second;
    int is_sum_odd = sum % 2 == 1;
    int is_divisible = remainder == 0;

    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", is_sum_odd);
    printf("First is divisible by second: %d\n", is_divisible);

    return 0;
}
