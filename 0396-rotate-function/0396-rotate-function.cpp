class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans;
         int max=0;
         int fo=0;
         int sum=0;
           for(int i=0;i<n;i++)
             {
              sum= sum+ nums[i];
               fo=fo+i*nums[i];
                
             }
        ans.push_back(fo);
            for(int i=n-1;i>0;i--)
            {
                int f1=fo+sum-(n)*nums[i];
                ans.push_back(f1);
                fo=f1;
                
            }
        sort(ans.begin(),ans.end());
         
        return ans[n-1];
    }
};