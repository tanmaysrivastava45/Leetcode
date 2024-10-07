class Solution {
public:
    int minLength(string s) {
         int i = 0;  // This will act like the stack's top pointer
    
    for (char ch : s) {
        
        if (i > 0 && ((s[i - 1] == 'A' && ch == 'B') || (s[i - 1] == 'C' && ch == 'D'))) {
            --i;  
        } else {
            s[i++] = ch; 
        }
    }
    
    
    return i;
    }
};