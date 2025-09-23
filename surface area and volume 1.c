//A program to find the volume and surface area of a cylinder prompting the user to enter height and radius 
/*
Name: Elsy Njambi Kambo
Reg No:PA106/29232/25
Description:A C program to find the volume and surface area of a cylinder 
*/
#include<stdio.h>
int main ()
{
//variable declaration
float radius;
int height;
float surface_area;
float volume;
float pi=3.142;
//prompt the user to enter height 
printf("enter height");
scanf("%d", &height);
//prompt the user to enter radius 
printf("enter radius");
scanf("%f", &radius);
//compute volume and surface _area
volume=pi * radius * radius * height;
surface_area=2 * pi * radius * radius + pi * radius * height;
//display volume and surface _area
printf("volume =%2f\n", volume);
printf("surface_area =%2f\n", surface_area);

return 0;
}