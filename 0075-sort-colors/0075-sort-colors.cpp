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


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n= nums.size();
//         for(int i=1;i<n;i++)
//         {
//             bool swappp=false;// to reduce the time complexity in case the array is already sorted 
//             for(int j=0;j<n-i;j++)
//             {
//                 if(nums[j]>nums[j+1])
//                 {
//                     swap(nums[j],nums[j+1]);
//                     swappp=true;
//                 }
                
//             }
//             if(swappp==false)
//             {
//                 break;
//             }
//         }
//     }
// };

// Insertion sort

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int temp=nums[i];
            int j=i-1;
            for(;j>=0;j--)
            {
                if(nums[j]>temp)
                {
                    nums[j+1]=nums[j];
                }
                else
                {break;}
                
            }
            nums[j+1]=temp;// j gets reduced to -1 in first iteration 
        }
             
    }
};
