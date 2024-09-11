class Solution {
public:
     int alternateDigitSum(int n) {
        int total = 0;
        int sign = 1;   

        
        int reversedNumber = 0;
        while (n > 0) {
            reversedNumber = reversedNumber * 10 + n % 10;
            n /= 10;
        }

    
        while (reversedNumber > 0) {
            int digit = reversedNumber % 10; 
            total += digit * sign;           
            sign *= -1;                     
            reversedNumber /= 10;            
        }

        return total;
    }

};