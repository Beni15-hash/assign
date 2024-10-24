/*Author Benson Maina 
reg no. CT101/G/23661/24 
Date: 20/10/2024 */
//C structures
#include<stdio.h>
#include<string.h>//strcpy
struct student{
char name [40];
float height;
char reg_no[20];
char email [15];
int phone;
} student1, student2;

int main (){
//struct student1, student2
//strcpy (student1.name,"Maina");
printf("enter your name");
scanf("%s",& student1.name);
student1.height=1.7;
strcpy(student1.reg_no,"CT101/G/23661/24");
strcpy (student1.email,"bexymaina50@gmail.com");
student1.phone=12345698;

printf("Name:%s\n", student1.name);
printf("height:%f\n",student1.height);
printf("email:%s\n", student1.email);
printf("phone number:%d\n", student1.phone);

return 0;
}