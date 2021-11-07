#include <stdio.h>

int main()
{
    int f0=0,f1=1,f;
    int N=10;
    int k=1;
    int sum=0;
    while(f1<N){
        f=f0+f1;
        
        k++;
        f0=f1;
        f1=f;
        sum+=f0;
    }
    printf("The first Fibonacci number greater then %d is F(%d)=%d",N,k,f1);
    printf("\n F(%d)=%d<N",(k-1),f0);
    printf("\nsum=%d",sum);

}
