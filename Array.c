#include<stdio.h>

int main() {
    int arr[5];  // Declare an integer array 'arr' with a size of 5 to store user input
    
    // printf("%d", arr[0]);
    int sum = 0;  // Initialize a variable 'sum' to 0 to store the sum of array elements
    
    for(int iterations = 0; iterations <= 4; iterations++) {  // Iterate from index 0 to 4 (5 iterations) using a for loop
        printf("Enter the element: ");  // Prompt the user to enter an element
        scanf("%d", &arr[iterations]);  // Read and store the entered element in the array at index 'iterations'
        sum = sum + arr[iterations];  // Add the current element to the 'sum' variable
    }
    
    printf("sum = %d\n", sum);  // Print the value of 'sum' which represents the sum of the entered elements
    
    for(int i = 0; i <= 5; i++) {  // Iterate from index 0 to 5 (6 iterations) using a for loop
        printf("Elements = %d\n", arr[i]);  // Print each element of the array 'arr' using the index 'i'
    }
    
    return 0;  // Return 0 to indicate successful execution of the program
}
