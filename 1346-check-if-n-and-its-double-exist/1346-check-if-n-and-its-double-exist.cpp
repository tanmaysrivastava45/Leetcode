class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==2*arr[j] && i!=j || arr[j]==2*arr[i])
                {
                    return 1;
                    break;
                }
            }
        }
        return 0;
    }
};