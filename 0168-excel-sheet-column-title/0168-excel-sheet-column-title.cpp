class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0)
        {
            columnNumber--;
            int ch=columnNumber%26;
          
    
            ans.push_back(ch+'A');
              columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};