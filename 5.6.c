#include <stdio.h>

int main()
{
    int n;
    float b;
    printf("n=");
    scanf("%d",&n);
    printf("b=");
    scanf("%f",&b);
    float a=b;
    for(int i=0;i<n;i++){
        a=b+1/a;

    }
    printf("res=%f",a);
}
