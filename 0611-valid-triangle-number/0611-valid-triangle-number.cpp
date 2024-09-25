class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        // Edge case: If there are fewer than 3 sides, no triangle can be formed
        if (nums.size() < 3) {
            return 0;
        }
        int n=nums.size();
        // Sort the array so that we can easily compare sides
        sort(nums.begin(),nums.end());

        int ans = 0; // Variable to store the count of valid triangles

        // Triple nested loop to pick 3 sides
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    // Check if the sum of the two smaller sides is greater than the largest side
                    if (nums[i] + nums[j] > nums[k]) {
                        ans++; // It's a valid triangle, increment the count
                    }
                }
            }
        }

        // Return the total number of valid triangles
        return ans;

    }
};