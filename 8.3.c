#include <stdio.h>
#define N 20
#define  M 20

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

int main()
{
    unsigned n,m;
    double matr[N][N];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    vvod(matr,n,m);
    vyvod(matr,n,m);


    
}
