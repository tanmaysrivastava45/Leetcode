class Solution {
public:
    // int countPrimes(int n) {
    //     int count=0;
    //     vector<bool>arr(n+1,true);
    //     arr[0]=arr[1]=false;
    //     for(int i=2;i<n;i++)
    //     {
    //         if(arr[i]==true)
    //         {
    //             count++;
    //             for(int j=2*i;j<n;j=j+i)
    //             {
    //                 arr[j]=false;
    //             }
    //         }
    //     }
    //     return count;
    vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }
    return primes;
}


int countPrimes(int n) {
    if (n <= 2) return 0; 
    
    int limit = sqrt(n);
    vector<int> primes = simpleSieve(limit); 
    vector<bool> isPrime(n, true);
    
    isPrime[0] = isPrime[1] = false;
    
    
    for (int prime : primes) {
        int start = prime * prime;
        if (start >= n) continue;  
        
        for (int j = start; j < n; j += prime) {
            isPrime[j] = false;
        }
    }
    
   
    int primeCount = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            primeCount++;
        }
    }
    
    return primeCount;

    }
};