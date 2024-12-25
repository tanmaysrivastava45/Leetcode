class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=(sum+shifts[i]);
        }
        long long int lastsum=0;
        for(int i=0;i<n;i++)
        {
            if(i>0)
        {
            lastsum = (lastsum + shifts[i-1])%26;
        }
            int res=(sum+(s[i]-'a')-lastsum)%26;
            if(res<0)
            {
                res = res + 26;
            }
            s[i]=(res) +'a';
        }
        return s;
    }
};