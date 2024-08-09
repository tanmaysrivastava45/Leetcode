class Solution {
public:
    int search(vector<int>& nums, int target) {
            
        int s = 0, e = nums.size() - 1;

        while (s <= e)
        {
            int mid = (s + e) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[s] <= nums[mid]) {
                // Left side is sorted
                if (nums[s] <= target && target < nums[mid])
                {
                    e = mid - 1;
                }
                else 
                {
                    s = mid + 1;
                }
            } 
            else 
            {
                // Right side is sorted
                if (nums[mid] < target && target <= nums[e]) {
                    s= mid + 1;
                } 
                else
                {
                    e = mid - 1;
                }
            }
        }

        return -1;

    }
};