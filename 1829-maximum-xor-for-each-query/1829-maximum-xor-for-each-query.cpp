class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        int ans=(1<<maximumBit) -1;
        int res=0;
        for(int num: nums)
        {
            res=res^num;
        }
        vector<int>utar;
        for(int i=n-1;i>=0;i--)
         {
              utar.push_back(res^ans);
              res = res^nums[i];
         }
            
        return utar;
    }
};