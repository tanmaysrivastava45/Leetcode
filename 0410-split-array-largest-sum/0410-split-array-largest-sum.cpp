class Solution {
public:
    bool ispossible(vector<int>& nums,int n, int k,int mid)
    {
        int numCount =1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+nums[i]>mid)
            {
                numCount++;
                sum=nums[i];
                if(numCount>k||nums[i]>mid)
                {
                    return false;
                }
            }
            else
            {
                sum=sum+nums[i];
            }
            
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int e=sum;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(ispossible(nums,n,k,mid))
              {
                ans=mid;
                e=mid-1;
              }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
