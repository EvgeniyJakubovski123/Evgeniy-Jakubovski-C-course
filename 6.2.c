#include <stdio.h>

int main()
{
    unsigned n;
    unsigned k;
    printf("n,k:");
    scanf("%u",&n);
    scanf("%u",&k);
    n=n | (1<<k);
    printf("M=%u",n);
}
