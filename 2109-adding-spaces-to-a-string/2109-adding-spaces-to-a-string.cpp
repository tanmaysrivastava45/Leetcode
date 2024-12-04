class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        vector<char>ans;
        int n=spaces.size();
        char ch=' ';
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(j<n && spaces[j]==i )
            {
                  ans.push_back(ch);
                ans.push_back(s[i]);
              
                j++;
            }
            else 
            {
                ans.push_back(s[i]);
            }
        }
        string str(ans.begin(), ans.end());
        return str;
            
    }
};