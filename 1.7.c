#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("x=");
    scanf("%f",&x);
    float y=ceil(x);
    printf("%f\n",y);
    float z=floor(x);
    printf("%f\n",z);
    float o=fmod(x,1);
    printf("%f",o);
    
}

