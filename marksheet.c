#include<stdio.h>
int main(){
    int mathematics, english ,drawing, computerscience,science,maximummarks=500;
    printf("Enter the marks obtained in mathematics :-");
    scanf("%d",&mathematics);
    printf("Enter the marks obtained in english:- ");
    scanf("%d",&english);
    printf("Enter the marks obtained in drawing :-");
    scanf("%d",&drawing);
    printf("Enter the marks obtained in computerscience:-");
    scanf("%d",&computerscience);
    printf("Enter the marks obtained in science:-");
    scanf("%d",&science);
    
    int aggregatemarks = mathematics +english +drawing + computerscience + science;
    float totalpercentage= aggregatemarks * 100 /maximummarks;

    printf("total marks obtained %d\n",aggregatemarks);
    printf("total percentage:-%f",totalpercentage);
    
    return 0;
}