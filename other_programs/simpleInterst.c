#include <stdio.h>

int main() {
    int principal_dataue;
    int rate_of_interest;
    int time_duration;

    printf("Enter the following information:\n");
    printf("principal: ");
    scanf("%d", &principal_dataue);
    printf("\nrate of interest: ");
    scanf("%d", &rate_of_interest);
    printf("\ntime duration: ");
    scanf("%d", &time_duration);

    int simple_interest = (principal_dataue * rate_of_interest * time_duration) / 100;
    printf("Simple Interest: %d\n", simple_interest);

    return 0;
}
