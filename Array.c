#include<stdio.h>
int main(){
    int arr[5];
    
    // printf("%d", arr[0]);
    int sum = 0;
    
    for(int interations = 0; interations <= 4; interations++) {
        printf("Enter the element:- ");
        scanf("%d", &arr[interations]);
        sum = sum + arr[interations];
    }
    printf("sum= %d\n", sum);
    
    for(int i = 0; i<= 5; i++) {
        printf("Elements = %d\n", arr[i]);
    }
    return 0;
}
// }const/4 v0 p0,0x1