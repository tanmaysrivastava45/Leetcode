class Solution {
public:
    const int MOD = 1e9 + 7;

    long long countGoodNumbers(long long n) {
        // Calculate power for even and odd positions
        long long evenCount = (n + 1) / 2;  // Number of even-indexed positions
        long long oddCount = n / 2;         // Number of odd-indexed positions

        // Result = (5^evenCount * 4^oddCount) % MOD
        return (modExp(5, evenCount, MOD) * modExp(4, oddCount, MOD)) % MOD;
    }

private:
    long long modExp(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;  // Multiply base when exp is odd
            }
            base = (base * base) % mod;         // Square the base
            exp /= 2;                           // Reduce exponent by half
        }
        return result;
    }
};
