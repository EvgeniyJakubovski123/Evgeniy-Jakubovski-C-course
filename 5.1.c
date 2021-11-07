#include <stdio.h>

int main()
{
    float res=0;
    float z=1;
    float a;
    printf("a=");
    scanf("%f",&a);
    do{
        res+=(1/z);
        z+=1;
    }while(res<=a);
    printf("%f",res);
    printf("\n%f",(z-1));
    
}
