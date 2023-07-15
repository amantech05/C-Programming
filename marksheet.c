#include<stdio.h>  // This line includes the standard input/output library in the code.

int main(){
    int mathematics, english ,drawing, computerscience, science, maximummarks=500;  // Declare integer variables for marks and set the maximum marks to 500.

    printf("Enter the marks obtained in mathematics: ");  // Prompt the user to enter the marks obtained in mathematics.
    scanf("%d", &mathematics);  // Read and store the input marks in the variable mathematics.

    printf("Enter the marks obtained in English: ");  // Prompt the user to enter the marks obtained in English.
    scanf("%d", &english);  // Read and store the input marks in the variable english.

    printf("Enter the marks obtained in drawing: ");  // Prompt the user to enter the marks obtained in drawing.
    scanf("%d", &drawing);  // Read and store the input marks in the variable drawing.

    printf("Enter the marks obtained in computer science: ");  // Prompt the user to enter the marks obtained in computer science.
    scanf("%d", &computerscience);  // Read and store the input marks in the variable computerscience.

    printf("Enter the marks obtained in science: ");  // Prompt the user to enter the marks obtained in science.
    scanf("%d", &science);  // Read and store the input marks in the variable science.

    int aggregatemarks = mathematics + english + drawing + computerscience + science;  // Calculate the total aggregate marks.

    float totalpercentage = aggregatemarks * 100 / maximummarks;  // Calculate the total percentage.

    printf("Total marks obtained: %d\n", aggregatemarks);  // Print the total marks obtained.
    printf("Total percentage: %f\n", totalpercentage);  // Print the total percentage.

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
