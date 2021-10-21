#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int factorial1=1;
    int factorial2=1;
    if (n%2==0){
        for(int i=2;i<=n;i=i+2){
            factorial1=factorial1*i;
            
        }
        printf("%d",factorial1);
    }
    else{
        for(int i=1;i<=n;i=i+2){
            factorial2=factorial2*i;
        }
        printf("%d",factorial2);
    }
    
}
