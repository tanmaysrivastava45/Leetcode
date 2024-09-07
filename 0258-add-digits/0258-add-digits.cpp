class Solution {
public:
    int addDigits(int num) {
        int digit =0;
        while(num>=10)
        {
            int sum=0;
            while(num>0)
            {
            digit=num%10;
            sum=sum+digit;
            num=num/10;
            }
            num=sum;
        }
        
        
        return num;
    }
};