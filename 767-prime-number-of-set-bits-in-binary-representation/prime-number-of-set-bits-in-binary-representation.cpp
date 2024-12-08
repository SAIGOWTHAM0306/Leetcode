class Solution {
public:
    int helper(int n) {
        // count set bits
        int setBits = 0;
        while (n) {
            setBits += n % 2;
            n /= 2;
        }

        // check prime
        if (setBits == 1) return 0;
        for (int i = 2; i < setBits; i++) {
            if (setBits % i == 0) return 0;
        }
        return 1;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            ans += helper(i);
        }
        return ans;
    }
};