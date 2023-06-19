#include<stdio.h>
int main (){
    int arr[6];
    int sum=0;
    for(int i=0;i<=5;i++){
        printf("enter the element:-");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("sum=%d\n",sum);
    for(int i=0;i<=5;i++){
        printf("elements=%d\n",arr[i]);
    }
    return 0;
}
