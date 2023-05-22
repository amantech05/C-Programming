#include<stdio.h>
int main(){
    int x =2;
    int num;
    printf("Enter the num:-");
    scanf("%d",&num);
    if(num==10){
        printf("the number is equal to 10.=%d",x);
    }
    else if (num > 10 ){
        printf("the number is greater then 10.=%d",x);
    }
    else {
        printf("the number is smaller then 10.=");
    }
    return 0;

}