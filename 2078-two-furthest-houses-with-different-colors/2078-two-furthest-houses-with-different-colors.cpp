class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        
        int max=0;
        
        for(int i=0;i<n;i++)
        {
            // if(colors[i-1]==colors[i])
            // {
            //     i++;
            // }
            for(int j=0;j<n;j++)
            { int ans=0;
            if(colors[i]!=colors[j]&& i!=j)
            {               

                ans=abs(j-i);
                if(ans>max)
                {
                    max=ans;
                }
                
            }
            }
        }
        return max;
    }
};