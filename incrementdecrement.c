#include<stdio.h>
int main(){
    int x=10, y =100;
    float z= 10.5,w=100.5;
    printf("++x=%d\n",++x);
    printf("x++=%d\n",x++);

    printf("--y=%d\n",--y);
    printf("y-- = %d\n",y--);
    
    printf("++z=%f\n",++z);
    printf("z++=%f\n",z++);
    
    printf("--w=%f\n",--w);
    printf("w-- = %f\n",w--);
    return 0;
}