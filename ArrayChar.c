#include <stdio.h>

int main() {
    char alpha[10];  // Declare a character array 'alpha' with a size of 10 to store characters
    int i;  // Declare an integer variable 'i' for loop iteration

    for (i = 0; i < 7; i++) {  // Iterate from 0 to 6 (7 iterations) using a for loop
        printf("Enter characters: ");  // Prompt the user to enter a character
        scanf("%c", &alpha[i]);  // Read and store the entered character in the array at index 'i'
    }
    
    printf("%s", alpha);  // Print the contents of the 'alpha' array using the "%s" format specifier for strings
    
    return 0;  // Return 0 to indicate successful execution of the program
}
