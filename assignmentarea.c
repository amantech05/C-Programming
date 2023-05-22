#include <stdio.h>
#include <math.h>
int main(){
   const float PI = 3.14159;
    float radius;
    printf("Enter the value of radius:-");
    scanf("%f", &radius);
    float areaofcircle = PI* pow(radius, 2);
    printf("%f",areaofcircle);
    return 0;
}