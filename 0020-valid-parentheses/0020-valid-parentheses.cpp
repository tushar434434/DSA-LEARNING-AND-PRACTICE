class Solution {
public:
    bool isValid(string s) {
        int n = s.length();

        while (true) {
            int oldSize = s.length();

            for (int i = 0; i < s.length() - 1; i++) {
                if ((s[i] == '(' && s[i+1] == ')') ||
                    (s[i] == '{' && s[i+1] == '}') ||
                    (s[i] == '[' && s[i+1] == ']')) {

                    s.erase(i, 2);
                    break;
                }
            }

            if (s.empty()) {
                return true;
            }

            if (s.length() == oldSize) {
                return false;
            }
        }
    }
};