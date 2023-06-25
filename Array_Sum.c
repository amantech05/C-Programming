#include<stdio.h>

int main() {
    int arr[6];  // Declare an integer array 'arr' with a size of 6 to store user input
    int sum = 0;  // Initialize a variable 'sum' to 0 to store the sum of array elements
    
    for(int i = 0; i <= 5; i++) {  // Iterate from index 0 to 5 (6 iterations) using a for loop
        printf("enter the element: ");  // Prompt the user to enter an element
        scanf("%d", &arr[i]);  // Read and store the entered element in the array at index 'i'
        sum = sum + arr[i];  // Add the current element to the 'sum' variable
    }
    
    printf("sum = %d\n", sum);  // Print the value of 'sum' which represents the sum of the entered elements
    
    for(int i = 0; i <= 5; i++) {  // Iterate from index 0 to 5 (6 iterations) using a for loop
        printf("element = %d\n", arr[i]);  // Print each element of the array 'arr' using the index 'i'
    }
    
    return 0;  // Return 0 to indicate successful execution of the program
}

