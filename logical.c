#include<stdio.h>  // This line includes the standard input/output library in the code.

int main(){
    int x=5, y=5, z=10, result;  // Declare and initialize integer variables x, y, z, and result.

    result=(x==y)&&(z>y);  // Assign the result of the logical expression (x==y)&&(z>y) to the variable result.
    printf("(x==y)&& (z>y) is %d \n",result);  // Print the value of the logical expression (x==y)&&(z>y).

    result= (x==y)&&(z<y);  // Assign the result of the logical expression (x==y)&&(z<y) to the variable result.
    printf("(x==y)&&(z<y) is %d\n",result);  // Print the value of the logical expression (x==y)&&(z<y).

    result=(x==y)|| (z<y);  // Assign the result of the logical expression (x==y)||(z<y) to the variable result.
    printf("(x==y)||(z<y) is %d \n",result);  // Print the value of the logical expression (x==y)||(z<y).

    result=(x!=y)|| (z<y);  // Assign the result of the logical expression (x!=y)||(z<y) to the variable result.
    printf("(x!=y)||(z<y) is %d \n",result);  // Print the value of the logical expression (x!=y)||(z<y).

    result=!(z!=y);  // Assign the result of the logical expression !(z!=y) to the variable result.
    printf("!(z!=y) is %d \n",result);  // Print the value of the logical expression !(z!=y).

    result=(x==y);  // Assign the result of the logical expression (x==y) to the variable result.
    printf("(x==y) is %d \n",result);  // Print the value of the logical expression (x==y).

    return 0;  // This line specifies that the main() function should return an integer value of 0 to indicate successful execution of the program.
}
