#include <stdio.h>

int main() {
    
    int num, sum = 0;
    float average;

    for(int i = 1; i <= 10; i++) {
        
        printf("Enter the number: ");
        
        
          scanf("%d", &num);
        
        sum = sum + num;
    }

    printf("Sum of 10 numbers is: %d\n", sum);
    
    
        average = sum / 10.0;
    
    printf("Average of digits is: %f", average);
    
   
    return 0;
}