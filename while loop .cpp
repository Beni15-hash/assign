/* program for while loop
Author: Benson Maina
reg: CT101/G/23661/24 */
#include <stdio.h>

int main() {
    int start, stop;

    // Get start and stop values from user
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter stop value: ");
    scanf("%d", &stop);

    // While loop to iterate from start to stop
    while (start <= stop) {
        printf("%d\n", start);
        start++;  // Increment the start value
    }

    return 0;
}