class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        for(int i=31;i>=0;i--){
            int mask=1<<i;
            if((x&mask)!=(y&mask)){
                count++;
            }
        }
        return count;
    }
};