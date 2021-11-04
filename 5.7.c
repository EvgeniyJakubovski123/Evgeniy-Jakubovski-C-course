#include <stdio.h>
#include <math.h>

int main()
{
    float a1=0;
    float a2=1;
    float b1=1;
    float b2=0;
    float b3,a3;
    float n;
    printf("n=");
    scanf("%f",&n);
    if (n>2){
        float sum=6;
        for (int k=3;k<=n;k++){
            b3=a2+b2;
            a3=a2/k+a1*b3;
            a1=a2;
            a2=a3;
            b2=b3;
            sum+=pow(2,k)/(a3+b3);
        }
        printf("%f",sum);
       
        
    }
    else if(n==1){
        printf("sum=2");
    }
    else if(n==2){
        printf("sum=6");
    }
        
    
}

