#include<stdio.h>

int main ()
{
    int x, y;
    printf("Enter the value of x: ");  // Prompt the user to enter the value of 'x'
    scanf("%d", &x);  // Read an integer from the user and store it in 'x'

    printf("Enter the value of y: ");  // Prompt the user to enter the value of 'y'
    scanf("%d", &y);  // Read an integer from the user and store it in 'y'

    printf("Without swapping numbers: x=%d and y=%d\n", x, y);  // Print the original values of 'x' and 'y'

    x = x + y;  // Assign the sum of 'x' and 'y' to 'x'
    y = x - y;  // Assign the difference of 'x' and 'y' (new 'x') to 'y'
    x = x - y;  // Assign the difference of the new 'x' and 'y' to 'x' (original 'y')

    printf("After swapping the numbers: x=%d and y=%d", x, y);  // Print the values of 'x' and 'y' after swapping

    return 0;  // Return 0 to indicate successful execution
}
