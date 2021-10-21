#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int n;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n);
    int sum=0;
    for (int i=0;i<=n;i++){
        sum=sum+pow(x,i);
        
    }
    printf("%d",sum);

    
}
