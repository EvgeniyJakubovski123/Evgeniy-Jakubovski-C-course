#include <stdio.h>

#define N 100
#define M 100

int vvod(int matr[N][N],unsigned n,unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("a=[%d],[%d]=",i,j);
            scanf(" %d",&matr[i][j]);
        }
    }
}
unsigned max_col(int row[],unsigned n){
    int max_el=row[0];
    unsigned k=0;
    for(unsigned i=1;i<n;i++){
        if(max_el<row[i]){
            max_el=row[i];
            k=i;
        }
    }
    return k;
}
void vyvod(int matr[N][N],unsigned n, unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("%d",matr[i][j]);
        }
        printf("\n");
    }
}

int Func(int matr[][M],unsigned n,unsigned m){
    for(unsigned i=0;i<n;i++){
        unsigned k=max_col(matr[i],m);
        printf("\nmax=%u",k);
        if(k==i ) continue;
        for(unsigned j=0;j<n;j++){
            int tmp=matr[j][k];
            matr[j][k]=matr[j][i];
            matr[j][i]=tmp;
        }
        vyvod(matr,n,m);
    }
}

int main()
{
    unsigned n,m;
    int matr[N][M];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    vvod(matr,n,m);
    printf("\n");
    Func(matr,n,m);
    printf("\n");
    vyvod(matr,n,m);
}
