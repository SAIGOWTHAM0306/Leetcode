class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalXor=0;
        for(auto num:nums){
            totalXor^=num;
        }
        for(int i=0;i<=nums.size();i++){
            totalXor^=i;
        }
        return totalXor;
    }
};