#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    int n;
    printf("x=");
    scanf("%f",&x);
    printf("n=");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        x=sin(x);
        
    }
    printf("%f",x);

    
}
