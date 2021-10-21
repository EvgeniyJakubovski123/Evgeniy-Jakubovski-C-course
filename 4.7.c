#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    int n;
    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%d", &n);
    if (fabs(x) < 1 && n > 0) {
        float sum_x = 1;
        float next_x = 1;
        int i;
        for (i = 1; i < n + 1; i = i + 1){
            next_x = next_x * (x/i);
            sum_x = sum_x + next_x;
        }
        printf("y = %f", sum_x);
    }
}