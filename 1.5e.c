
#include <stdio.h>

int main()
{

    float x, x1, x2, x3, x4; 
    x = 2;
    x1 = x * x; 
    x2 = x1*x1; 
    x3 = x2*x2; 
    x4 = x3*x3; 
    x3 = x4*x4; 
    x2 = x3*x3; 
    
    printf("result=%f", x2);
}

