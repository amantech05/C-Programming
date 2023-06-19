#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    printf("original array elements:");
    for (int i=0;i<5;i++){
        printf("%d", arr[i]);
    }
    printf("array element after multiplying with 2:\n");
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*2;
        printf("%d", arr[i]);
    }
    return 0;
}