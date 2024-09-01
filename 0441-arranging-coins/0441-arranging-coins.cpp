class Solution {
public:
    int arrangeCoins(int n) {
        long long int sum=0;
        int ans=0;
       for (int i=1;i<=n;i++)
       {
           sum=sum+i;
           if(n==sum)
           {
               ans=i;
           }
           else if(sum>n)
           {
               ans=i-1;
               break;
           }
           
           
       }
        return ans;
        
    }
};