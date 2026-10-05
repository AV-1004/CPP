class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;

        for (int i = 0; i < s.length(); i++) {

            // Opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                top++;
                stack[top] = s[i];
            }

            // Closing brackets
            else {
                if (top == -1) {
                    return false;
                }

                if (s[i] == ')' && stack[top] != '(') {
                    return false;
                }

                if (s[i] == '}' && stack[top] != '{') {
                    return false;
                }

                if (s[i] == ']' && stack[top] != '[') {
                    return false;
                }

                top--;
            }
        }

        if (top == -1) {
            return true;
        }

        return false;
    }
};