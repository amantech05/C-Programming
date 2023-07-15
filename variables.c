#include<stdio.h>  // This line includes the standard input/output library in the code.

int main (){
    int x;  // Declare an integer variable x.
    float y;  // Declare a float variable y.
    long z;  // Declare a long variable z.
    double a;  // Declare a double variable a.
    char b;  // Declare a character variable b.

    printf("Enter integer value: ");  // Prompt the user to enter an integer value.
    scanf("%d", &x);  // Read and store the input value in the variable x.
    printf("'%d', it is an integer value \n", x);  // Print the entered integer value.

    printf("Enter float value: ");  // Prompt the user to enter a float value.
    scanf("%f", &y);  // Read and store the input value in the variable y.
    printf("'%f', it is a float value\n", y);  // Print the entered float value.

    printf("Enter long value: ");  // Prompt the user to enter a long value.
    scanf("%ld", &z);  // Read and store the input value in the variable z.
    printf("'%ld', it is a long value \n", z);  // Print the entered long value.

    printf("Enter double value: ");  // Prompt the user to enter a double value.
    scanf("%lf", &a);  // Read and store the input value in the variable a.
    printf("'%lf', it is a double value \n", a);  // Print the entered double value.

    printf("Enter character value: ");  // Prompt the user to enter a character value.
    scanf(" %c", &b);  // Read and store the input value in the variable b (note the space before %c to consume the newline character).
    printf("'%c', it is a character value.", b);  // Print the entered character value.

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
