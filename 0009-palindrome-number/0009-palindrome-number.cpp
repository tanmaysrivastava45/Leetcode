class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        string num= to_string(x);
        string reversenum=num;
        reverse(reversenum.begin(),reversenum.end());
        return num==reversenum;
    }
};