#include <math.h>
#include <stdio.h>

int main()
{
    float a,b,c;
    float eps=00000.1;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if(fabs(a-b)<=eps&&b==fabs(c)){
        printf("many solutions");
    }
    else if(fabs(a-b)<=eps&&b!=fabs(c)){
        printf("no solutions");
    }
    else{
        float x1=(-b-c)/(a-b);
        float y1=1-x1;
        float x2=(b-c)/(a-b);
        float y2=-x2-1;
        printf("first solition=%f %f\n",x1,y1);
        printf("second solition=%f %f\n",x2,y2);
    }
}

