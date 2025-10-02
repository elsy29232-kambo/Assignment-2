//program to display  total water bill consumed by the user 
/*
Name:Elsy Kambo
Description: program to calculate the total water bill of water consumption by user 
Reg No:PA106/29232/G/25
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else
    if (units <= 30) {
        bill = units * 20.0;
    }
    else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    }
    else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Display result
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}

