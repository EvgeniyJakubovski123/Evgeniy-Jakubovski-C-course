#include <math.h>
#include <stdio.h>

int isparn(unsigned int x){
    if(x%2!=0){
        return 1;
        
    }
    else{
        return 0;
    }
}
int main()
{
    unsigned int n;
    printf("n=");
    scanf("%d",&n);
    int res=isparn(n);
    printf("%d",res);
    
}
