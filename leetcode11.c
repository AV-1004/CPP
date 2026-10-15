
#include<stdio.h>
int main()
{
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int letter = 26 - (s[i] - 'a');
            sum += letter * (i + 1);
        }

        return sum;
    }
return 0;
};
