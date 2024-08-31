class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i]%3;
            sum+=min(3-(nums[i]%3),nums[i]%3);
        }
        return sum;
    }
};