#include<stdio.h>  // This line includes the standard input/output library in the code.

int main(){
    int x = 4, y = 4, z = 8;  // Declare and initialize integer variables x, y, and z.

    printf("%d == %d is %d\n", x, y, x == y);  // Print the result of the equality comparison between x and y.
    printf("%d == %d is %d \n", x, z, x == z);  // Print the result of the equality comparison between x and z.
    printf("%d > %d is %d \n", x, y, x > y);  // Print the result of the greater than comparison between x and y.
    printf("%d > %d is %d \n", x, z, x > z);  // Print the result of the greater than comparison between x and z.
    printf("%d < %d is %d \n", x, y, x < y);  // Print the result of the less than comparison between x and y.
    printf("%d < %d is %d\n", x, z, x < z);  // Print the result of the less than comparison between x and z.
    printf("%d != %d is %d \n", x, y, x != y);  // Print the result of the not equal comparison between x and y.
    printf("%d != %d is %d \n", x, z, x != z);  // Print the result of the not equal comparison between x and z.
    printf("%d >= %d is %d\n", x, y, x >= y);  // Print the result of the greater than or equal to comparison between x and y.
    printf("%d >= %d is %d \n", x, z, x >= z);  // Print the result of the greater than or equal to comparison between x and z.
    printf("%d <= %d is %d \n", x, y, x <= y);  // Print the result of the less than or equal to comparison between x and y.
    printf("%d <= %d is %d \n", x, z, x <= z);  // Print the result of the less than or equal to comparison between x and z.

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
