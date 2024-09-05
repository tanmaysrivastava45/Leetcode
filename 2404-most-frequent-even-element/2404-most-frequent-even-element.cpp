class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int min=-1;
        int maxi=0;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                counter =count(nums.begin(), nums.end(), nums[i]);
                      if(counter>maxi || (counter == maxi && (min == -1 || nums[i] < min)) )
                       {
                         maxi=counter;
                           min=nums[i];
                      } 

            }
            
        }
        
        return min;
    }
};