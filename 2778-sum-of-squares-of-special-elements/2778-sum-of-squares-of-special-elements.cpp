class Solution {
public:
    long long int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long long int ans=0;
       
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans=ans+nums[i-1]*nums[i-1];
                
            }
            
        }
        return ans;
    }
};