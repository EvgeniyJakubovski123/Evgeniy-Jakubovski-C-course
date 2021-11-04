#include <stdio.h>
#define K 3

void ShowArray(int array[K][K]){
    for (int i=0;i<K;i++){
        
        for (int j=0;j<K;j++){
            
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    
}
void Zamena(int array[K][K],int M,int N){
    for (int i=0;i<K;i++){
        
        for (int j=0;j<K;j++){
            
            if (array[i][j]==M){
                array[i][j]=N;
            }
            
        }
    }
}
int main(){
    int array[K][K]={{1,2,3},{4,5,6},{7,8,9}},M,N;
    printf("M=");
    scanf("%d",&M);
    printf("N=");
    scanf("%d",&N);
    ShowArray(array);
    Zamena (array,M,N);
    printf("\n");
    ShowArray(array);
}

    
    

