#include <stdio.h>

int main()
{
    int arrayelement[5];
    int sizeofarray;
    int iterator;
    int largest;

    printf("Enter the number of elements: ");
    scanf("%d", &sizeofarray);

    printf("Enter the elements:\n");

    for(iterator = 0; iterator < sizeofarray; iterator++)
    {
        scanf("%d", &arrayelement[iterator]);
    }

    largest = arrayelement[0];

    for(iterator = 1; iterator < sizeofarray; iterator++)
    {
        if(arrayelement[iterator] > largest)
        {
            largest = arrayelement[iterator];
        }
    }

    printf("Largest element is %d", largest);

    return 0;
}