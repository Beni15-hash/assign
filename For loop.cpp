/*Program for loop
Author: Benson Maina
reg;CT101/G/23661/24 */

#include <stdio.h>

int main() {
    int start, stop;

    // Get the start and stop values from the user
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the stop value: ");
    scanf("%d", &stop);

    // For loop to print numbers from start to stop
    for (int i = start; i <= stop; i++) {
        printf("%d\n", i);
    }

    return 0 ;
    }