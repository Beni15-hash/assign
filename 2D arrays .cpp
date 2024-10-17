/* Author Benson Maina 
reg no. CT101/G/23661/24 
Date:14/10/2024 */
// C arrays - 2D arrays 
#include<stdio.h>
int main()
{
int i,j;
int marks[2][3]={{40,50,60},{20,30,40} };
for (i=0;i<2;i++)
for (j=0; j<3; j++){
printf("marks[%d][%d] =%d \n",i,j,marks[i][j]);
}
return 0;
}
