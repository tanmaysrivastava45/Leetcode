class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int s=nums.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            for(int j=i+n;j<s;j++)
            {
                
                ans.push_back(nums[j]);
                
                break;
                
            }  
        }
        return ans;
    }
};