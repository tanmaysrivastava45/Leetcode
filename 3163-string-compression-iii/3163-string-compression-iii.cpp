class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string comp = "";
        
        for (int i = 0; i < n; ) {
            char ch = word[i];
            int count = 0;
            while (i < n && word[i] == ch)
            {
                count++;
                i++;
            }

          while (count > 0) {
                int currentCount = min(count, 9);
                comp += to_string(currentCount);
                comp += ch;
                count -= currentCount;
            }
        }
        
        return comp;
    }
};
