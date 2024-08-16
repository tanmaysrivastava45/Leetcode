class Solution {
public:
    bool checkString(string s) {
        int count=0;
        for(char c: s)
        {
            if(c=='b')
            {
                count++;
            }
            if(c=='a'&& count>0)
            {
                return false;
            }
        }
        return true;
    }
};