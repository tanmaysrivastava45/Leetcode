class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int newarray=1;  //set the newarray length as 1;
       
        for(int i=1;i<n;i++) // we are assuming that first element is already sorted 
        {
            if(nums[i]!=nums[i-1]) /// we are taking i-1 not i+1 because it produces buffer flow error 
            {
                nums[newarray]=nums[i];
                newarray++;      // increasing the length of array as move ahead in iteration 
            }
        }
            
        
        return newarray;
    }
};
