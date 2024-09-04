class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
          int totalDrank = 0; // Total bottles drank
        
        int fullBottles = numBottles; // Initial full bottles
        int emptyBottles = 0;         // Initial empty bottles
        
        while (fullBottles > 0) {
            // Drink all the full bottles
            totalDrank += fullBottles;
            emptyBottles += fullBottles; // All full bottles turn into empty bottles
            fullBottles = emptyBottles / numExchange; // Exchange empty bottles for full bottles
            emptyBottles = emptyBottles % numExchange; // Remaining empty bottles after exchange
        }
        
        return totalDrank;
    }
};