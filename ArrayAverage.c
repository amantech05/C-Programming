#include <stdio.h>

int main() {
    int num, sum = 0;  // Declare variables 'num' and 'sum' to store the current number and the sum of all numbers
    float average;  // Declare a variable 'average' to store the average of the numbers

    for (int i = 1; i <= 10; i++) {  // Iterate from 1 to 10 (10 iterations) using a for loop
        printf("Enter the number: ");  // Prompt the user to enter a number
        scanf("%d", &num);  // Read and store the entered number in the variable 'num'
        sum = sum + num;  // Add the current number to the 'sum' variable
    }

    printf("Sum of 10 numbers is: %d\n", sum);  // Print the value of 'sum', which represents the sum of the 10 numbers
    
    average = sum / 10.0;  // Calculate the average by dividing the sum by 10.0 and assign it to the 'average' variable
    
    printf("Average of digits is: %f", average);  // Print the value of 'average', which represents the average of the numbers
    
    return 0;  // Return 0 to indicate successful execution of the program
}
