class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
         vector<vector<int>> result;
        if (n < 2) return result; // If n is less than 2, there can't be any prime pairs
        
        // Step 1: Generate all prime numbers up to n using Sieve of Eratosthenes
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
        
        for (int i = 2; i * i <= n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Step 2: Check for prime pairs
        for (int x = 2; x <= n / 2; ++x) {
            if (isPrime[x] && isPrime[n - x]) {
                result.push_back({x, n - x});
            }
        }
        
        return result;
    }
};