#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int n) {
  int max = arr[0];  // Assume the first element of the array as the maximum
  for (int i = 1; i < n; i++) {  // Iterate through the array starting from the second element
    if (arr[i] > max) {  // If the current element is greater than the current maximum
      max = arr[i];  // Update the maximum value
    }
  }
  return max;  // Return the maximum value
}

int main() {
  int arr[] = {10, 67, 69, 79, 81, 88};  // Declare and initialize an integer array
  int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
  int max = findMax(arr, n);  // Call the findMax function to find the maximum number in the array
  printf("The maximum number in the array is: %d", max);  // Print the maximum number
  return 0;  // Return 0 to indicate successful execution of the program
}