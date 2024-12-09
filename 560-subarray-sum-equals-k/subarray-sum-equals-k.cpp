class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int prefixSum[nums.size()];
        prefixSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=(i==0)?prefixSum[j]:prefixSum[j]-prefixSum[i-1];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};