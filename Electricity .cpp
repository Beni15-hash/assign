#include<stdio.h>
int Main () 
{
int customerID;
char customerName [100];
int unitsconsumed;
float chargeperunit,totalBill;

//promt user for input 
printf("Enter customer ID:");
scanf("%d",& customerID);

printf("Enter the customer Name:");
scanf("%[^\n]", customerName);
//To read string with spaces

printf("Enter the units Consumed:");
scanf("%d ",&unitsconsumed);

//calculate charge per unit and total bill
if (unitsconsumed < 200) {
chargeperunit=1.20;
} else if (unitsconsumed >= 200 && unitsconsumed < 400) {
chargeperunit= 1.50;
}else if(unitsconsumed >= 400  &&  unitsconsumed < 600) {
chargeperunit=2.00;
} else {
chargeperunit =0.0; // you may want to handle units above 600
printf("units Consumed above 600 are not covered by this program.\n");
return 1 ;
} 

//calculate total bill
totalBill =unitsconsumed * chargeperunit;

//Ensure minimum bill is ksh.100
if(totalBill <100) {
totalBill=100;
}

//Display the output
printf("\nElectricity Bill details:\n");
printf("customer ID:%d\n", customerID);
printf ("Customer Name:%s\n", customerName);
printf("units Consumed: %d\n", unitsconsumed);
printf (" chargers per unit :ksh.%.2f\n", chargeperunit);
printf ("Total Amount to pay:ksh.%2.f\n", totalBill);

return 0;
}