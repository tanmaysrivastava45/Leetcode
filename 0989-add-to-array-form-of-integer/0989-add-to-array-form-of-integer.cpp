// this method was good but it provides an overflow condition when the array has a lot of elements
// class Solution {
// public:
//     vector<int> addToArrayForm(vector<int>& num, int k) {
//         vector<int>v;
//         long long int ans=0;
//         for(int i=0;i<num.size();i++)
//         {
//             ans=ans*10+num[i];
//         }
//         long long int sum=ans+k;
//         int digit=0;
//         // if(sum==0)
//         // {
//         //     return {0};
//         // }
//         while(sum>0)
//         {
//             digit=sum%10;
//             sum=sum/10;
//             v.push_back(digit);
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
        int n=num.size();
        int i=n-1;
        int carry=k;
        while(i>=0 || carry>0 )  // for the case when carry will be left over while i is finished 
        {
            if(i>=0) // we put this function in if because if carry will be left over then it won't work
            {
                carry=carry+num[i];
                i--;
            }
            v.push_back(carry%10);
            carry=carry/10;
        }
        reverse(v.begin(),v.end());  
        return v;
    }
};
