class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=1;
        int n=nums.size();
        int right=n-1;
     
        while(left<right)
        {
            int mid=left +(right-left)/2;
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]<=mid)
                {
                    count++;
                }
            }
            if(count>mid)
            {
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};