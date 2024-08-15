class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp(m+n);
        int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                temp[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
                   temp[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<m)
        {
            temp[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n)
        {
         temp[k]=nums2[j];
          j++;
          k++;
        }
        for(k=0;k<m+n;k++)
        {
            nums1[k]=temp[k];
        }
    }
};
// another approah
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         // Start merging from the end of nums1 to avoid overwriting
//         int i = m - 1; // Last index of the initialized part of nums1
//         int j = n - 1; // Last index of nums2
//         int k = m + n - 1; // Last index of nums1
        
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }
        
//         // If there are remaining elements in nums2, copy them
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };
