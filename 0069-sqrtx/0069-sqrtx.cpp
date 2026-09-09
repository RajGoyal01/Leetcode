class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int low = 1;
        int high = x / 2;
        int ans=0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sqrt = mid * mid;

            if (sqrt == x) {
                return mid;
            } else if (sqrt < x) {
                ans=mid;
                low = mid + 1; 
            } else {
                high = mid - 1;  
            }
        }

        return ans;
    }
};