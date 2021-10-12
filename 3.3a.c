#include <stdio.h>
#include <math.h>


int main(){
    int x1,x2,x3;
    int proisv;
    scanf("%d %d %d",&x1,&x2,&x3);
    if(fabs(x1)<pow(2,10)&&fabs(x2)<pow(2,10)&&fabs(x3)<pow(2,10)){
        proisv=x1*x2*x3;
        printf("%d",proisv);
    }
    
    else{
        printf("Error");
    }
        

    
    
}