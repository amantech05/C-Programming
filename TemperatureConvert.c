#include<stdio.h>

int main()
{
    float degreecelsius;  // Declare a variable to store the temperature in degree Celsius

    printf("Enter the value in celsius: ");  // Prompt the user to enter the temperature in Celsius
    scanf("%f", &degreecelsius);  // Read a floating-point number from the user and store it in 'degreecelsius'

    float degreefahreheit = (degreecelsius * 9/5) + 32;  // Convert Celsius to Fahrenheit using the formula (C * 9/5) + 32

    printf("Temperature in degree Fahrenheit: %f", degreefahreheit);  // Print the temperature in Fahrenheit

    return 0;  // Return 0 to indicate successful execution
}
