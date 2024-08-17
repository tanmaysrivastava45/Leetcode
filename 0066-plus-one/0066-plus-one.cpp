class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int n=digits.size();
        int i=n-1;
        int carry=1;
        while(i>=0||carry==1)
        {
            if(i>=0)
            {
                carry=carry+digits[i];
                i--;
            }
            result.push_back(carry%10);
            carry=carry/10;
            
        }
        reverse(result.begin(),result.end());
        return result;
    
    }
};