class Solution {
public:
    bool judgeSquareSum(int c) {
       int s=0;
       int e=sqrt(c);

        
        while(s<=e)
        {
            long long int sqr1=s*s;
            long long int sqr2=e*e;
            if(sqr1+sqr2==c)
            {
                return true;
                
            }
            if(sqr1+sqr2<c)
            {
                s++;
            }
            else {
                e--;
            }
             
        }
        return false;
        
    }
};