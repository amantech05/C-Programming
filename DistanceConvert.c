#include<stdio.h>

int main() {
    float onekilometerinfeet = 3280.84;  // Conversion factor: 1 kilometer = 3280.84 feet
    int onekilometerinmeter = 1000;  // Conversion factor: 1 kilometer = 1000 meters
    float onekilometerininches = 39370.08;  // Conversion factor: 1 kilometer = 39370.08 inches
    int onekilometerincentimeters = 100000;  // Conversion factor: 1 kilometer = 100000 centimeters
    
    float dbc;  // Declare a variable 'dbc' to store the distance between cities in kilometers
    
    printf("Enter the distance between cities in (km): ");  // Prompt the user to enter the distance between cities
    scanf("%f", &dbc);  // Read and store the entered distance in the variable 'dbc'
    
    float distanceinfeetcity = dbc * onekilometerinfeet;  // Calculate the distance in feet by multiplying 'dbc' with the conversion factor for feet
    printf("Distance in feet between cities: %f (feet)\n", distanceinfeetcity);  // Print the distance in feet
    
    float distanceinmetercity = dbc * onekilometerinmeter;  // Calculate the distance in meters by multiplying 'dbc' with the conversion factor for meters
    printf("Distance in meters between cities: %f (m)\n", distanceinmetercity);  // Print the distance in meters
    
    float distanceininchescity = dbc * onekilometerininches;  // Calculate the distance in inches by multiplying 'dbc' with the conversion factor for inches
    printf("Distance in inches between cities: %f (inches)\n", distanceininchescity);  // Print the distance in inches
    
    float disatanceincentimeterscity = dbc * onekilometerincentimeters;  // Calculate the distance in centimeters by multiplying 'dbc' with the conversion factor for centimeters
    printf("Distance in centimeters between cities: %f (cm)\n", disatanceincentimeterscity);  // Print the distance in centimeters
    
    return 0;  // Return 0 to indicate successful execution of the program
}
