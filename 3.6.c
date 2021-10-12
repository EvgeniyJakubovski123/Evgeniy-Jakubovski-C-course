#include <stdio.h>
#include <math.h>


int main()
{
    float x,y, z, rx, ry, rz;
    printf("Enter {x, y, z}\n");
    scanf("%f %f %f", &x, &y, &z);
    rx = x;
    ry = y;
    rz = z;
    x = fabs(x);
    y = fabs(y);
    z = fabs(z);
    printf("The first = ");
    if(x>=y && x >= z){
        printf("%f", rx);
    }
    else if(y >= z && y >= x){
        printf("%f", ry);
    }
    else{
        printf("%f", rz);
    }
    printf("\nThe last = ");
    if(x<=y && x <= z){
        printf("%f", rx);
    }
    else if(y <= z && y <= x){
        printf("%f", ry);
    }
    else{
        printf("%f", rz);
    }
}