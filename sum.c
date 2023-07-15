#include<stdio.h>  // This line includes the standard input/output library in the code.

int main (){
    int x, y, z;  // Declare integer variables x, y, and z.

    printf("Enter the value of x: ");  // Prompt the user to enter the value of x.
    scanf("%d", &x);  // Read and store the input value in the variable x.

    printf("Enter the value of y: ");  // Prompt the user to enter the value of y.
    scanf("%d", &y);  // Read and store the input value in the variable y.

    z = x + y;  // Calculate the sum of x and y and assign it to z.

    printf("Sum of '%d' and '%d' is %d.", x, y, z);  // Print the sum of x and y.

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
