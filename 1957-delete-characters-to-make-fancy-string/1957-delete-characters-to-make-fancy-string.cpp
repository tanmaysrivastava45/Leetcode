class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count = 1;

        // Start with the first character
        result.push_back(s[0]);
        
        // Traverse the string from the second character
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count if the current character differs
            }

            // Add character only if it doesn't make three consecutive duplicates
            if (count < 3) {
                result.push_back(s[i]);
            }
        }
        
        return result;
    }
};
