
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int maxFromRight = -1; // Initialize to -1 for the last element

        for (int i = n - 1; i >= 0; --i) {
            ans[i] = maxFromRight; // Set current position to the max found on the right
            maxFromRight = max(maxFromRight, arr[i]); // Update maxFromRight
        }

        return ans;
    }
};
