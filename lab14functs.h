/** lab14functs.h
* ===========================================================
* Name: Lucas Briggs 18 Setp 2024
* Section: T1/2 Kloenne
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#ifndef FILE_H
#define FILE_H

/** 
 * @brief Swaps the values of two inputs
 * @param x An integer
 * @param y An integer
 * @return Nothing
 */ 
//type name(type parameter...);
void swapPassByValue(int x, int y);

/** 
 * @brief Swaps the values of two inputs by accessing their adresses
 * @param x An integer
 * @param y An integer
 * @return Nothing
 */ 
void swapPassByReference(int* ptrX, int* ptrY);

void makeChange(int input, int* quarters, int* dimes, int* nickels, int* pennies);


#endif