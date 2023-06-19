#include <stdio.h>


int main() {

    int arr[5] = {32, 54, 67, 43, 57};

    int sum = 0;

    

    for(int i = 0; i < 5; i++) {

        sum = sum + arr[i];
    }
    printf("Sum of elements in the array:- %d", sum);
    return 0;
}