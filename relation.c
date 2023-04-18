#include<stdio.h>
int main(){
    int x=4,y=4,z=8;

    printf("%d == %d is %d\n", x,y,x==y);
    printf("%d==%d is %d \n", x,z,x==z);
    printf("%d >%d is %d \n", x,y, x>y);
    printf("%d>%d is %d \n", x,z, x>z);
    printf("%d <%d is %d \n",x ,y , x<y);
    printf("%d <%d is %d\n",x,z,x<z);
    printf("%d!= %d is %d \n",x, y, x!=y);
    printf("%d!= %d is %d \n", x,z,x!=z);
    printf("%d >= %d is %d\n",x,y , x>=y);
    printf("%d >=%d is %d \n",x,z,x>=z);
    printf("%d<=%d is %d \n",x,y,x<=y);
    printf("%d<= %d is %d \n",x,z,x<=z);
    
    return 0;

}