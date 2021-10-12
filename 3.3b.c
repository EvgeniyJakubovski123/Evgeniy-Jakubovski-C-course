#include <math.h>
#include <stdio.h>


int main(){
    int x1,x2,x3;
    int proisv;
    scanf("%d %d %d",&x1,&x2,&x3);
    if(fabs(x1)<pow(2,21)&&fabs(x2)<pow(2,21)&&fabs(x3)<pow(2,21)){
        proisv=x1*x2*x3;
        printf("%d",proisv);
    }
    
    else{
        printf("Error");
    }
        

    
    
}
