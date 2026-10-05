class Solution {
public:
    bool canChange(string start, string target) {
        int i = 0, j = 0;
        int n = start.length();

        while (i < n || j < n) {

            // Skip blanks
            while (i < n && start[i] == '_')
                i++;

            while (j < n && target[j] == '_')
                j++;

            // Both reached the end
            if (i == n && j == n)
                return true;

            // Only one reached the end
            if (i == n || j == n)
                return false;

            // Pieces must be the same
            if (start[i] != target[j])
                return false;

            // L can ONLY move left
            if (start[i] == 'L' && i < j)
                return false;

            // R can ONLY move right
            if (start[i] == 'R' && i > j)
                return false;

            i++;
            j++;
        }

        return true;
    }
};