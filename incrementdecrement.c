#include<stdio.h>  // This line includes the standard input/output library in the code.

int main(){
    int x=10, y =100;  // Declare and initialize integer variables x and y.
    float z= 10.5,w=100.5;  // Declare and initialize floating-point variables z and w.
    
    printf("++x=%d\n",++x);  // Print the value of ++x (pre-increment) and its new value.
    printf("x++=%d\n",x++);  // Print the value of x++ (post-increment) and its new value.
    
    printf("--y=%d\n",--y);  // Print the value of --y (pre-decrement) and its new value.
    printf("y-- = %d\n",y--);  // Print the value of y-- (post-decrement) and its new value.
    
    printf("++z=%f\n",++z);  // Print the value of ++z (pre-increment) and its new value.
    printf("z++=%f\n",z++);  // Print the value of z++ (post-increment) and its new value.
    
    printf("--w=%f\n",--w);  // Print the value of --w (pre-decrement) and its new value.
    printf("w-- = %f\n",w--);  // Print the value of w-- (post-decrement) and its new value.
    
    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
