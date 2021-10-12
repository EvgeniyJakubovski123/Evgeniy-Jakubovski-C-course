#include <stdio.h>
#include <math.h>

int zero(float x){
    float eps=000000.1;
    int answer=1;
    if (fabs(x)<eps){
        answer=0;
    }
    else if (x<eps){
        answer=-1;
        
    }
    return answer;
}

int main()
{
    float a,b,c;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if(zero(a)==0&&zero(b)!=0){
        
        printf("onesolution=%f",-c/b);
        
    }
    else if(zero(a)==0&&zero(b)==0){
        printf("bad example");
        
        }
    else{
        float d = b * b - 4 * a * c;
        printf("D = %f\n", d);
        int res_d = zero(d);
        if (res_d < 0){
           printf("No solutions"); 
        }
        else if (res_d == 0){
            printf("1 solution = %f\n", -1 * b / (2 * a));
        }
        else{
            printf("2 solutions: %f and %f", (-b - pow(d, 0.5)) / (2 * a), (-b + pow(d, 0.5)) / (2 * a));
        }
    }
    
    
}

