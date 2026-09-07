#include <stdio.h>

int main()
{
    int i,a;
    printf("enter a number\n");
    scanf("%d",&a);

    for (i = 20; i >= 1; i--)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }

    return 0;
}