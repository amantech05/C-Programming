#include<stdio.h>
int main(){
    int x =2;
    int age;
    printf("Enter the age:-");
    scanf("%d",&age);
    if(age==20){
        printf("your age is equal to '20' years.=%d",x);
    }
    else if (age > 20 ){
        printf("your age is greater then '20' years.=%d",x);
    }
    else{
        printf("your age is smaller than '20'years.=");
    }
    return 0;

}