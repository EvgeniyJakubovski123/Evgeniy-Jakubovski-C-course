#include <stdio.h>

int main()
{
    float p,i,k,n,p1;
    printf("n=");
    scanf("%f",&n);
    p=1;
    k=1;
    for(i=1;i<=n;i++){
        k=k*i;
        p1=p*(1+1/k);
        p=p1;
        
    }
    printf("res=%f",p1);
}
