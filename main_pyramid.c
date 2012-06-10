/* 
 * Eric Gallager
 * 
 * Problem:
 * Write a program that will output a pyramid of height n made out of stars, where n is between 1 and 30
 * For Example: 
 * 
 * Input
 * Height of the Pyramid = 4
 * 
 * Output
 *    *
 *   ***
 *  *****
 * *******
 *
 * ---
 * 
 * Algorithm:
 * 1. Get input from user
 * 2. Use user input to determine the number of rows to put in the pyramid
 * 3. Each row will have (2n + 1) stars in it, with the top row being row 0
 * 4. To center each row:
 *	4a. Get the width of the bottom row in stars
 *	4b. Subtract n stars from it to get the middle star (where n is the row number from before)
 *	4c. For the top row, add n spaces, where n is the n that was used to subtract stars from the bottom row
 *	4d. For each subsequent row, subtract one space from the number of spaces to be added
 *
 */

#include <stdio.h>

int main (void) {
	int row_number = 1;
	int total_rows = 1;
	int stars = 0;
	int spaces = 1;
    printf("\n Enter how many rows high you want to make your pyramid (make it a number from 1 to 30) > "); // prompt
	scanf("%i", &total_rows); // get input
	printf("\n The pyramid will have %i rows. \n \n", total_rows); /* statement for debugging */
	for (row_number = 1; row_number <= total_rows; row_number++) { // makes the number of rows
		printf(" ");
		for (spaces = total_rows; spaces >= row_number; spaces--) { 
			printf(" "); // adds spaces to center the pyramid
		}
		for (stars = 2; stars <= row_number; stars++) { // makes the pyramid bigger each row
			printf("**"); 
		}
		printf("*\n"); // ends each row
	}
    return 0;
}
