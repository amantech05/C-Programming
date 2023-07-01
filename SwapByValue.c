#include <stdio.h>

// Function to swap two integers using pass-by-value
void swaping(int a, int b) 
{
    int temp = a;  // Store the value of 'a' in 'temp'
    a = b;  // Assign the value of 'b' to 'a' (local to the function)
    b = temp;  // Assign the value of 'temp' to 'b' (local to the function)
}

int main() 
{
    int n1 = 23;  // Declare and initialize variable 'n1' with 23
    int n2 = 43;  // Declare and initialize variable 'n2' with 43

    swaping(n1, n2);  // Call the 'swaping' function and pass the values of 'n1' and 'n2'

    printf("After swap Number 1 = %d, Number 2 = %d\n", n1, n2);  // Print the values of 'n1' and 'n2' (unchanged)

    return 0;  // Return 0 to indicate successful execution
}
