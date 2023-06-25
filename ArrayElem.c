#include<stdio.h>

int main () {
    int arr[5] = {2, 3, 4, 5, 6};  // Declare and initialize an array 'arr' of size 5 with values 2, 3, 4, 5, 6
    
    printf("array of elements:");  // Print a message to indicate the start of the array elements
    
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);  // Print each element of the array 'arr' using a for loop
    }
    
    return 0;  // Return 0 to indicate successful execution of the program
}
