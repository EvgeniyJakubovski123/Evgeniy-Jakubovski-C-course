#include <stdio.h>
#include <math.h>


int main()
{
    int x,y,n;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("n=");
    scanf("%d",&n);
    int sum = 1;
    for (int i=1;i<=n;i++){
        sum=sum+pow(x,2*i)*pow(y,i);
    }
    printf("%d",sum);
    
}
