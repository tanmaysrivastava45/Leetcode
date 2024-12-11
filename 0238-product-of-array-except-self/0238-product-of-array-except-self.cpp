class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        long long int product=1;
        int count=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]!=0)
           {
            product=product*nums[i];
           }     else{
               count++;
           }     
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0 && count==0)
            {
            ans.push_back(product/nums[i]);
            }
            else if(count==1 && nums[i]==0)
            {
                ans.push_back(product);
        
            }
            else if(count>=1 && nums[i]!=0){
                ans.push_back(0);
                
            }
            else{
                ans.push_back(0);
            }
            
        }
        return ans;
    }
};