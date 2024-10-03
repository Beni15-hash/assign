#include <stdio.h>

int main()
{
    int age;
    float income;
    char key;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your income: ");
    scanf("%f", &income);
    if (age > 21 && income >= 21000)
    {
        printf("CONGRATULATIONS🎉! You qualify fo the loan  .\n\n\n");
    }
    else
    {
        printf("UNFORTUNATELY 😥, We are unable to offer you a loan at this time.\n\n\n");
    }

    printf("Press any key to Exit...");
    scanf("%s", &key);
    return 0;
}