class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int maxRamp = 0;

        // Create a vector of pairs (value, index) to sort by value
        vector<pair<int, int>> numIndexPairs(n);
        for (int i = 0; i < n; ++i) {
            numIndexPairs[i] = {nums[i], i};
        }

        // Sort by value
        sort(numIndexPairs.begin(), numIndexPairs.end());

        // Track the minimum index
        int minIndex = n; // Start with an invalid large index

        // Traverse the sorted pairs to find maximum ramp width
        for (const auto& pair : numIndexPairs) {
            int index = pair.second;
            // Update the minimum index seen so far
            if (index < minIndex) {
                minIndex = index;
            }
            // Calculate ramp width and update maxRamp
            maxRamp = max(maxRamp, index - minIndex);
        }

        return maxRamp;
    }
};
