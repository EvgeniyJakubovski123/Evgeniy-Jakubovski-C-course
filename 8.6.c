#include <stdio.h>
#define N 100
#define M 100




int vvod(double matr[N][M],unsigned n,unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("a=[%d],[%d]=",i,j);
            scanf(" %lf",&matr[i][j]);
        }
    }
}
void vyvod(double matr[N][N],unsigned n, unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("%lf",matr[i][j]);
        }
        printf("\n");
    }
}
double El(double matr[N][M],unsigned n,unsigned m,int k){
    double res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i-j==k) res+=matr[i][j];
        }
    }
    return res;
}


int main()
{
    unsigned n,m;
    double matr[N][N];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    int k;
    printf("k=");
    scanf("%d",&k);
    vvod(matr,n,m);
    vyvod(matr,n,m);
    printf("\n");
    double result=El(matr,n,m,k);
    printf("%lf",result);
    
    
}
