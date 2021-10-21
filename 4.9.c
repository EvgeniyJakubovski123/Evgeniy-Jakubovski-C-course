#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    printf("n=");
    scanf("%d",&n);
    if (n==1){
        printf("2");
    
    }
    else{
    int k=2;
    do{
        k=k*2;
    }while(k<=n);
    printf("%d",k);
        
    }

}
