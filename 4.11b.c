#include <stdio.h>
#include <math.h>



int main(){
    float i=0;
    float proisv=1;
    int a;
    while (a!=0){
        printf("a[%0.f]=",i);
        scanf("%d",&a);
        i=i+1;
        if(a!=0){
            proisv*=a;
        }
        
        
        
    }
    printf("%f",proisv);
    
    float geom=pow(proisv, 1/(i-1));
    printf("\ngeom=%f",geom);
    
    
    
}
