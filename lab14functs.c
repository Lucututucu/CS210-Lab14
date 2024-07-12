/** lab14functs.c
* ===========================================================
* Name: 
* Section:
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
    

    // Make x have the same value as y
    

    // Make y have the same value as temp
    

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
    

    // Set the value stored at ptrX to contain the value stored at ptrY
    

    // Set the value stored at ptrY to contain the value stored in temp
    
    
    printf("after swap: ptrX = %d; ptrY = %d\n", *ptrX, *ptrY);
}