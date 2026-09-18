#include <stdio.h>

int main()
{
    char word[100], temp;
    int i, j;

    printf("Enter a word: ");
    scanf("%s", word);

    for(i = 0; word[i] != '\0'; i++)
    {
        for(j = i + 1; word[j] != '\0'; j++)
        {
            if(word[i] > word[j])
            {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    printf("Alphabetical order: %s", word);

    return 0;
}