#include<stdio.h>
int main(){
    int num1=0,num2=1,nextdigit=0;
    int n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:");
    do{
        printf("%d",num1);
        nextdigit=num1 + num2;
        num1=num2;
        num2=nextdigit;
        n--;
    }while (n>0);
    return 0;
}