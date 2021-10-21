#include <stdio.h>
#include <math.h>

int main()
{
    int m;
    printf("m=");
    scanf("%d",&m);
    int n=4;
    int k=1;
    if(m<4){
        k=0;
    }
    else{
        while((4*n)<=m){
        k=k+1;
        n=n*4;
        
    }
    }
    printf("%d",k);

}
