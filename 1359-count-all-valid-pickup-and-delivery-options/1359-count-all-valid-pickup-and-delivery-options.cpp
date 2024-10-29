class Solution {
public:
    int countOrders(int n) {
        long long int ans=1;
        long long int mod=1000000007;
        for(int i=1;i<=n;i++){
            ans=(ans*i)%mod;
            ans=(ans*(2*i-1))%mod;}
        return ans;
    }
};