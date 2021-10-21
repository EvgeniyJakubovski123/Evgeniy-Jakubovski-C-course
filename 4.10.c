#include <stdio.h>

int main()
{
    float a = 2;
    while (1 + a != 1){
        a = a/2;
    }
    printf("a = %.12f", a);
    printf("\na + 1 = %.12f", a + 1);
}