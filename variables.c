#include<stdio.h>
int main (){
    int x;
    float y;
    long z;
    double a ;
    char b;
     printf("Enter integer value :-");
     scanf("%d", &x);
     printf("'%d',it is a integer value \n", x);
     printf("Enter float value:-");
     scanf("%f",&y);
     printf("'%f',it is a float value\n", y);
     printf("Enter long value:-");
     scanf("'%ld',&z");
     printf("'%ld', it is a long value \n", z);
     printf("Enter double value:-");
     scanf("%lf", &a);
     printf("'%lf', it is a double value \n",a);
     printf("Enter character value:-");
     scanf("%c", &b);
     printf("'%c', it is a character value.", b);
     return 0;

}