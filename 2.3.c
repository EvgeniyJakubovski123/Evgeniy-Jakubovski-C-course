#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float p=a+b+c;
    float s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    printf("Square=%f",s);
}

