class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        int min=nums[0];
        int ans=0;
        
        for(int i =0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            if(nums[i]<min)
            {
                min= nums[i];
            }
        }
        for(int i=1;i<=max;i++)
        {
            if(max%i==0 && min%i==0)
            {
               ans=i; 
            }
        }
        return ans;
    }
};