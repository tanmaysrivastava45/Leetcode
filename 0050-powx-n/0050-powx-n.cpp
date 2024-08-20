class Solution {
public:
    double myPow(double x,long long int n) {
        double ans=1;
        long long int a=abs(n);
        while(a>0)
        {
          if(a%2==1)
          {
            ans=ans*x;
          }
            x=x*x;
            a=a/2;
        }
        if(n<0)
        {
            ans=1/ans;
        }
        
        return ans;
    }
};