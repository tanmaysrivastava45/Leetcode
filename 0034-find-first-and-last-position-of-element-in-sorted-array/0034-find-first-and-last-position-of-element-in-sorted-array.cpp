class Solution {
public:
    int firstoccur(vector<int>& nums,int n,int key)
    {
        int start=0;
        int end=n-1;
        int mid= start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(nums[mid]==key)
            {
                ans=mid;
                end=mid-1;
            }
            else if(key>nums[mid])
            {
                start=mid+1;
            }
            else // if(key<nums[mid])
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    
        int lastoccur(vector<int>& nums,int n,int key)
    {
        int start=0;
        int end=n-1;
        int mid= start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(nums[mid]==key)
            {
                ans=mid;
                start=mid+1;
            }
            else if(key>nums[mid])
            {
                start=mid+1;
            }
             else// if(key<nums[mid])
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int n=nums.size();
        result.push_back(firstoccur(nums,n,target));
        result.push_back(lastoccur(nums,n,target));
        return result;
    }
};