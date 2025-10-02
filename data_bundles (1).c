//program to purchase mobile data 
/*
Name: Elsy Kambo 
Description: Program to purchase mobile data bundle 
Reg No:PA106/29233/G/25
*/

#include <stdio.h>

int main() {
    int choice;

    // Display menu
    printf("Select data_bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use if–else instead of switch
    if (choice == 1) {
        printf("You selected 100MB. Cost = 50 KES\n");
    } 
    else if (choice == 2) {
        printf("You selected 500MB. Cost = 200 KES\n");
    } 
    else if (choice == 3) {
        printf("You selected 1GB. Cost = 350 KES\n");
    } 
    else if (choice == 4) {
        printf("You selected 2GB. Cost = 600 KES\n");
    } 
    else {
        printf("Invalid choice\n");
    }

    return 0;
    }

