#include <stdio.h>

int main() {

    char alpha[10];
    int i;

    for( i = 0; i < 7; i++) {
        printf("Enter  characters:- ");
        scanf("%c", &alpha[i]);
    }
    printf("%s", alpha);
    return 0;
}