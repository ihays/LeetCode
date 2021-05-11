/***********************************************************************************************
Problem      Count Primes
Developer    Ian Hays
Date         05/10/2021
URL          https://leetcode.com/problems/count-primes/
Space        O(N) 
Time         O(N*LOG(N))
Description  Using Sieve of Eratosthenes algorithm to count prime numbers less than n.
************************************************************************************************/

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n, true);
        int res = 0;
        for(long long i = 2; i < n; i++){
            if(isPrime[i]){
                res++;
                for(long long j = i*i; j < n; j += i){
                    isPrime[j] = false;
                }      
            } 
        }
        return res;
    }  
};
