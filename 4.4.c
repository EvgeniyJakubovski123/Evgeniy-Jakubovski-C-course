#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float x;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%f",&x);
    float sum=x;
    for (int i=2;i<=n;i++){
        sum=sum+i*pow(x,i);
    }
    printf("%f",sum);
}
