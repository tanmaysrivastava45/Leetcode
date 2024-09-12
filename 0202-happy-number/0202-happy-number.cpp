class Solution {
public:
    bool isHappy(int n) {
        
        while(n!=1 && n!=4)
        {
       long long int sum=0;
        while(n>0)
        {
            int a=n%10;
            sum=sum+a*a;
            n=n/10;    
        }
          n=sum;
        }
        return n==1;
        
       
    }
};