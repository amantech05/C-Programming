#include<stdio.h>
int main(){
    int mathematics, english ,physics, computerscience, chemistry,maximummarks=500;
    printf("Enter the marks obtained in mathematics :-");
    scanf("%d",&mathematics);
    printf("Enter the marks obtained in english:- ");
    scanf("%d",&english);
    printf("Enter the marks obtained in physics :-");
    scanf("%d",&physics);
    printf("Enter the marks obtained in computerscience:-");
    scanf("%d",&computerscience);
    printf("Enter the marks obtained in chemistry:-");
    scanf("%d",&chemistry);
    
    int aggregatemarks = mathematics +english +physics + computerscience + chemistry;
    float totalpercentage= aggregatemarks * 100 /maximummarks;

    printf("total marks obtained %d\n",aggregatemarks);
    printf("total percentage:-%f",totalpercentage);
    
    return 0;
}