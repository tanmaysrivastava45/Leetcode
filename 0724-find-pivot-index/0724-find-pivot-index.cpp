// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         //logic should be sum of elements from start to mid-1 = mid+1 to end;
//         int start=0;
//         int n=nums.size();
//         int end=n-1;
        
        
//         while(start<=end)
//         {    
//             int sum1=0;
//         int sum2=0;
//             int mid=start+(end-start)/2;
//         for(int i=0;i<mid;++i)
//         {
//             sum1=sum1+nums[i];
//         }
//         for(int i=mid+1;i<n;++i)
//         {
//             sum2=sum2+nums[i];
//         }
//         if(sum1==sum2)
//         {
//             return mid;
//         }
//         else if(sum1<sum2)
//         {
//             start=mid+1;
//         }
//         else 
//         {end=mid-1;}
            
          
        
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int leftSum = 0;

        // Compute the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Traverse the array to find the pivot index
        for (int i = 0; i < n; ++i) {
            // Check if the left sum equals the right sum
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            // Update the left sum for the next iteration
            leftSum += nums[i];
        }

        // Return -1 if no pivot index is found
        return -1;
    }
};

