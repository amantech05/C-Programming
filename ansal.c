#include<stdio.h>
int main(){
    int arr[6]= {34, 45, 56, 78,89,90};
    int sum=0;
    
    for(int i=0; i < 6;i++){
        sum=sum+arr[i];
    }
    printf("sum of elements in the array:- %d", sum);
    return 0;
}