#include <stdio.h>
#include <math.h>  // for pow function
/*Author:Benson Maina
reg no:CT101/G/23661/24 
*/
int main() {
    double principal, rate, time, compoundInterest;
    int n;  // number of times interest applied per time period

    // Input principal, rate of interest, time, and number of times interest is compounded
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + (rate / (n * 100))), n * time);

    // Output the result
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}