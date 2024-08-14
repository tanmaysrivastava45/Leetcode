
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newarray = 0;
        int n=nums.size();
        
        // Traverse the array
        for (int i = 0; i < n; i++) {
            // If the current element is not the target value, keep it
            if (nums[i] != val) {
                nums[newarray] = nums[i];
                newarray++;
            }
        }
        
        return newarray;
    }
};
