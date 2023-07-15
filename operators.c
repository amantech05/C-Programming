#include <stdio.h>  // This line includes the standard input/output library in the code.

int main(){
    int x, y;  // Declare integer variables x and y.

    printf("Enter the value of x: ");  // Prompt the user to enter the value of x.
    scanf("%d", &x);  // Read and store the input value in the variable x.

    printf("Enter the value of y: ");  // Prompt the user to enter the value of y.
    scanf("%d", &y);  // Read and store the input value in the variable y.

    int result1 = x + y;  // Calculate the sum of x and y and assign it to result1.
    int result2 = x -= y;  // Subtract y from x and assign the result to x, then assign it to result2.
    int result3 = x *= y;  // Multiply x by y and assign the result to x, then assign it to result3.
    int result4 = x /= y;  // Divide x by y and assign the result to x, then assign it to result4.
    int result5 = x %= y;  // Calculate the remainder of x divided by y and assign it to x, then assign it to result5.

    printf("Using '+=': %d\n", result1);  // Print the result of the addition using the '+=' operator.
    printf("Using '-=': %d\n", result2);  // Print the result of the subtraction using the '-=' operator.
    printf("Using '*=': %d\n", result3);  // Print the result of the multiplication using the '*=' operator.
    printf("Using '/=': %d\n", result4);  // Print the result of the division using the '/=' operator.
    printf("Using '%%=': %d\n", result5);  // Print the result of the modulo operation using the '%=' operator.

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
