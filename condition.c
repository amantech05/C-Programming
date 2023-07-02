#include<stdio.h>

int main()
{
    int x = 2;  // Initialize a variable 'x' with the value 2
    int num;  // Declare a variable 'num' to store user input

    printf("Enter the num: ");  // Prompt the user to enter a number
    scanf("%d", &num);  // Read an integer from the user and store it in 'num'

    if(num == 10)  // Check if 'num' is equal to 10
    {
        printf("The number is equal to 10: %d", x);  // Print the value of 'x'
    }
    else if (num > 10)  // Check if 'num' is greater than 10
    {
        printf("The number is greater than 10: %d", x);  // Print the value of 'x'
    }
    else  // If 'num' is neither equal to nor greater than 10
    {
        printf("The number is smaller than 10.");  // Print a message
    }
    
    return 0;  // Return 0 to indicate successful execution
}
