#include <stdio.h>
#define N 100

int vvod(int matr[N][N],unsigned n,unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("a=[%d],[%d]=",i,j);
            scanf(" %d",&matr[i][j]);
        }
    }
}

void vyvod(int matr[N][N],unsigned n, unsigned m){
    for (unsigned i=0;i<n;i++){
        for (unsigned j=0;j<m;j++){
            printf("%d",matr[i][j]);
        }
        printf("\n");
    }
}
void Transp(int matr[N][N],unsigned n,unsigned m){
    
    for (unsigned i=0;i<n;i++){
        for (unsigned j=i;j<m;j++){
            int ptr=matr[i][j];
            matr[i][j]=matr[j][i];
            matr[j][i]=ptr;
        }
        
    }

    
    
}

int main()
{
    unsigned n,m;
    int matr[N][N];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    vvod(matr,n,m);
    vyvod(matr,n,m);
    printf("\n");
    Transp(matr,n,m);
    vyvod(matr,n,m);
    

    
    
}
