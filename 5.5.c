#include <stdio.h>

int main()
{
    int x0=-99,x1=-99,x2=-99,x;
    int N=0;
    int k=2;
    while(x2<N){
        x=x0+x2+100;
        k++;
        x0=x1;
        x1=x2;
        x2=x;
    }
    printf("x(%d)=%d",k,x2);
}
