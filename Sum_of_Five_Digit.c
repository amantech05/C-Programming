#include<stdio.h>

int main ()
{
    int num;
    printf("enter the number:- ");
    scanf("%d",&num);  // Read an integer from the user and store it in 'num'

    int sum = 0;  // Initialize a variable 'sum' to store the sum of digits
    while(num!= 0)  // Repeat the loop until 'num' becomes zero
    {
        sum += num % 10;  // Add the last digit of 'num' to 'sum'
        num = num / 10;  // Remove the last digit from 'num'
    }
    printf("digit sum: %d", sum);  // Print the sum of digits
}
