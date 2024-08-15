// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
//        int j=0;
//         for(int i=0;i<n;i++)
//         {
            
//             if(nums[i]!=0)
//             {
//                 swap(nums[j],nums[i]);
//                 j++;
                
//             }
//         }
//     }
// };
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr(nums.size());
        int index=0;
        for(int i : nums)
        {
            if(i!=0)
            {
                arr[index]=i;
                index++;
            }
        }
        while(index<nums.size())
        {
            arr[index]=0;
            index++;
        }
        nums=arr;
    }
};