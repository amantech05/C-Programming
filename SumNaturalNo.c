#include <stdio.h>

int main() 
{
   int sum = 0;  // Initialize a variable 'sum' to store the sum of numbers
   for(int i = 1; i <= 10; i++)  // Loop from i = 1 to i <= 10
   {
      sum += i;  // Add the value of 'i' to 'sum'
   }
   printf("Sum of first 10 natural numbers: %d", sum);  // Print the sum
   return 0;  // Return 0 to indicate successful execution
}
