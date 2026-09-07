#include <stdio.h>

int main()
{
    int S, d;

    printf("Enter initial signal strength: ");
    scanf("%d", &S);

    printf("Enter decrease per second: ");
    scanf("%d", &d);

    while (S > 0)
    {
        printf("%d\n", S);
        S = S - d;
    }

    return 0;
}