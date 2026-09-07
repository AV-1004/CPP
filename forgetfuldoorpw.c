#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    char correctPassword[] = "NOVA42";
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0)
        {
            printf("Access granted\n");
            break;
        }
        else
        {
            attempts--;

            if (attempts == 0)
            {
                printf("System locked\n");
            }
            else
            {
                printf("Remaining attempts: %d\n", attempts);
            }
        }
    }

    return 0;
}
