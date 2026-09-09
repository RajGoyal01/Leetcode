class Solution {
public:
    long long countCommas(long long n) {
        long long total_commas = 0;
        long long base = 1000;

        while (base <= n) {
            total_commas += (n - base + 1);
            if (base > n / 1000) break; 
            base *= 1000;
        }

        return total_commas;
    }
};