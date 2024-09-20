class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation of both strings in both orders is the same
        if (str1 + str2 != str2 + str1) {
            return ""; // No common divisor string exists
        }
        
        // Calculate the greatest common divisor of the lengths of the strings
        int gcdLength = gcd(str1.length(), str2.length());
        
        // The GCD string will be the prefix of length gcdLength from str1
        return str1.substr(0, gcdLength);
    
    }
};