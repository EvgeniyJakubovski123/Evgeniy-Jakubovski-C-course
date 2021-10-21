#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    float res=0;
    for (int i=3*n;i>0;i=i-3){
        res=sqrt(i+res);
    }
    printf("%f",res);
    
}