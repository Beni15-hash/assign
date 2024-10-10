/* program  for do while loop 
Author: Benson Maina
reg : CT101/G/23661/24 */
#include <stdio.h>

int main() {
    int start, stop;

    // Input start and stop values
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the stop value: ");
    scanf("%d", &stop);

    // Ensure start is less than or equal to stop
    if (start > stop) {
        printf("Start value should be less than or equal to stop value.\n");
        return 1;
    }

    // Using do-while loop to print numbers from start to stop
    int i = start;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= stop);

    return 0;
}