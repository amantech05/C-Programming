#include<stdio.h>
int main(){
    int x=5,y=5,z=10,result;

    result=(x==y)&&(z>y);
    printf("(x==y)&& (z>y)is %d \n",result);

    result= (x==y)&&(z<y);
    printf("(x==y)&&(z<y)is %d\n",result);

    result=(x==y)|| (z<y);
    printf("(x==y)||(z<y)is %d \n",result);

    result=(x!=y)|| (z<y);
    printf("(x!=y)||(z<y)is %d \n",result);

    result=!(z!=y);
    printf("!(x!=y) is %d \n",result);

    result=(x==y);
    printf("(x==y)is %d \n",result);

    return 0;
}