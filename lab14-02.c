/** lab14-02.c
* ===========================================================
* Name: Lucas Briggs 18 Setp 2024
* Section: T1/2 Kloenne
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main(void) {
    //Initialize variables
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    //Accept input
    printf("Please enter a number of cents from 1-99: ");
    scanf(" %d", &cents);

    //Process Input
    makeChange(cents, &quarters, &dimes, &nickels, &pennies);

    //Display result
    printf("quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", quarters, dimes, nickels, pennies);
   
    return 0;
}