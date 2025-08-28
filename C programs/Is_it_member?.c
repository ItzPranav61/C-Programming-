#include <stdio.h>
#include <string.h> 
int main() {
    int age = 65;
    char isMember[5] = "No"; 
    int memberStatus = 0;
    if (strcmp(isMember, "Yes!") == 0) { 
        printf("Yes you are eligible (as a member).\n");
        memberStatus = 1; 
    } else { 
        printf("Please enter your age: "); 
        scanf("%d", &age);
    }
    int isEligible = (age >= 50 || memberStatus == 1); 
    
    printf("Eligible for discount? %d\n", isEligible);
    
    return 0;
}
