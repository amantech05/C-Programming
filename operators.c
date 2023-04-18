#include <stdio.h>
int main(){
    int x, y ;
    printf("Enter the value of x:-");
    scanf("%d",&x);
    printf("Enter the value of y:-");
    scanf("%d", &y);

    int result1=x+y, result2=x-=y,result3=x*=y,result4=x/=y,result5= x%=y;
    printf("Using '+=' %d \n",result1);
    printf("Using '-=' %d\n",result2);
    printf("Using the '*=' %d\n", result3);
    printf("Using the '/='%d\n",result4);
    printf("Using the '%='%d\n", result5);
    return 0;
}
