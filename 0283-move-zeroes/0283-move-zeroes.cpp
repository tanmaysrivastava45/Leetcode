class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
       int j=0;
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
                
            }
        }
    }
};
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int left = 0;

//         for (int right = 0; right < nums.size(); right++) {
//             if (nums[right] != 0) {
//                 swap(nums[right], nums[left]);
//                 left++;
//             }
//         }        
//     }
// };