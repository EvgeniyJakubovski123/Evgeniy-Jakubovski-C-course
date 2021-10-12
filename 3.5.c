#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter {x, y}\n");
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("x>y");
    }
    else if(y==x){
        printf("x = y");
    }
    else{
        printf("x < y");
    }
}