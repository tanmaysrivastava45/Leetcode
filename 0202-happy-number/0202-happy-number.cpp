class Solution {
public:
    bool isHappy(int n) {
        
        while(n!=1 && n!=4) // 4 has to be included as it has been seen repeating however there is an other                method which we will do later that is with unorderd map 
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