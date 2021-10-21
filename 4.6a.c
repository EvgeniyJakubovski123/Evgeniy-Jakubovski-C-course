#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    float res=0;
    for (int i=n;i>=1;i--){
        res=sqrt(2+res);
        
    }
    printf("%f",res);
}
