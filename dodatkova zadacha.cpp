#include <stdio.h>
#include <math.h>


int main(){
    double code[9];
    double c;
    for (int i=0;i<=8;i++){
        
        scanf("%lf",&c);
        code[i]=c;
    }
    for (int i=0;i<=8;i++){
        printf(" %1.lf",code[i]);
    }
    int sum=0;
    int k=10;
    while(k>=2){
        for (int i=0;i<=8;i++){
            sum+=code[i]*k;
            k=k-1;
        }
    }
    int d_1;
    printf("\n%d",sum);
    for(int d1=0;d1<=10;d1++){
        if ((d1+sum) % 11==0){
            d_1=d1;
            printf("\nd1=%d",d1);
        }
    }
    printf("control sum=");
    printf("%d",d_1);
    printf("\nCode in ISBN");
    for (int i=0;i<=8;i++){
        printf(" %1.lf",code[i]);
    }
    printf(" %d",d_1);
    
    
}
