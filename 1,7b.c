#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    scanf("%f",&x);
    float y=(int)x;
    printf("%f\n",y);
    if(x>=0){
        
        float z=x-y;
        printf("%f\n",z);
        float r=x+(1-z);
        printf("%f",r);
        
    }
    else{
        
        float z=x-y;
        printf("%f\n",z);
        float r=x-(1-fabs(z));
        printf("%f",r);
        
        
    }
    
}

