class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int min=0;
        for(int i=0;i<s.length();i++)
        {
            int j=min;
            for(;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    count++;
                    min=j+1;
                    break;
                }
               
            }
        }
        if(count==s.length())
        {
            return true;
        }
        else {
            return false;
        }
    }
};