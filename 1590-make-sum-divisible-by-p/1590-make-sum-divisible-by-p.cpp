class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long int total_sum = 0;
        int n = nums.size();
        
        for (int num : nums) {
            total_sum += num;
        }
        
        if (total_sum % p == 0) {
            return 0;
        }
        
        long long int remainder = total_sum % p;
        long long int prefix_sum = 0;
        int min_length = n;
        unordered_map<int, int> prefix_map; 
        
        prefix_map[0] = -1;  
        
        for (int i = 0; i < n; ++i) {
            prefix_sum = (prefix_sum + nums[i]) % p;
            
        
            int target = (prefix_sum - remainder + p) % p;
            
            
            if (prefix_map.find(target) != prefix_map.end()) {
                min_length = min(min_length, i - prefix_map[target]);
            }
            
            
            prefix_map[prefix_sum] = i;
        }
        
        return (min_length == n) ? -1 : min_length;
    }
};
