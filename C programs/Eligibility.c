#include <stdio.h>

int checkEligibility(float gpa, int creditHours, int hasViolations, int hasRecommendations) {

    int checkEligibility= (gpa >= 3.5 || hasRecommendations) && (creditHours >= 60) && (hasViolations == 0);

}

int main() {
    float gpa;
    int creditHours, hasViolations, hasRecommendations;

    printf("Enter your GPA:", gpa);
    scanf("%f", &gpa);

    printf("Enter your Credit Hours:", creditHours);
    scanf("%d", &creditHours);

    printf("Number of violations you have?", hasViolations);60
    scanf("%d", &hasViolations);

    printf("Enter Recommendation type 1 or 0", hasRecommendations);
    scanf("%d", &hasRecommendations);


    if (checkEligibility(gpa, creditHours, hasViolations, hasRecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }

    return 0;
}
