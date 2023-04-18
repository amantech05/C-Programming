#include<stdio.h>
int main(){
    float degreecelsius;
    printf("Enter the value in celsius:-");
    scanf("%f", &degreecelsius);
    float degreefahreheit = (degreecelsius*9/5)+32;
    printf("Temperature in degree celsius:-%f",degreefahreheit);
    return 0;
}