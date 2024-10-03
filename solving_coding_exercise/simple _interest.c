
#include <stdio.h>
intmain()
{
    float principal,rate,time,simpleinterest;
    //input from user

    printf("enter the principal amount:");
    scanf("%f",&principal);

    printf("enter the rate of interest:");
    scanf("%f",&rate);

    printf("enter the time (in years):");
    scanf("%f",&time);

    //calculate simple interest
    simpleinterest=(principal*rate*time)/100;

    //output the results
    printf("simple interest;%2.f\n",simpleinterest);
    return 0;
}