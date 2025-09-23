//Program to offer loan to a customer based on bank conditions 
/*
Name:Elsy Njambi Kambo 
Reg No:PA106/29232/25
Description: program to offer loan to a bank customer who meets the bank requirements 
*/
#include<stdio.h>
int main (){
//variable declaration and initialization 
int age;
float annual_income ;

//prompt the user to enter his age and annual income 
printf("enter your age");
scanf("%d", &age);

printf("enter your annual_income");
scanf("%f" , &annual_income);

//verify whether the customer is legible to the loan
if(age>=21&&annual_income>=21000)
{printf("congratulations you qualify for a loan.\n");
}else{
printf("unfortunately we are unable to offer you loan at this time.\n");}

return 0;
}