// class Solution {
// public:
//     long long minimumSteps(string s) {
//         int n=s.size();
//         int count=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(s[i]=='1'&& s[j]=='0')
//                 {
//                     swap(s[i],s[j]);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    long long minimumSteps(string s) {
        vector<int> blackPositions;  // To store the positions of '1's (black balls)
        
        // Step 1: Collect all positions where '1' occurs
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') {
                blackPositions.push_back(i);
            }
        }

        int m = blackPositions.size();  // Total number of black balls
        if (m == 0) {
            return 0;  // No black balls, no swaps needed
        }

        // Step 2: Calculate the minimum number of swaps
        long long minSteps = 0;
        for (int i = 0; i < m; ++i) {
            // The final position for the i-th black ball should be i (contiguously)
            // We add how far it needs to move from its current position
            minSteps += (blackPositions[i] - (i + (s.size() - m)));
        }

        return abs(minSteps);
    }
};
