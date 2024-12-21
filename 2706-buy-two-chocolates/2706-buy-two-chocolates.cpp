class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        int sum=0;
        int count=0;
        sort(prices.begin(),prices.end());
        for(int i=0;i<n;i++)
        {
            if(sum<money)
            {
            sum=sum+prices[i];
                if(sum<=money){
                     count++;
                }
            }
            if(count==2)break;
        }
        if(count!=2)
        {
            return money;
        }
        return money-sum;
    }
};