class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        // just count the number of bits at that bit position and to count that we will us simple addition approach
        int n=candidates.size();
        vector<int>bits(32);
        for(int i=0;i<n;i++)
        {
            int idx=31;
            while(candidates[i]>0)
            {
                bits[idx] +=candidates[i]%2;
                candidates[i]=candidates[i]/2;
                idx--;
                
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            ans=max(ans,bits[i]);
        }
        return ans;
    }
};