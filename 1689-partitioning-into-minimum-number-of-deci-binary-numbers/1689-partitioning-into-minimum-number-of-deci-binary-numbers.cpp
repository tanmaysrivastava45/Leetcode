class Solution {
public:
    int minPartitions(string n) {
        //stoi(n);
        int maxi=0;
        for(int i=0;i<n.length();i++)
        {
            maxi=max(n[i]-'0',maxi);
        }
        return maxi;
    }
};