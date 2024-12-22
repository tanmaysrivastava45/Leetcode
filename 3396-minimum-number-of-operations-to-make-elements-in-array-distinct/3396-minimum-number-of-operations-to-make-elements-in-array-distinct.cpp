class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        bool same=true;
        int count=0;
        int j=1;
        while(same)
        {
            same=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                same=true;
                break;
                }
            }
            
        }
        if(same)
           {
            nums.erase(nums.begin(),nums.begin()+3);
            count++;
            n=nums.size();
           }
        }
        
        return count;
    }
};