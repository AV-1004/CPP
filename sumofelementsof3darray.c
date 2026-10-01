#include <stdio.h>

int main() {
    int a[2][3][3];
    int i, j, k, sum = 0;

    printf("Enter 18 elements:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                scanf("%d", &a[i][j][k]);
                sum = sum + a[i][j][k];
            }
        }
    }

    printf("Sum = %d", sum);

    return 0;
}