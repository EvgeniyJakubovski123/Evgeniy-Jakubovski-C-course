#include <stdio.h>
#include <math.h>
float ar(float x,float a){
    float answer;
    float eps=00000.1;
    float e=2.71828;
    if(x>eps){
        answer=(pow(e,a*x)-1)/a+a;
        answer=(-log(1-a*(x+a)))/a;
    }
    else if(fabs(x)<eps){
        answer=(x);
    }
    else {
        answer=(-log(1-a*(x+a)))/a;
    }
    return answer;
}
float br(float x,float a){
    float answer;
    float eps=00000.1;
    float e=2.71828;
    if(x>eps){
        answer=pow(e,a*x);
    }
    else if(fabs(x)<eps){
        answer=1;
    }
    else{
        answer=1/(-a*(a+x)+1);
    }
    return answer;
}

int main()
{
    float x,a;
    printf("x=");
    scanf("%f",&x);
    printf("a=");
    scanf("%f",&a);
    printf("res1=%f\n",ar(x,a));
    printf("res2=%f\n",br(x,a));
}
