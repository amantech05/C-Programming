#include<stdio.h>
int main(){
    float onekilometerinfeet=3280.84;
    int onekilometerinmeter=1000;
    float onekilometerininches= 39370.08;
    int onekilometerincentimeters=100000;
    float dbc;
    printf("Enter the distance between cities in (km):-");
    scanf("%f", &dbc);
    float distanceinfeetcity=dbc*onekilometerinfeet;
    printf("distance in feets of cities:-%f(feet)\n",distanceinfeetcity);

    float distanceinmetercity=dbc*onekilometerinmeter;
    printf("distance in meters of cities:-%f(m)\n",distanceinmetercity);

    float distanceininchescity=dbc*onekilometerininches;
    printf("distance in inches of cities:-%f(inches)\n", distanceininchescity);

    float disatanceincentimeterscity=dbc * onekilometerincentimeters;
    printf("distance in centimeters city:-%f(cm)\n", disatanceincentimeterscity);

    return 0;
}