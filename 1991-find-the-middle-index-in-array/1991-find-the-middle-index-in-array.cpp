class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int totalsum=0;
        for(int num: nums)
        {
            totalsum=totalsum+num;
        }
        
        for(int i=0;i<n;i++)
        {
           if(leftsum==totalsum-leftsum-nums[i])
           {return i;}
            leftsum=leftsum+nums[i];
        }
        return -1;
    }
};