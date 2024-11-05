class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        int count=0;
        int count0=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                count++;
                i++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};