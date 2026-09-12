#include <stdio.h>

int main() {
    int outer,inner,k,n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);


    for (int outer = 1; outer <= n; outer ++) {
        for (int inner = 1; inner <= outer; inner++) {
            printf("%d*%d=%d\t", outer,inner,outer*inner);
        }
        printf("\n");
    }

    return 0;
}