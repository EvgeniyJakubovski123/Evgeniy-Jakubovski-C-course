
#include <stdio.h>

int main()
{
    double m1, m2, r, G, F;
    m1 = 155;
    m2 = 144;
    r = 1000;
    G=6.673*1e-11;
    F=G*((m1*m2)/r*r);   
    printf( "%e",F);
}

