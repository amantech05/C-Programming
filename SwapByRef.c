#include <stdio.h>
void swaping(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {

    int n1 = 23;
    int n2 = 43;
    swaping(&n1, &n2);
    printf("After swap Number 1 = %d, Number 2 = %d\n", n1, n2);
    return 0;
}