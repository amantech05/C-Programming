    #include<stdio.h>  // This line includes the standard input/output library in the code.

int main (){
    int x;  // Declare an integer variable x.
    float y;  // Declare a float variable y.
    double z;  // Declare a double variable z.
    char A;  // Declare a character variable A.
    
    printf("size of int = %lu bytes \n", sizeof(x));  // Print the size of int in bytes.
    printf("size of float = %lu bytes\n", sizeof(y));  // Print the size of float in bytes.
    printf("size of double = %lu bytes \n", sizeof(z));  // Print the size of double in bytes.
    printf("size of char = %lu bytes\n", sizeof(A));  // Print the size of char in bytes.
    
    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
