/*Author Benson Maina 
reg no. CT101/G/23661/24 
Date:14/10/2024 */
// C arrays - 3D arrays 
#include<stdio.h>
int main()
{
int i,j,k;
int marks[2][2][3]={ {{40,50,60},{20,30,40} }, {{40,50,60},{20,30,40}} };
for (i=0;i<2;i++){
for (j=0; j<2; j++){
for(k=0;k<3;k++ ){
printf("marks[%d][%d][%d] =%d \n",i,j,k,marks[i][j][k]);
}
}
}
return 0;
}
