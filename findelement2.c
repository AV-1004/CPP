#include <stdio.h>

int main()
{
    int arrayelement[5];
    int sizeofarray;
    int found = -1;
    int searchkey;
    int iterator;

    printf("Enter the number of elements: ");
    scanf("%d", &sizeofarray);

    printf("Enter the elements:\n");

    for (iterator = 0; iterator < sizeofarray; iterator++)
    {
        scanf("%d", &arrayelement[iterator]);
    }

    printf("Enter the search key: ");
    scanf("%d", &searchkey);

    for (iterator = 0; iterator < sizeofarray; iterator++)
    {
        if (arrayelement[iterator] == searchkey)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element present at %d position\n", iterator + 1);
    }
    else
    {
        printf("Element not present");
    }

    return 0;
}