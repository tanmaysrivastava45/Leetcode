class Solution {
public:
    double myPow(double x,long long int n) {
        double ans=1;
        long long int a=abs(n);
        while(a>0) // what i thought was to get it done by for loop but it was giving TLE error so better use this even odd method
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
