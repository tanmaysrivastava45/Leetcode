#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
       
        sort(items.begin(), items.end());
        
        int maxBeauty = 0;
        for (int i = 0; i < items.size(); i++) {
            maxBeauty = max(maxBeauty, items[i][1]);
            items[i][1] = maxBeauty;  
        }
        
        vector<int> ans;
        for (int query : queries) {
            
            int left = 0, right = items.size() - 1;
            int bestBeauty = 0;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (items[mid][0] <= query) {
                    bestBeauty = items[mid][1];
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            ans.push_back(bestBeauty);
        }
        
        return ans;
    }
};
