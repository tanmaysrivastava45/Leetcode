class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> results;

        
        for (int i = 0; i <= n - k; i++) {
            bool isConsecutive = true;
            int maxElement = nums[i];
            
            
            for (int j = i + 1; j < i + k; j++) {
                if (nums[j] != nums[j-1] + 1) {
                    isConsecutive = false;
                    break;
                }
                maxElement = max(maxElement, nums[j]);
            }
            
            
            if (isConsecutive) {
                results.push_back(maxElement);
            } else {
                results.push_back(-1);
            }
        }
        
        return results;
    }
};
