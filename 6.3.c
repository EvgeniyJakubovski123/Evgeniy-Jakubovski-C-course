#include <stdio.h>

int main()
{
    unsigned j;
    unsigned long m;
    printf("m=");
    scanf("%ld",&m);
    printf("k=");
    scanf("%d",&j);
    m=~m|(1<<j);
    m=~m;
    printf("%ld",m);
    printf("%lx",m);
}
