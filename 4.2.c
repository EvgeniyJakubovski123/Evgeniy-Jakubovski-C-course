#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("n!=1");
    for (int i=2;i<=n;i++){
        printf("*%d",i);
    }
    printf("\nspad");
    printf("\nn!=%d",n);
    for (int i=n-1;i>=1;i--){
        printf("*%d",i);
    }
    
    
}
