class Solution {
public:
    bool ispal(string &s, int b, int e) {
        while (b < e) {
            if (s[b] != s[e]) {
                return false;
            }
            b++;
            e--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int b = 0;
        int e = s.size() - 1;

        while (b < e) {
            if (s[b] != s[e]) {
              
                return ispal(s, b + 1, e) || ispal(s, b, e - 1);
            }
            b++;
            e--;
        }

        return true; 
    }
};
