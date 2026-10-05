#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char stack[100];
    int top = -1;
    int i;

    printf("Enter brackets: ");
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }

     
        else {
           
            if (top == -1) {
                printf("Invalid");
                return 0;
            }

            // Check matching bracket
            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == '}' && stack[top] != '{') ||
                (s[i] == ']' && stack[top] != '[')) {
                
                printf("Invalid");
                return 0;
            }

          
            top--;
        }
    }

    // Stack should be empty
    if (top == -1)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}