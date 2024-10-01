class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
         int n=arr.size();
        vector<int>ans(k,0);
       
        for(int i=0;i<n;i++)
        {
             int rem=arr[i]%k;
            
            if(rem<0)
            {
                rem=rem+k;
            }
            ans[rem]++;
        }
             if(ans[0]%2!=0)
                 {
                 return false ;
                 }
             for(int i = 1;i <= k / 2;i++)
             {
              if(ans[i] != ans[k-i])
              {
                return false;
              }
             }
        
        
       return true;
        
    }
};