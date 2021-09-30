#include <stdio.h>
#include <math.h>


int main(){
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    float z=(x+y)/2;
    float g=2/(1/x+1/y);
    printf("%e\n %e\n",z,g);
    printf("%.2f\n %.2f",z,g);
    
    
}



