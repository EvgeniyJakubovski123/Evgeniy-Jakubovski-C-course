
#include <stdio.h>

int main() {
    int n, new_n, x1, x2, x3, nfp;
    scanf("%d", &n);
    x1 = n % 10;
    new_n = n / 10;
    x2 = new_n % 10;
    new_n = n / 100;
    x3 = new_n % 10;
    printf("\nnumbers = %d, %d, %d", x1, x2, x3);
    int sumofnumbers=x1+x2+x3;
    printf("\nsumofnumbers=%d",sumofnumbers);
    if(x1 != x2 && x1 != x3 && x2 != x3){
        nfp = x1*100 + x2 *10 + x3;
        printf("\n number1 = %d", nfp);
        nfp = x1*100 + x3 *10 + x2;
        printf("\n number2 = %d", nfp);
        nfp = x2*100 + x1 *10 + x3;
        printf("\n number3 = %d", nfp);
        nfp = x2*100 + x3 *10 + x1;
        printf("\n number4 = %d", nfp);
        nfp = x3*100 + x2 *10 + x1;
        printf("\n number5 = %d", nfp);
        nfp = x3*100 + x1 *10 + x2;
        printf("\n number6 = %d", nfp);
    }
}