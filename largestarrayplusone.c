#include <stdio.h>

int main() {
    int a[100], n, i, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = 0;

    // Find largest
    for(i = 1; i < n; i++) {
        if(a[i] > a[max]) {
            max = i;
        }
    }

    // Increase largest by 1
    a[max] = a[max] + 1;

    printf("Array after increasing largest by 1:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}