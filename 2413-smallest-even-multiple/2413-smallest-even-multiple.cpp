class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans=0;
        if(n%2==0)
        {
            ans=n;
        }
        else{
            ans=n*2;
        }
        return ans;
    }
};