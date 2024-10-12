class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prevBit=n&1;
        n>>=1;
        while(n){
            int currBit=n&1;
            if(prevBit==currBit) return false;
            prevBit=currBit;
            n>>=1;
        }
        return true;
    }
};