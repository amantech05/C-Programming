#include<stdio.h>
int main (){
    int x,y;
    printf("Enter the value of x:-");
    scanf("%d", &x);
    printf("Enter the value of y:-");
    scanf("%d", &y);

    printf("Without swapping numbers;- 'x=%d' and 'y=%d'\n",x,y);
    x = x+y;
    y= x-y;
    x= x-y;
    printf("After swapping the numbers:-'x=%d' and ' y=%d'",x,y);
    return 0;
}