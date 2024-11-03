class Solution {
public:
    bool isBalanced(string num) {
        int n=num.length();
        bool is =true;
        int sume=0;
        int sumo=0;
        for(int i=0;i<n;i++)
        {
             if(i%2==0)
             {
                 sume=sume+(num[i]-'0');
             }
            else{
                sumo=sumo+(num[i]-'0');
            }
        }
        if(sume==sumo)
        {
            is= true;
        }
        else{
            is=false;
        }
        return is;
        
    }
};