//program to determine whether a student is eligible for the final exams 

/*
Name: Elsy Njambi Kambo 
Reg No:PA106/G/29232/25
Description:A program to check the eligibility of a student for the final exams 
Date:30th September 2025
*/
#include <stdio.h>
int main (){
//variable declaration 
float attendance ;
int average_marks;

// prompt the user to enter their attendance and average_marks
printf("enter your attendance\t");
scanf("%f", &attendance);

printf("enter your average_marks\t");
scanf("%d",  &average_marks);

//check whether the student is eligible for the final exams 
if(attendance>=0.75 && average_marks>=40)
{
printf("student eligible.");
}else{
printf("not eligible.");
}
return 0 ;
}