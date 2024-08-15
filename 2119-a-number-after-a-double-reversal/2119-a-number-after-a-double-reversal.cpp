// class Solution {
// public:
//     bool isSameAfterReversals(int num) {
//         int n=to_string(num).length();
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             int x=num%10;
//             ans=ans*10+x;
            
//         }      
//         int a=to_string(ans).length();
//         int result=0;
//         for(int i=0;i<a;i++)
//         {
//             int y=ans%10;
//             result=result*10+y;
//         }
//         if(num==result)
//         {
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isSameAfterReversals(int num) {
        // If num is 0, it's always the same after any number of reversals
        if (num == 0) return true;

        // If num is not 0 and is divisible by 10, reversing will change the number
        if (num % 10 == 0) return false;

        return true;
    }
};
