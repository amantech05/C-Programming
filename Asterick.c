#include <stdio.h>

int main() {
    int rows;  // Declare an integer variable 'rows' to store the number of rows
    
    printf("Enter the number of rows: ");  // Prompt the user to enter the number of rows
    scanf("%d", &rows);  // Read and store the entered number of rows in the variable 'rows'
    
    for (int i = 1; i <= rows; i++) {  // Iterate from 1 to the value of 'rows' (inclusive) using a for loop for each row
        for (int j = 1; j <= rows - i; j++) {  // Iterate from 1 to 'rows - i' (inclusive) using a for loop for printing spaces
            printf(" ");  // Print a space to create indentation
        }
        
        for (int k = 1; k <= i; k++) {  // Iterate from 1 to 'i' (inclusive) using a for loop for printing asterisks
            printf("* ");  // Print an asterisk followed by a space
        }
        
        printf("\n");  // Move to the next line after printing each row
    }
    
    return 0;  // Return 0 to indicate successful execution of the program
}
