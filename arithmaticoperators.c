#include<stdio.h>

int main() {
    int x = 5;  // Declare and initialize an integer variable 'x' with the value 5
    int y = 5;  // Declare and initialize another integer variable 'y' with the value 5
    
    int sum = x + y;  // Calculate the sum of 'x' and 'y' and store it in the variable 'sum'
    int subtraction = x - y;  // Calculate the subtraction of 'y' from 'x' and store it in the variable 'subtraction'
    int product = x * y;  // Calculate the product of 'x' and 'y' and store it in the variable 'product'
    int divide = x / y;  // Perform integer division of 'x' by 'y' and store the quotient in the variable 'divide'
    int remainder = x % y;  // Calculate the remainder of 'x' divided by 'y' and store it in the variable 'remainder'
    
    printf("%d\n", sum);  // Print the value of 'sum' using printf function
    printf("%d\n", subtraction);  // Print the value of 'subtraction'
    printf("%d\n", product);  // Print the value of 'product'
    printf("%d\n", divide);  // Print the value of 'divide'
    printf("%d\n", remainder);  // Print the value of 'remainder'
    
    return 0;  // Return 0 to indicate successful execution of the program
}
