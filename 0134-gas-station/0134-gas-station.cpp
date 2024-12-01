class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans=0;
        int n=gas.size();
        int sumg=0;
        int sumc=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
         sumg=sumg+gas[i];   
         sumc=sumc+cost[i];
        }
        if(sumg<sumc)
        {
            return -1;
        
        }
            for(int i=0;i<n;i++)
            {
                 curr+=gas[i]-cost[i];
                if(curr<0)
                {
                    ans=i+1;
                    curr=0;
                }
                
            }
            return ans;
        
    }
};