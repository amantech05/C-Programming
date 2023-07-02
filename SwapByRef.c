#include <stdio.h>

// Function to swap two integers using pointers
void swaping(int *a, int *b) 
{
    int temp = *a;  // Store the value pointed by 'a' in 'temp'
    *a = *b;  // Assign the value pointed by 'b' to the memory location pointed by 'a'
    *b = temp;  // Assign the value of 'temp' to the memory location pointed by 'b'
}

int main() 
{
    int n1 = 23;  // Declare and initialize variable 'n1' with 23
    int n2 = 43;  // Declare and initialize variable 'n2' with 43

    swaping(&n1, &n2);  // Call the 'swaping' function and pass the addresses of 'n1' and 'n2'

    printf("After swap Number 1 = %d, Number 2 = %d\n", n1, n2);  // Print the values of 'n1' and 'n2' after swapping

    return 0;  // Return 0 to indicate successful execution
}
