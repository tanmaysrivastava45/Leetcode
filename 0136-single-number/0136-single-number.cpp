class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        // int ans=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     ans=ans^nums[i];
        // }
        // return ans;
        
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i=i+2)
        {
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
            }
        }
        return nums[n-1];
    }
};