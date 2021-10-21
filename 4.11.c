#include <stdio.h>
#include <math.h>



int main(){
    int i=0;
    float sum=0;
    int a;
    while (a!=0){
        printf("a[%d]=",i);
        scanf("%d",&a);
        i=i+1;
        sum=sum+a;
        
        
        
    }
    printf("%f",sum);
    float aref=sum/(i-1);
    printf("\naref=%f",aref);
    
    
    
}
