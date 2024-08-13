// selection sorting 
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n-1;i++)
//         {
//             int minindex=i;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[j]<nums[minindex])
//                 {
//                     minindex=j;
//                 }
//             }
//             swap(nums[i],nums[minindex]);
//         }
//     }
// };


// bubble sorting


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};