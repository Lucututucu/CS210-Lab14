/** lab14functs.c
* ===========================================================
* Name: Lucas Briggs 18 Setp 2024
* Section: T1/2 Kloenne
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include "lab14functs.h"

/** ----------------------------------------------------------
 * @param x first value
 * @param y second value
 * @pre none
 * @post 
 */
void swapPassByValue(int x, int y) {
    printf("----- Running swapPassByValue -----\n");
    printf("before swap: x = %d; y = %d\n", x, y);
 
    // Creates a temporary value
    int temp;

    // Set temp to have the same value as x
    temp = x;

    // Make x have the same value as y
    x = y;

    // Make y have the same value as temp
    y = temp;

    printf("after swap: x = %d y = %d\n", x, y);
}

/** ----------------------------------------------------------
 * @param ptrX a pointer to the first value
 * @param ptrY a pointer to the second value
 * @pre none
 * @post 
 */
void swapPassByReference(int* ptrX, int* ptrY) {
    printf("----- Running swapPassByReference -----\n");
    printf("before swap: ptrX = %d; ptrY = %d\n", *ptrX, *ptrY);
 
    // Creates a temporary int variable
    int temp;

    // Set temp to contain the value stored at ptrX
    temp = *ptrX;

    // Set the value stored at ptrX to contain the value stored at ptrY
    *ptrX = *ptrY;

    // Set the value stored at ptrY to contain the value stored in temp
    *ptrY = temp;
    
    printf("after swap: ptrX = %d; ptrY = %d\n", *ptrX, *ptrY);
}

void makeChange(int input, int* quarters, int* dimes, int* nickels, int* pennies) {
    *quarters = input / 25;
    *dimes = (input % 25) / 10;
    *nickels = ((input % 25) % 10) / 5;
    *pennies = input % 5;
}