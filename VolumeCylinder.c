#include<stdio.h>
#include<math.h>
int main (){
    float PI=3.14159;
    float radius,height,volume;
    printf("Enter the value of radius:-");
    scanf("%f", &radius);
    printf("Enter the value of height:-");
    scanf("%f",&height);
    volume=PI*pow(radius,2)*height;
    printf("volume of cylinder is :-%f", volume);
    return 0; 
}