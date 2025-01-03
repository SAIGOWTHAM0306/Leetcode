class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(int arr:nums){
            sum+=arr;
        }
        long long prefixSum=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            prefixSum+=nums[i];
            if(prefixSum>=(sum-prefixSum)){
                count++;
            }
        }
        return count;
    }
};