class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i) {
            // Shift result to the left to make space for the next bit
            result <<= 1;
            // Extract the last bit of n and add it to result
            result |=(n & 1);//bit wise operator
            // Shift n to the right to process the next bit
            n >>= 1;
        }
        return result;
    }
};
